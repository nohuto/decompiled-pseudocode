/*
 * XREFs of KiSetAddressPolicy @ 0x140207990
 * Callers:
 *     KiSwapProcess @ 0x1402071F0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140207300 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14031B8E0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140387DA0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14099F4C8 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403FEB80 (KxSetAddressPolicy.c)
 */

__int64 KiSetAddressPolicy()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+20h] [rbp-8h]

  _disable();
  KxSetAddressPolicy();
  result = v1 >> 9;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
