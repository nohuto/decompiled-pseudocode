/*
 * XREFs of MiUnlockNestedVad @ 0x140A44F98
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14065E63C (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
