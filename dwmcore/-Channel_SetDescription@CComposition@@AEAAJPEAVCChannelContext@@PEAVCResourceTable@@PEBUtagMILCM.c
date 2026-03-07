__int64 __fastcall CComposition::Channel_SetDescription(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETDESCRIPTION *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // r8
  const char *v8; // rdx

  v6 = *((unsigned int *)a4 + 1);
  v8 = (char *)a4 + 8;
  if ( a6 < (int)v6 + 1 || v8[v6] )
    CComposition::FailFastOnMalformedPacket(this, 1252792891LL, 0LL);
  CChannelContext::SetOwnerProcessName(a2, v8, v6);
  return 0LL;
}
