/*
 * XREFs of ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C023011E
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C01C9BE0 (DxgkGetDeviceStateInternal.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1C02305D2 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C0233910 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentIdDWM(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS_DWM2 *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rdi
  __int64 v6; // rsi
  int PresentStatsDWM; // ebx
  __int64 v9; // rdx
  _BYTE v10[144]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 235);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 736) + 8LL) + 488LL))(
             *((_QWORD *)this + 100),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5, 0LL);
  PresentStatsDWM = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL);
  if ( PresentStatsDWM >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 365) + 448LL);
    if ( v9 )
      PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2920 * v6), a3);
    else
      PresentStatsDWM = -1073741811;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
  return (unsigned int)PresentStatsDWM;
}
