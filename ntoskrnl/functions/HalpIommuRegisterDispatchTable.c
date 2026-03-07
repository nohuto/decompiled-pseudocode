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
