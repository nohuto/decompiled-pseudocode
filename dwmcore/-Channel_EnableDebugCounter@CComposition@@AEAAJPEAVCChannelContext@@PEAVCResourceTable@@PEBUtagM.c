__int64 __fastcall CComposition::Channel_EnableDebugCounter(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ENABLEDEBUGCOUNTER *a4)
{
  char v4; // al

  v4 = *((_BYTE *)a4 + 4) != 0;
  if ( *((_BYTE *)a2 + 72) != v4 )
  {
    *((_BYTE *)a2 + 72) = v4;
    CComposition::UpdateDebugCounter(this, *((_BYTE *)a4 + 4) != 0);
  }
  return 0LL;
}
