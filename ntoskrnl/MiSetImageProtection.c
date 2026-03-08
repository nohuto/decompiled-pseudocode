/*
 * XREFs of MiSetImageProtection @ 0x1402E3BB8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiCompactServiceTable @ 0x14076F608 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x14076F7A4 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407849F8 (MiProcessKernelCfgImageLoadConfig.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A32268 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A37AC0 (MiPatchDataPagesCallback.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
