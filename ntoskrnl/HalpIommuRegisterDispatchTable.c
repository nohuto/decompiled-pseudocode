/*
 * XREFs of HalpIommuRegisterDispatchTable @ 0x140B72980
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall HalpIommuRegisterDispatchTable(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax

  if ( HalIommuDispatchCalled )
    KeBugCheckEx(0x5Cu, 0xA000uLL, BugCheckParameter2, HalIommuDispatch, 0LL);
  result = HalIommuDispatch;
  HalIommuDispatchCalled = 1;
  *(_QWORD *)HalIommuDispatch = HalpIommuSupportEnabled;
  return result;
}
