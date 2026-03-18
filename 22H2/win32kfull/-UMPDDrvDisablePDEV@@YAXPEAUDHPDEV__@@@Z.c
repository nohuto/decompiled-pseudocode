/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C02B91C0
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C02B9850 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C029A258 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7860 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B78D8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02B8264 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 ThreadWin32Thread; // rax
  size_t v3; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v4; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v5[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  struct DHPDEV__ *v8; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 )
  {
    v6 = 0LL;
    LODWORD(v3) = 0;
    v5[0] = 32;
    v5[1] = 2;
    v7 = *(_QWORD *)v4;
    v8 = a1;
    UMPDOBJ::Thunk(v4, v5, 0x20u, 0LL, v3);
  }
  XUMPDOBJ::~XUMPDOBJ(&v4);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(ThreadWin32Thread + 40) == ThreadWin32Thread + 40 )
    vUMPDCachedResourceCleanup((struct _W32THREAD *)ThreadWin32Thread);
}
