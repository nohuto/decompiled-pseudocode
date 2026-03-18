/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiGetPixel @ 0x1C008A200 (NtGdiGetPixel.c)
 *     GreGetDIBColorTable @ 0x1C008A670 (GreGetDIBColorTable.c)
 *     GreExtTextOutRect @ 0x1C008AD4C (GreExtTextOutRect.c)
 *     NtGdiSetPixel @ 0x1C012EFA0 (NtGdiSetPixel.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027916C (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B4434 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B6140 (GreSetDIBColorTable.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
