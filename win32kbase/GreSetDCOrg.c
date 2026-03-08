/*
 * XREFs of GreSetDCOrg @ 0x1C005ACD0
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0045BC0 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00597D0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreSetDCOrg(HDC a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  DC *v8; // r10
  DC *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r10
  DC *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v13, a1);
  v8 = v13[0];
  if ( v13[0] )
  {
    v7 = 1;
    v9 = v13[0];
    *((_DWORD *)v13[0] + 2 * (*((_DWORD *)v13[0] + 10) & 1LL) + 254) = a2;
    *((_DWORD *)v8 + 2 * (*((_DWORD *)v8 + 10) & 1LL) + 255) = a3;
    DC::vCalcFillOrigin(v9);
    if ( a4 )
      *(_OWORD *)(v10 + 1032) = *a4;
    if ( (unsigned int)DC::bDpiScaleTransform((DC *)v10) )
    {
      *(_DWORD *)(v11 + 520) |= 4u;
      *(_DWORD *)(v11 + 36) |= 0x10u;
    }
    if ( v11 )
      XDCOBJ::vAltUnlockFast((XDCOBJ *)v13);
  }
  return v7;
}
