/*
 * XREFs of ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E3F10
 * Callers:
 *     VidMmInvalidateAllVirtualAddresses @ 0x1C002D210 (VidMmInvalidateAllVirtualAddresses.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllVirtualAddresses(VIDMM_GLOBAL *this)
{
  _DWORD v2[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(&v2[1], 0, 0x54uLL);
  v2[0] = 127;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2, 1);
}
