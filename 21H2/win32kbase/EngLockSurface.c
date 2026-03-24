/*
 * XREFs of EngLockSurface @ 0x1C002CB30
 * Callers:
 *     EngCreateLockedBitmap @ 0x1C00CB540 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00CB5B0 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00CB620 (EngCreateLockedRedirectionDeviceBitmap.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0141D30 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CE70 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00319D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00C7C50 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  SURFOBJ *v4; // rbx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v6);
  LOBYTE(v2) = 5;
  v7 = 0LL;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v7 = v3;
  if ( v3 )
  {
    INC_SHARE_REF_CNT(v3);
    v4 = (SURFOBJ *)(v7 + 24);
    if ( !v7 )
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  SURFREF::~SURFREF((SURFREF *)v6);
  return v4;
}
