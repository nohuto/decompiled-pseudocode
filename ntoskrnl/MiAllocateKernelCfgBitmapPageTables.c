/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x140A411E8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1407F72E0 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x14036C240 (MiMakeZeroedPageTables.c)
 *     MiAcquireKernelCfgLock @ 0x140A41184 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x140A41450 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  __int64 PteAddress; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140C654B0 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v6);
  v9 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 9) )
    v9 = -1073741670;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
