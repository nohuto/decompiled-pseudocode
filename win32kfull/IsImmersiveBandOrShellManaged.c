/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x1C00216FC
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01CF6A0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx

  v2 = IsNonImmersiveBand(a1, a2, a1);
  v4 = 0;
  if ( !v2 || (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x40) != 0 )
    return 1;
  return v4;
}
