void __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::~CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>(
        CResource *this)
{
  std::vector<MilRectF>::_Tidy((__int64)this + 96);
  std::vector<MilRectF>::_Tidy((__int64)this + 72);
  CResource::~CResource(this);
}
