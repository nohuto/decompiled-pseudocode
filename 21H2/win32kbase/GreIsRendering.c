/*
 * XREFs of GreIsRendering @ 0x1C0018890
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  DCOBJA::~DCOBJA((DCOBJA *)v3);
  return v1;
}
