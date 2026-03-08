/*
 * XREFs of GreSelectPen @ 0x1C017E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C017E210 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

__int64 __fastcall GreSelectPen(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = GreSelectPenInternal(v5, a2, 1);
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v3;
}
