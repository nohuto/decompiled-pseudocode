/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(HDC a1, unsigned int a2, int a3, unsigned int a4)
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
