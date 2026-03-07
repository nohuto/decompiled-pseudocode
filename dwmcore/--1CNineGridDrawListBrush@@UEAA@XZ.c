void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    std::default_delete<CDrawListBrush>::operator()(v2, v3);
}
