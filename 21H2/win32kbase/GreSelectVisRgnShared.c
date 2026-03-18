/*
 * XREFs of GreSelectVisRgnShared @ 0x1C002FA90
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = GreSelectVisRgnInternal(v7, a2, a3);
  DCOBJA::~DCOBJA((HDC **)v7);
  return v5;
}
