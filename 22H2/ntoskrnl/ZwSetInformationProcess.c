/*
 * XREFs of ZwSetInformationProcess @ 0x1403F9DA0
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x140692B5C (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1406C5268 (RtlCreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140799280 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
