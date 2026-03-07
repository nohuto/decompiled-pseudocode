__int64 __fastcall CComposition::Channel_SuspendAnimations(
        CExpressionManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SUSPENDANIMATIONS *a4)
{
  CExpressionManager::SuspendAnimations(this[53], *((_DWORD *)a2 + 4), *((_BYTE *)a4 + 4) != 0, *((_BYTE *)a4 + 5) != 0);
  return 0LL;
}
