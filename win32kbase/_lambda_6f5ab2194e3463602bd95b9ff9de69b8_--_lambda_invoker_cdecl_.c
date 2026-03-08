/*
 * XREFs of _lambda_6f5ab2194e3463602bd95b9ff9de69b8_::_lambda_invoker_cdecl_ @ 0x1C00DF090
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00397E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_6f5ab2194e3463602bd95b9ff9de69b8_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 1056) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 392) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3752LL);
      v2 = *(void **)(a1 + 344);
      *(_BYTE *)(a1 + 392) = 1;
      ZwSetEvent(v2, 0LL);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
