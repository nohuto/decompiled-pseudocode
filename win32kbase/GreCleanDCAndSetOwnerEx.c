/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1C00DEED0
 * Callers:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, unsigned int a4)
{
  BOOL v8; // ebx
  DC *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) && (unsigned int)GreSetDCOwnerEx((__int64)a1, a2, a3, a4);
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v8;
}
