/*
 * XREFs of ZwSetInformationProcess @ 0x14041BAE0
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x140627690 (DifZwSetInformationProcessWrapper.c)
 *     RtlpWow64CreateUserStack @ 0x1406C9D2C (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1407E4A98 (RtlCreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140831BF4 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
