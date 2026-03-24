/*
 * XREFs of bDeleteDCInternalEx @ 0x1C003C730
 * Callers:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     bDeleteDCInternal @ 0x1C0008F00 (bDeleteDCInternal.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E6D8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00C8290 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003C98C (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C0092CC0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
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
