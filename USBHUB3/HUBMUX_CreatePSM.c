/*
 * XREFs of HUBMUX_CreatePSM @ 0x1C000FED8
 * Callers:
 *     HUBMUX_CreateChildPSMs @ 0x1C0010474 (HUBMUX_CreateChildPSMs.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00014E0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000FD34 (WPP_RECORDER_SF_qqd.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

unsigned __int64 __fastcall HUBMUX_CreatePSM(__int64 a1, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // r9d
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned __int16 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Timer; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v21; // [rsp+40h] [rbp-89h] BYREF
  __int128 v22; // [rsp+48h] [rbp-81h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-71h]
  __int64 v24; // [rsp+60h] [rbp-69h]
  __int128 v25; // [rsp+68h] [rbp-61h]
  void *v26; // [rsp+78h] [rbp-51h]
  __int128 v27; // [rsp+80h] [rbp-49h] BYREF
  __int128 v28; // [rsp+90h] [rbp-39h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int128 v30; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-11h]
  char pszDest[16]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+Fh]

  *(_QWORD *)&v22 = 56LL;
  LODWORD(v29) = 0;
  v33 = 0LL;
  v26 = off_1C006A340;
  v25 = *(unsigned __int64 *)(a1 + 16);
  v21 = 0LL;
  *((_QWORD *)&v22 + 1) = HUBMISC_EvtPsmCleanup;
  v23 = HUBMISC_EvtPsmDestroy;
  v27 = 0LL;
  v28 = 0LL;
  v24 = 0x100000002LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, unsigned __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v22,
         &v21);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        4u,
        0xAu,
        (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
        v4);
    v21 = 0LL;
    goto LABEL_24;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v5,
    "PSM Tag",
    141LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v21,
         off_1C006A340);
  memset((void *)(v6 + 8), 0, 0x5D0uLL);
  *(_QWORD *)v6 = a1;
  *(_OWORD *)(v6 + 200) = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 216) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v6 + 232) = *((_QWORD *)a2 + 4);
  v7 = *(_DWORD *)(a1 + 96);
  v20 = *a2;
  *(_QWORD *)&v30 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v31) = 16;
  v33 = 0x200000002LL;
  *(_QWORD *)&v31 = v6;
  BYTE8(v31) = 1;
  *((_QWORD *)&v30 + 1) = 0x20000000400LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d port%d", v7, v20);
  v8 = (__int64 *)(v6 + 1432);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v30, v6 + 1432) < 0 )
    *v8 = *(_QWORD *)(a1 + 2520);
  v9 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0x100000001LL;
  v25 = v21;
  v22 = 0LL;
  LODWORD(v22) = 56;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v9);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v22,
          v10,
          v6 + 16);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v12 = 11;
    goto LABEL_10;
  }
  *(_QWORD *)(v6 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v6 + 16));
  KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 1112));
  v13 = *(_QWORD *)v6;
  *(_DWORD *)(v6 + 1152) = 0;
  *(_DWORD *)(v6 + 1224) = 0;
  *(_QWORD *)(v6 + 1232) = v6;
  *(_QWORD *)(v6 + 1240) = HUBSM_AddPsm20Event;
  v14 = *(_QWORD *)(v13 + 248);
  *(_QWORD *)(v6 + 1272) = v13;
  *(_QWORD *)(v6 + 1304) = v14;
  Timer = ExAllocateTimer(HUBMISC_PsmEventTimer, v6, 4LL);
  *(_QWORD *)(v6 + 1312) = Timer;
  if ( Timer )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
    {
      v26 = 0LL;
      v28 = 0LL;
      LODWORD(v28) = 0;
      DWORD2(v28) = 0;
      BYTE4(v28) = 1;
      v23 = 0LL;
      v24 = 0x100000001LL;
      v25 = v21;
      v29 = 0LL;
      *((_QWORD *)&v27 + 1) = HUBMISC_PsmResetCompletePollingTimer;
      v22 = 0LL;
      LODWORD(v22) = 56;
      *(_QWORD *)&v27 = 40LL;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              &v27,
              &v22,
              v6 + 240);
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_24:
          if ( v21 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
            return 0LL;
          }
          return v21;
        }
        v12 = 13;
LABEL_10:
        WPP_RECORDER_SF_d(*v8, 2u, 4u, v12, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids, v11);
        goto LABEL_24;
      }
    }
    v17 = *(_QWORD *)v6;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v6 + 16LL));
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v17 + 496))(*(_QWORD *)(v17 + 248), v18, 1LL);
    *(_QWORD *)(v6 + 1264) = v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*v8, 2u, 4u, 0xEu, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
      goto LABEL_24;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v21;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      *(_QWORD *)(a1 + 2520),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids,
      a1,
      v6,
      *a2);
  return v21;
}
