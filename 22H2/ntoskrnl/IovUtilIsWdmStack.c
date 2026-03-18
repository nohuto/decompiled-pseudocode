/*
 * XREFs of IovUtilIsWdmStack @ 0x140AD3CB0
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x140AE7FB0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE8140 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PpvUtilIsPdo @ 0x140AC3024 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140AD3A00 (IovUtilGetBottomDeviceObjectWithTag.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObjectWithTag; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // r8

  BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
  ObfDereferenceObjectWithTag(v3, 0x49667256u);
  return IsPdo;
}
