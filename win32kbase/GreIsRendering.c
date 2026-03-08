/*
 * XREFs of GreIsRendering @ 0x1C003E610
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  else
    v1 = 0;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v3);
  return v1;
}
