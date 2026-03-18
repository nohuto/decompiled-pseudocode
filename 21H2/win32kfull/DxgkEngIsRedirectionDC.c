/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x1C02752C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  unsigned int v1; // ebx
  __int64 *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *((_DWORD *)v3[0] + 9) & 0x4000;
  else
    v1 = 1;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast(v3);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
  return v1;
}
