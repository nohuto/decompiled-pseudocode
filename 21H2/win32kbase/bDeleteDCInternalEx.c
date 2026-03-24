/*
 * XREFs of bDeleteDCInternalEx @ 0x1C003B2C0
 * Callers:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     bDeleteDCInternal @ 0x1C0007A80 (bDeleteDCInternal.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002D268 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00C7F00 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003B51C (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C0091F00 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
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
