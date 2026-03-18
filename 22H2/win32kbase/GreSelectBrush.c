/*
 * XREFs of GreSelectBrush @ 0x1C0089360
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00893C0 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HBRUSH __fastcall GreSelectBrush(HDC a1, HBRUSH a2)
{
  HBRUSH v3; // rbx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = GreSelectBrushInternal((struct XDCOBJ *)v5, a2, 1);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
