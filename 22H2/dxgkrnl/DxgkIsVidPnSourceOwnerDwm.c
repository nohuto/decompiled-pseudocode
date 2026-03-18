/*
 * XREFs of DxgkIsVidPnSourceOwnerDwm @ 0x1C0316090
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0016F00 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 */

bool __fastcall DxgkIsVidPnSourceOwnerDwm(DXGADAPTER ***a1, unsigned int a2)
{
  bool IsVidPnSourceOwnerDwm; // bl
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, (struct DXGADAPTER *const)a1, 0LL);
  IsVidPnSourceOwnerDwm = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6, 0LL) >= 0 )
    IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(a1[365], a2);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v6);
  return IsVidPnSourceOwnerDwm;
}
