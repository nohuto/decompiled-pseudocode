/*
 * XREFs of GreSelectBrush @ 0x1C00CD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00CD950 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HBRUSH __fastcall GreSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = GreSelectBrushInternal((struct XDCOBJ *)v5, a2, 1);
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v3;
}
