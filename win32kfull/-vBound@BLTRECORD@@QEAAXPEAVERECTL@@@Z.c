/*
 * XREFs of ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0291F78
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0291D14 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::vBound(BLTRECORD *this, struct ERECTL *a2)
{
  *(_DWORD *)a2 = (*((_DWORD *)this + 2 * *((int *)this + 54) + 28) + 15) >> 4;
  *((_DWORD *)a2 + 1) = (*((_DWORD *)this + 2 * *((int *)this + 55) + 29) + 15) >> 4;
  *((_DWORD *)a2 + 2) = (*((_DWORD *)this + 2 * (*((int *)this + 54) ^ 3LL) + 28) + 15) >> 4;
  *((_DWORD *)a2 + 3) = (*((_DWORD *)this + 2 * (*((int *)this + 55) ^ 3LL) + 29) + 15) >> 4;
  ERECTL::vOrder(a2);
}
