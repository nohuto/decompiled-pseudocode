/*
 * XREFs of _lambda_dfe4e534aa9c3c6c50daad1fe50e4ac0_::_lambda_invoker_cdecl_ @ 0x1C00CC610
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0058230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_dfe4e534aa9c3c6c50daad1fe50e4ac0_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 392) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3577LL);
      v2 = *(void **)(a1 + 384);
      *(_BYTE *)(a1 + 392) = 1;
      ZwSetEvent(v2, 0LL);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
