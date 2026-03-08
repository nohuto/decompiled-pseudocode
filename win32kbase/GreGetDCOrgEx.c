/*
 * XREFs of GreGetDCOrgEx @ 0x1C00C2510
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rdi
  unsigned int DCPoint; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v6 = v9[0];
  if ( v9[0] )
  {
    *a3 = *(_OWORD *)(v9[0] + 1032LL);
    DCPoint = GreGetDCPoint(a1, 32, a2);
  }
  else
  {
    DCPoint = 0;
  }
  if ( v6 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v9);
  return DCPoint;
}
