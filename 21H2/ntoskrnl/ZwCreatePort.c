/*
 * XREFs of ZwCreatePort @ 0x1403FBC80
 * Callers:
 *     SeRmInitPhase1 @ 0x140A4CA3C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
