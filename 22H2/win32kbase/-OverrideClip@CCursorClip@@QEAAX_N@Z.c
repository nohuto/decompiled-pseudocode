/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01A2B6C
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C0096EEC (SetInputDelegationModeImpl.c)
 *     DisableDelegation @ 0x1C00AA5D0 (DisableDelegation.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C005B5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  CCursorClip *v2; // rdi
  int v3; // esi
  int v4; // eax
  bool v5; // sf

  v2 = gpCursorClip;
  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v4 = 2 * v3 - 1;
  v5 = v4 + *((_DWORD *)v2 + 18) < 0;
  *((_DWORD *)v2 + 18) += v4;
  if ( v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 99);
  CPushLock::ReleaseLock((CCursorClip *)((char *)v2 + 32));
}
