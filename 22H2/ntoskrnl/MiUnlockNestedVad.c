/*
 * XREFs of MiUnlockNestedVad @ 0x140A47C68
 * Callers:
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiFreeVadRange @ 0x140309A70 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x140625F6C (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140660C8C (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
