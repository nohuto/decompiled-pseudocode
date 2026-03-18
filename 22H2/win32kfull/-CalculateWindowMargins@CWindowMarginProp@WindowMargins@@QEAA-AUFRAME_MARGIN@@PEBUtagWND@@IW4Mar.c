/*
 * XREFs of ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EEC84
 * Callers:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00C4AC0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C0010DB4 (-IsWDAGContainer@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C00EC0BC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EE150 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x1C00F0764 (WPP_RECORDER_AND_TRACE_SF_sqddddd.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021C7A8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1C021C8C4 (WPP_RECORDER_AND_TRACE_SF_qsdddd.c)
 */

__int16 *__fastcall WindowMargins::CWindowMarginProp::CalculateWindowMargins(
        __int64 a1,
        __int16 *a2,
        const struct tagWND *a3,
        INT a4,
        int a5)
{
  char v5; // si
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  bool v13; // zf
  __m128i *v14; // rax
  int v15; // r8d
  _DWORD *v16; // rcx
  int v17; // r9d
  unsigned int v18; // ebp
  int v19; // r10d
  int v20; // edx
  int v21; // r14d
  int v22; // r14d
  unsigned __int64 v23; // xmm0_8
  INT v24; // r9d
  INT v25; // r10d
  int WindowDpiLastNotify; // ebp
  __int64 v27; // rdx
  int v28; // r8d
  const struct tagWND *v29; // r14
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // ebx
  char v33; // dl
  char v34; // r8
  int v35; // ecx
  int v36; // eax
  __int16 v37; // ax
  int v38; // ecx
  int v39; // eax
  __int16 v40; // ax
  int v41; // ecx
  int v42; // eax
  __int16 v43; // ax
  int v44; // ecx
  int v45; // eax
  _QWORD *ThreadWin32Thread; // rax
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rbx
  __int64 *v50; // rax
  const struct tagWND *v51; // r14
  __int64 v52; // rcx
  int v53; // eax
  const char *v54; // rdi
  PDEVICE_OBJECT v55; // rcx
  __int64 v57; // rax
  char v58; // r9
  int v59; // edx
  int v60; // r8d
  char v61; // r8
  int v62; // r8d
  INT v63; // r10d
  INT v64; // r11d
  INT v65; // r14d
  const char *v66; // rax
  const char *v67; // rax
  char v68; // r8
  INT WindowBordersWithDpiAwareness; // ebx
  unsigned __int16 ScaledLogPixels; // ax
  char v71; // dl
  char v72; // r8
  INT v73; // ebx
  __int16 v74; // ax
  INT v75; // ecx
  __int16 v76; // ax
  INT v77; // ecx
  __int16 v78; // ax
  INT v79; // ecx
  int v80; // [rsp+20h] [rbp-128h]
  int v81; // [rsp+28h] [rbp-120h]
  int v82; // [rsp+30h] [rbp-118h]
  __int16 v83; // [rsp+30h] [rbp-118h]
  int v84; // [rsp+38h] [rbp-110h]
  int v86; // [rsp+88h] [rbp-C0h]
  INT v87; // [rsp+8Ch] [rbp-BCh]
  INT v88; // [rsp+90h] [rbp-B8h]
  INT a; // [rsp+94h] [rbp-B4h]
  __int16 v91; // [rsp+9Ch] [rbp-ACh]
  struct tagRECT v92; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v93[4]; // [rsp+B0h] [rbp-98h] BYREF
  int v94; // [rsp+B4h] [rbp-94h]

  v5 = 1;
  if ( a5 == 1 && (*(_BYTE *)(*((_QWORD *)a3 + 5) + 31LL) & 1) != 0 && (unsigned int)IsWDAGContainer() )
  {
    LOBYTE(v59) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v60) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v59 || (_BYTE)v60 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v59,
        v60,
        11,
        5,
        21,
        11,
        (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
    goto LABEL_10;
  }
  memset_0(v93, 0, 0x40uLL);
  if ( !(unsigned int)_GetWindowCompositionInfo(a3, (struct WINDOWCOMPOSITIONINFO *)v93)
    || (v11 = *((_QWORD *)a3 + 5), v12 = *(_DWORD *)(v11 + 24), (v12 & 0x80000) != 0) && (v12 & 0x20000000) == 0
    || (v93[0] & 1) != 0
    || (v94
      ? (v13 = v94 == 2)
      : (v13 = ((unsigned __int8)~(*(_BYTE *)(v11 + 30) >> 2) & ((*(_BYTE *)(v11 + 30) & 0xC0) != 0xC0)) == 0),
        !v13) )
  {
    v55 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( !(_BYTE)v9 && !v5 )
      goto LABEL_85;
    v62 = 12;
    goto LABEL_200;
  }
  if ( (gHighContrast[1] & 1) != 0 )
  {
    v55 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( !(_BYTE)v9 && !v5 )
      goto LABEL_85;
    v62 = 13;
LABEL_200:
    v83 = v62;
    LOBYTE(v62) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v55->AttachedDevice,
      v9,
      v62,
      v10,
      5,
      21,
      v83,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
LABEL_85:
    *(_QWORD *)a2 = 0LL;
    return a2;
  }
LABEL_10:
  v14 = (__m128i *)CalculateContentRect(&v92, a3, 0LL);
  v16 = (_DWORD *)*((_QWORD *)a3 + 5);
  v86 = 0;
  v17 = v16[24];
  v18 = v16[72];
  v19 = v16[25];
  v20 = v18 & 0xF;
  v21 = _mm_cvtsi128_si32(*v14);
  v92 = (struct tagRECT)*v14;
  v22 = v21 - v16[22];
  v23 = _mm_srli_si128((__m128i)v92, 8).m128i_u64[0];
  a = v22;
  v24 = v17 - v23;
  v25 = v19 - HIDWORD(v23);
  v87 = v24;
  v88 = v25;
  if ( v20 == 3 )
  {
    WindowDpiLastNotify = (v18 >> 8) & 0x1FF;
  }
  else if ( (v16[58] & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
  }
  else if ( (v18 & 0xF) == 0
         && (v57 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 424LL) + 284LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
    || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v20 || (_BYTE)v15 )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v15,
      v24,
      5,
      21,
      14,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
      v22,
      v24,
      v25,
      WindowDpiLastNotify);
  v91 = EngMulDiv(1, a4, 96);
  if ( a5 == 1 )
  {
    v29 = a3;
    v27 = *((_QWORD *)a3 + 5);
    if ( (*(_BYTE *)(v27 + 31) & 1) != 0 )
    {
      v86 = v92.top - *(_DWORD *)(v27 + 92);
      v91 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
        || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v27) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v61 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v61 = 0;
      }
      if ( (_BYTE)v27 || v61 )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v61,
          (__int64)gFullLog,
          5u,
          0x15u,
          0xFu,
          (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
    }
  }
  else
  {
    v28 = 0;
    if ( !a5 )
    {
      v58 = *(_BYTE *)(*((_QWORD *)a3 + 5) + 31LL);
      if ( (v58 & 0x21) != 0 )
      {
        if ( *(_BYTE *)(a1 + 24) )
        {
          v63 = *(_DWORD *)(a1 + 28);
          v64 = *(_DWORD *)(a1 + 32);
          v65 = *(_DWORD *)(a1 + 36);
          WindowDpiLastNotify = *(_DWORD *)(a1 + 40);
          a = v63;
          v87 = v64;
          v88 = v65;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
            || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v27) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v28) = 1;
          }
          if ( (_BYTE)v27 || (_BYTE)v28 )
          {
            v66 = "Maximized";
            if ( (v58 & 1) == 0 )
              v66 = "Minimized";
            WPP_RECORDER_AND_TRACE_SF_qsdddd(
              WPP_GLOBAL_Control->AttachedDevice,
              v27,
              v28,
              (unsigned int)"Minimized",
              v80,
              v81,
              v82,
              v84,
              *(_QWORD *)a3,
              (__int64)v66,
              v63,
              v64,
              v65,
              WindowDpiLastNotify);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
            || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v27) = 0;
          }
          if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v67 = "Maximized";
            if ( (v58 & 1) == 0 )
              v67 = "Minimized";
            WPP_RECORDER_AND_TRACE_SF_qs(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v27,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              2u,
              0x15u,
              0x11u,
              (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
              *(_QWORD *)a3,
              v67);
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 32) = v87;
        *(_DWORD *)(a1 + 36) = v88;
        *(_DWORD *)(a1 + 28) = v22;
        *(_DWORD *)(a1 + 40) = WindowDpiLastNotify;
        *(_BYTE *)(a1 + 24) = 1;
      }
    }
    v29 = a3;
  }
  LOBYTE(v28) = 1;
  LOWORD(v29) = GetWindowBordersWithDpiAwareness(v29, v27, v28, a4);
  if ( WindowDpiLastNotify == a4 )
  {
    LODWORD(v29) = (__int16)v29;
  }
  else
  {
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v68 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v68 = 0;
    }
    if ( (_BYTE)v30 || v68 )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v68,
        (__int64)gFullLog,
        5u,
        0x15u,
        0x12u,
        (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
    LOBYTE(v31) = 1;
    WindowBordersWithDpiAwareness = (__int16)GetWindowBordersWithDpiAwareness(a3, v30, v31, WindowDpiLastNotify);
    LODWORD(v29) = (__int16)v29;
    a = EngMulDiv(a, (__int16)v29, WindowBordersWithDpiAwareness);
    v87 = EngMulDiv(v87, (__int16)v29, WindowBordersWithDpiAwareness);
    v88 = EngMulDiv(v88, (__int16)v29, WindowBordersWithDpiAwareness);
  }
  v32 = (_DWORD)v29 - v91;
  if ( v32 <= 0 )
    v32 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
    || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v33 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v34 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v34 = 0;
  }
  if ( v33 || v34 )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v33,
      v34,
      (__int64)gFullLog,
      5u,
      0x15u,
      0x13u,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
  v35 = a - v91;
  v36 = v35;
  if ( v35 <= 0 )
    v36 = 0;
  if ( v32 < v36 )
  {
    v37 = v32;
  }
  else
  {
    v37 = 0;
    if ( v35 > 0 )
      v37 = v35;
  }
  v38 = v87 - v91;
  *a2 = v37;
  v39 = v38;
  if ( v38 <= 0 )
    v39 = 0;
  if ( v32 < v39 )
  {
    v40 = v32;
  }
  else
  {
    v40 = 0;
    if ( v38 > 0 )
      v40 = v38;
  }
  v41 = v86 - v91;
  a2[1] = v40;
  v42 = v41;
  if ( v41 <= 0 )
    v42 = 0;
  if ( v32 < v42 )
  {
    v43 = v32;
  }
  else
  {
    v43 = 0;
    if ( v41 > 0 )
      v43 = v41;
  }
  v44 = v88 - v91;
  a2[2] = v43;
  v45 = v44;
  if ( v44 <= 0 )
    v45 = 0;
  if ( v32 >= v45 )
  {
    LOWORD(v32) = 0;
    if ( v44 > 0 )
      LOWORD(v32) = v44;
  }
  a2[3] = v32;
  if ( a5 != 1 )
    goto LABEL_100;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_100;
  v47 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v48 )
    v47 = *v48;
  if ( *(_QWORD *)(v47 + 456) )
  {
    v49 = 0LL;
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v50 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v50 )
      v49 = *v50;
    v51 = a3;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v49 + 456) + 8LL) + 64LL) & 1) != 0 )
    {
      v52 = *((_QWORD *)a3 + 5);
      v53 = *(_DWORD *)(v52 + 288);
      if ( (v53 & 0xF) == 0 && (v53 & 0x40000000) != 0 )
      {
        ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v52 + 284));
        v71 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v72 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v72 = 0;
        }
        if ( v71 || v72 )
        {
          v73 = ScaledLogPixels;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v71,
            v72,
            (__int64)gFullLog,
            5u,
            0x15u,
            0x14u,
            (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids);
        }
        else
        {
          v73 = ScaledLogPixels;
        }
        v74 = EngMulDiv(*a2, v73, 96);
        v75 = a2[2];
        *a2 = v74;
        v76 = EngMulDiv(v75, v73, 96);
        v77 = a2[1];
        a2[2] = v76;
        v78 = EngMulDiv(v77, v73, 96);
        v79 = a2[3];
        a2[1] = v78;
        a2[3] = EngMulDiv(v79, v73, 96);
      }
    }
  }
  else
  {
LABEL_100:
    v51 = a3;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
    || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v30) = 0;
  }
  if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v54 = "Dwm";
    if ( a5 != 1 )
      v54 = "Win32k";
    LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sqddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v31,
      *(_QWORD *)v51,
      v80,
      v81,
      v82,
      v84,
      (__int64)v54,
      *(_QWORD *)v51,
      a4,
      *a2,
      a2[2],
      a2[1],
      a2[3]);
  }
  return a2;
}
