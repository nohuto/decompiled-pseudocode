/*
 * XREFs of MiMarkKernelCfgTarget @ 0x14035D3FC
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A41358 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x14093F234 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x40000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
