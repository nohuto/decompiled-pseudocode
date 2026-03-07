void KseDriverScopeInitialize()
{
  __int64 v0; // rax

  if ( (int)KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL) >= 0 )
  {
    v0 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v0]) = 0;
    LODWORD(KsepHistoryMessages[v0]) = 721040;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(11LL, "KSE-DS: driver scope shim registered.\n");
    KsepLogInfo(11, "KSE-DS: driver scope shim registered.\n");
  }
}
