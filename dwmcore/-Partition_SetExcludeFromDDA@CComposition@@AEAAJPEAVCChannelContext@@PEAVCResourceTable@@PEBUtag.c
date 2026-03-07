__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CVisualGroup **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  __int64 v8; // rcx
  CVisualGroup *v9; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xC4u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, -229628237, 0LL);
  if ( *((_BYTE *)a4 + 8) )
  {
    v7 = CComposition::AddToDDAExcludeVisualList((CComposition *)this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x558u, 0LL);
  }
  else
  {
    v9 = this[126];
    if ( v9 )
      CVisualGroup::RemoveVisual(v9, Resource);
  }
  return 0LL;
}
