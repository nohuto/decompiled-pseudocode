/*
 * XREFs of GreIsRendering @ 0x1C003AC50
 * Callers:
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0038DB0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0038DDC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  HDC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = (_DWORD)v3[0][5] & 1;
  DCOBJA::~DCOBJA(v3);
  return v1;
}
