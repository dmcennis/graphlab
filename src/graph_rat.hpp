template GraphRATNode <NodeClass> {
protected:
	std::string type;
	long id;
	NodeClass content;
	GraphNodeProperties* properties;
};

class GraphNodeProperties {
protected:
	std::map<std::string,std::vector<std::string>> properties;
};

template GraphNodeEdge <EdgeClass> {
protected:
	std::string type;
	EdgeClass content;
};

template GraphRATGatherType <GatherType> {
	GatherType type;
	std::string property_name;
};
