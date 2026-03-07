__int64 __fastcall CComposition::Channel_SetApplicationId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETAPPLICATIONID *a4,
        const void *a5,
        unsigned int a6)
{
  const unsigned __int16 *v7; // rdx

  v7 = (const unsigned __int16 *)((char *)a4 + 8);
  if ( a6 <= 2 )
    v7 = 0LL;
  CChannelContext::SetApplicationId(a2, v7);
  return 0LL;
}
