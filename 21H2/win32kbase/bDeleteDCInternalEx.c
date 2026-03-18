/*
 * XREFs of bDeleteDCInternalEx @ 0x1C002DFD0
 * Callers:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bDeleteDCInternal @ 0x1C00518F0 (bDeleteDCInternal.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     UserReleaseDC @ 0x1C00AC8F0 (UserReleaseDC.c)
 */

__int64 __fastcall bDeleteDCInternalEx(HDC a1, unsigned int *a2)
{
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] && (unsigned int)bDeleteDCOBJ((struct XDCOBJ *)v5, a2, &v6) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    if ( !v6 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)v5);
  }
  return 0LL;
}
