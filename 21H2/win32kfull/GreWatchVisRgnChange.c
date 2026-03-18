/*
 * XREFs of GreWatchVisRgnChange @ 0x1C029DF48
 * Callers:
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  __int64 *v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v4, a1);
  if ( v4[0] )
  {
    if ( a2 )
      *((_DWORD *)v4[0] + 9) |= 0x20000u;
    else
      *((_DWORD *)v4[0] + 9) &= ~0x20000u;
    if ( v4[0] )
      XDCOBJ::vAltUnlockFast(v4);
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
}
