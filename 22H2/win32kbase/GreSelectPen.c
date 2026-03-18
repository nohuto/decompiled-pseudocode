/*
 * XREFs of GreSelectPen @ 0x1C0150E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0150AA0 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

__int64 __fastcall GreSelectPen(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  DC *v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = GreSelectPenInternal(v5, a2, 1);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
