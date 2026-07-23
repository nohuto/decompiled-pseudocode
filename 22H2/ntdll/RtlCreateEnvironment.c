/*
 * XREFs of RtlCreateEnvironment @ 0x18004B1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateEnvironment(BOOLEAN CloneCurrentEnvironment, PVOID *Environment)
{
  return RtlCreateEnvironmentEx(0LL, Environment, CloneCurrentEnvironment == 0 ? 4 : 0);
}
