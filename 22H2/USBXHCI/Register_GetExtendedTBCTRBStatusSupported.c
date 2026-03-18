/*
 * XREFs of Register_GetExtendedTBCTRBStatusSupported @ 0x1C0013574
 * Callers:
 *     Controller_Start @ 0x1C0014F8C (Controller_Start.c)
 * Callees:
 *     Register_GetExtendedTBCEnable @ 0x1C001359C (Register_GetExtendedTBCEnable.c)
 */

bool Register_GetExtendedTBCTRBStatusSupported()
{
  __int64 v0; // rcx

  return (unsigned __int8)Register_GetExtendedTBCEnable() && (*(_DWORD *)(v0 + 108) & 0x80) != 0;
}
