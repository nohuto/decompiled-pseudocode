/*
 * XREFs of MiSetImageProtection @ 0x140357D28
 * Callers:
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C764 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075C7B4 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x140789F28 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
