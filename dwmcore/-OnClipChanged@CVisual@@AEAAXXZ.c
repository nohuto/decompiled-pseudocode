void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  __int64 v2; // r10
  struct _LIST_ENTRY *i; // rdx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v5; // rdi
  CProjectedShadowCaster **j; // rbx

  *((_BYTE *)this + 498) = 1;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      BYTE2(i[-13].Blink) = 1;
  }
  if ( (**(_DWORD **)(v2 + 232) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v2);
    v5 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v5; ++j )
      CProjectedShadowCaster::InvalidateMaskContent(*j);
  }
}
