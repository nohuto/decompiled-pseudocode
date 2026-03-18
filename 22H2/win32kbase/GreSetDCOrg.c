/*
 * XREFs of GreSetDCOrg @ 0x1C005B960
 * Callers:
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0039224 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C005BA14 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  DC *v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v10, a1);
  if ( v10[0] )
  {
    v7 = 1;
    *((_DWORD *)v10[0] + 2 * (*((_DWORD *)v10[0] + 10) & 1LL) + 254) = a2;
    *((_DWORD *)v10[0] + 2 * (*((_DWORD *)v10[0] + 10) & 1LL) + 255) = a3;
    DC::vCalcFillOrigin(v10[0]);
    if ( a4 )
      *(_OWORD *)((char *)v10[0] + 1032) = *a4;
    if ( (unsigned int)DC::bDpiScaleTransform(v10[0]) )
    {
      *(_DWORD *)(v8 + 520) |= 4u;
      *(_DWORD *)(v8 + 36) |= 0x10u;
    }
  }
  DCOBJA::~DCOBJA((HDC **)v10);
  return v7;
}
