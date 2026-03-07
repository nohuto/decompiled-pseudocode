void __fastcall FxPkgGeneral::~FxPkgGeneral(FxPkgGeneral *this, unsigned int a2)
{
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rbx
  FX_POOL_TRACKER *Flink; // rcx
  _LIST_ENTRY *v5; // rax

  this->__vftable = (FxPkgGeneral_vtbl *)FxPkgGeneral::`vftable';
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  while ( 1 )
  {
    Flink = (FX_POOL_TRACKER *)p_m_FileObjectInfoHeadList->Flink;
    if ( p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList )
      break;
    if ( Flink->Link.Blink != p_m_FileObjectInfoHeadList
      || (v5 = Flink->Link.Flink, (FX_POOL_TRACKER *)Flink->Link.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_m_FileObjectInfoHeadList->Flink = v5;
    v5->Blink = p_m_FileObjectInfoHeadList;
    Flink->Link.Blink = &Flink->Link;
    Flink->Link.Flink = &Flink->Link;
    FxPoolFree(Flink);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
