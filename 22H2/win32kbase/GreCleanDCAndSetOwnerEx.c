/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1C00D32B0
 * Callers:
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, int a4)
{
  BOOL v8; // ebx
  DC *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GreSetDCOwnerEx((__int64)a1, a2, a3, a4) != 0;
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v8;
}
