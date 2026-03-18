/*
 * XREFs of GreGetDCOrgEx @ 0x1C005D2D0
 * Callers:
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  HDC *v8[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  DCPoint = 0;
  if ( v8[0] )
  {
    *a3 = *(_OWORD *)(v8[0] + 129);
    DCPoint = GreGetDCPoint(a1, 32, a2);
  }
  DCOBJA::~DCOBJA(v8);
  return DCPoint;
}
