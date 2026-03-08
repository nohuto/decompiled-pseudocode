/*
 * XREFs of HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C0020ED0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C002C21C (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero(__int64 a1)
{
  return HUBDTX_ValidateFirstDeviceDescriptorFor20(*(_QWORD *)(a1 + 960));
}
