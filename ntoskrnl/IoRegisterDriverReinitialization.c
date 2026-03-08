/*
 * XREFs of IoRegisterDriverReinitialization @ 0x14084D540
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x1405DE720 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x1403A3A3C (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *Pool2; // rax

  ObfReferenceObject(DriverObject);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1767010121LL);
  if ( Pool2 )
  {
    DriverObject->Flags |= 8u;
    Pool2[2] = DriverObject;
    Pool2[3] = DriverReinitializationRoutine;
    Pool2[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
