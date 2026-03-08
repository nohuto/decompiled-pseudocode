/*
 * XREFs of ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300
 * Callers:
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00502A0 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0056684 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::RestoreAttributes(DC *this, struct _DC_ATTR *a2)
{
  char *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rdx

  v2 = (char *)this + 544;
  *(_OWORD *)a2 = *((_OWORD *)this + 34);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 35);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 36);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 37);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 38);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 39);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 40);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 41);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 42);
  v3 = (_OWORD *)((char *)this + 688);
  if ( !v2 )
    v3 = 0LL;
  v4 = (_OWORD *)((char *)a2 + 144);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  v4[4] = v3[4];
  v4[5] = v3[5];
  v4[6] = v3[6];
  v4 += 8;
  *(v4 - 1) = v3[7];
  *v4 = v3[8];
  v4[1] = v3[9];
  v4[2] = v3[10];
  v4[3] = v3[11];
  v4[4] = v3[12];
}
