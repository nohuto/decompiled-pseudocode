/*
 * XREFs of MiLockNestedVad @ 0x140A44F48
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = KeAbPreAcquire(a1 + 40, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
