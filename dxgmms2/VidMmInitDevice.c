/*
 * XREFs of VidMmInitDevice @ 0x1C0011FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C00AA04C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VidMmInitDevice(VIDMM_DEVICE *a1)
{
  return VIDMM_DEVICE::Init(a1, 0, 0LL);
}
