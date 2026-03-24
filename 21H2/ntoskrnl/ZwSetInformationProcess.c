/*
 * XREFs of ZwSetInformationProcess @ 0x1403FA720
 * Callers:
 *     RtlCreateUserStack @ 0x14064C4A8 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406AF9A8 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407C606C (CmpInitializeRegistryProcess.c)
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
