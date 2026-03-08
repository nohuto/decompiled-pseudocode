/*
 * XREFs of ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C0185820
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall vFreeDriverInfo2(struct _DRIVER_INFO_2W *a1)
{
  char *v1; // rbx

  if ( a1 )
  {
    v1 = (char *)a1 - 32;
    PopThreadGuardedObject((_QWORD *)a1 - 4);
    if ( v1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  }
}
