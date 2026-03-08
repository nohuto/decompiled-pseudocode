/*
 * XREFs of ZwSetInformationProcess @ 0x140412690
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1405F4F00 (DifZwSetInformationProcessWrapper.c)
 *     RtlCreateUserStack @ 0x1406A3030 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x14078F9F0 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
