/*
 * XREFs of ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C01015A4 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 * Callees:
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C0010010 (-IsWDAGContainer@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x1C003FBA0 (WPP_RECORDER_AND_TRACE_SF_sqddddd.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C003FCD8 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00AD290 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021F368 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1C021F484 (WPP_RECORDER_AND_TRACE_SF_qsdddd.c)
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
  int v33; // ecx
  int v34; // eax
  __int16 v35; // ax
  int v36; // ecx
  int v37; // eax
  __int16 v38; // ax
  int v39; // ecx
  int v40; // eax
  __int16 v41; // ax
  int v42; // ecx
  int v43; // eax
  _QWORD *ThreadWin32Thread; // rax
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 *v49; // r14
  __int64 v50; // rcx
  int v51; // eax
  char v52; // dl
  const char *v53; // rdi
  PDEVICE_OBJECT v54; // rcx
  __int64 v56; // rax
  char v57; // r9
  int v58; // edx
  int v59; // r8d
  int v60; // r11d
  char v61; // r8
  int v62; // r8d
  INT v63; // r10d
  INT v64; // r11d
  INT v65; // r14d
  const char *v66; // rax
  const char *v67; // rax
  INT WindowBordersWithDpiAwareness; // ebx
  unsigned __int16 ScaledLogPixels; // ax
  char v70; // dl
  char v71; // r8
  INT v72; // ebx
  __int16 v73; // ax
  INT v74; // ecx
  __int16 v75; // ax
  INT v76; // ecx
  __int16 v77; // ax
  INT v78; // ecx
  int v79; // [rsp+20h] [rbp-128h]
  int v80; // [rsp+28h] [rbp-120h]
  int v81; // [rsp+30h] [rbp-118h]
  __int16 v82; // [rsp+30h] [rbp-118h]
  int v83; // [rsp+38h] [rbp-110h]
  __int64 v84; // [rsp+40h] [rbp-108h]
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
    LOBYTE(v58) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v59) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v58 || (_BYTE)v59 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v58,
        v59,
        11,
        5,
        26,
        11,
        (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids);
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
    v54 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
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
  if ( (gHighContrast[4] & 1) != 0 )
  {
    v54 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
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
    v82 = v62;
    LOBYTE(v62) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v54->AttachedDevice,
      v9,
      v62,
      v10,
      5,
      26,
      v82,
      (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids);
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
         && (v56 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 424LL) + 284LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
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
      26,
      14,
      (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
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
      v60 = v92.top - *(_DWORD *)(v27 + 92);
      v86 = v60;
      v91 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
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
      {
        LODWORD(v84) = v60;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v61,
          (__int64)gFullLog,
          5u,
          0x1Au,
          0xFu,
          (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
          v84);
      }
    }
  }
  else
  {
    v28 = 0;
    if ( !a5 )
    {
      v57 = *(_BYTE *)(*((_QWORD *)a3 + 5) + 31LL);
      if ( (v57 & 0x21) != 0 )
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
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
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
            if ( (v57 & 1) == 0 )
              v66 = "Minimized";
            WPP_RECORDER_AND_TRACE_SF_qsdddd(
              WPP_GLOBAL_Control->AttachedDevice,
              v27,
              v28,
              (unsigned int)"Minimized",
              v79,
              v80,
              v81,
              v83,
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
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
            || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v27) = 0;
          }
          if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v67 = "Maximized";
            if ( (v57 & 1) == 0 )
              v67 = "Minimized";
            LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qs(
              WPP_GLOBAL_Control->AttachedDevice,
              v27,
              v28,
              (_DWORD)gFullLog,
              2,
              26,
              17,
              (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
              *(_QWORD *)a3,
              (__int64)v67);
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
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v30 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v31,
        (_DWORD)gFullLog,
        5,
        26,
        18,
        (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
        WindowDpiLastNotify,
        a4);
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
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
    || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v30) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v31) = 0;
  }
  if ( (_BYTE)v30 || (_BYTE)v31 )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v30,
      v31,
      (_DWORD)gFullLog,
      5,
      26,
      19,
      (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
      (char)v29,
      v32);
  v33 = a - v91;
  v34 = v33;
  if ( v33 <= 0 )
    v34 = 0;
  if ( v32 < v34 )
  {
    v35 = v32;
  }
  else
  {
    v35 = 0;
    if ( v33 > 0 )
      v35 = v33;
  }
  v36 = v87 - v91;
  *a2 = v35;
  v37 = v36;
  if ( v36 <= 0 )
    v37 = 0;
  if ( v32 < v37 )
  {
    v38 = v32;
  }
  else
  {
    v38 = 0;
    if ( v36 > 0 )
      v38 = v36;
  }
  v39 = v86 - v91;
  a2[1] = v38;
  v40 = v39;
  if ( v39 <= 0 )
    v40 = 0;
  if ( v32 < v40 )
  {
    v41 = v32;
  }
  else
  {
    v41 = 0;
    if ( v39 > 0 )
      v41 = v39;
  }
  v42 = v88 - v91;
  a2[2] = v41;
  v43 = v42;
  if ( v42 <= 0 )
    v43 = 0;
  if ( v32 >= v43 )
  {
    LOWORD(v32) = 0;
    if ( v42 > 0 )
      LOWORD(v32) = v42;
  }
  a2[3] = v32;
  if ( a5 != 1 )
    goto LABEL_100;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_100;
  v45 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v46 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v46 )
    v45 = *v46;
  if ( *(_QWORD *)(v45 + 456) )
  {
    v47 = 0LL;
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v48 )
      v47 = *v48;
    v49 = (__int64 *)a3;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v47 + 456) + 8LL) + 64LL) & 1) != 0 )
    {
      v50 = *((_QWORD *)a3 + 5);
      v51 = *(_DWORD *)(v50 + 288);
      if ( (v51 & 0xF) == 0 && (v51 & 0x40000000) != 0 )
      {
        ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v50 + 284));
        v70 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v71 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v71 = 0;
        }
        if ( v70 || v71 )
        {
          v72 = ScaledLogPixels;
          LODWORD(v84) = ScaledLogPixels;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v70,
            v71,
            (__int64)gFullLog,
            5u,
            0x1Au,
            0x14u,
            (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
            v84);
        }
        else
        {
          v72 = ScaledLogPixels;
        }
        v73 = EngMulDiv(*a2, v72, 96);
        v74 = a2[2];
        *a2 = v73;
        v75 = EngMulDiv(v74, v72, 96);
        v76 = a2[1];
        a2[2] = v75;
        v77 = EngMulDiv(v76, v72, 96);
        v78 = a2[3];
        a2[1] = v77;
        a2[3] = EngMulDiv(v78, v72, 96);
      }
    }
  }
  else
  {
LABEL_100:
    v49 = (__int64 *)a3;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
    || (v52 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v52 = 0;
  }
  if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = "Dwm";
    if ( a5 != 1 )
      v53 = "Win32k";
    WPP_RECORDER_AND_TRACE_SF_sqddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v52,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      *v49,
      v79,
      v80,
      v81,
      v83,
      v53);
  }
  return a2;
}
