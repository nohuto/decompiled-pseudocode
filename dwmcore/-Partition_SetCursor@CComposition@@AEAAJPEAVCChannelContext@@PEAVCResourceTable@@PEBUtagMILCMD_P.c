__int64 __fastcall CComposition::Partition_SetCursor(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETCURSOR *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  __int64 v8; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0xC4u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket(this, 4261279585LL, 0LL);
  if ( *((_BYTE *)a4 + 8) )
  {
    v7 = CComposition::AddCursorVisual(this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x512u, 0LL);
  }
  else
  {
    CComposition::RemoveCursorVisual(this, Resource);
  }
  return 0LL;
}
