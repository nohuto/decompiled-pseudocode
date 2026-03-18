/*
 * XREFs of ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028F724
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028F258 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028F4C0 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::vBound(BLTRECORD *this, struct ERECTL *a2)
{
  *(_DWORD *)a2 = (*((_DWORD *)this + 2 * *((int *)this + 54) + 28) + 15) >> 4;
  *((_DWORD *)a2 + 1) = (*((_DWORD *)this + 2 * *((int *)this + 55) + 29) + 15) >> 4;
  *((_DWORD *)a2 + 2) = (*((_DWORD *)this + 2 * (*((int *)this + 54) ^ 3LL) + 28) + 15) >> 4;
  *((_DWORD *)a2 + 3) = (*((_DWORD *)this + 2 * (*((int *)this + 55) ^ 3LL) + 29) + 15) >> 4;
  ERECTL::vOrder(a2);
}
