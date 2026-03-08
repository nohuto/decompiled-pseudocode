/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C0015B58
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRect @ 0x1C0016144 (LogicalToPhysicalInPlaceRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0050918 (W32GetCurrentThread.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FF518 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C010141C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage @ 0x1C012F120 (Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A7638 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021F368 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // bp
  void *v8; // r9
  int v9; // edx
  int v10; // r8d
  struct WindowMargins::CWindowMarginProp *v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rax
  __int16 v15; // r12
  __int64 v16; // rcx
  int v17; // eax
  INT WindowDpiLastNotify; // ebx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  INT v22; // edi
  __int16 v23; // r14
  __int16 v24; // r15
  __int16 v25; // di
  int v26; // r8d
  int v27; // r8d
  unsigned int v29; // [rsp+20h] [rbp-A8h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+80h] [rbp-48h] BYREF

  if ( (unsigned int)Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage(this, retstr, a3) )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v6) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v6) = 0;
    }
    v8 = &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids;
    if ( (_BYTE)v5 || (_BYTE)v6 )
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (unsigned int)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
        5,
        26,
        26,
        (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
        *(_QWORD *)&retstr->left);
    *(_OWORD *)this = *(_OWORD *)(*(_QWORD *)&retstr[2].right + 88LL);
    *(_QWORD *)&v31 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL), v5, v6, v8);
    LogicalToPhysicalDPIRect(this, this, *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL), &v31);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gFullLog,
        5,
        26,
        27,
        (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
        *(_DWORD *)this,
        *((_DWORD *)this + 1),
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        *(_BYTE *)this - *((_DWORD *)this + 2),
        *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
    v11 = WindowMargins::CWindowMarginProp::GetOrCreate((struct tagWND *)retstr);
    if ( v11 )
    {
      v14 = *(_QWORD *)((char *)v11 + 44);
      v30 = v14;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v13) = 0;
      }
      v15 = v30;
      if ( (_BYTE)v12 || (_BYTE)v13 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          SWORD2(v14),
          5,
          26,
          28,
          (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
          v30,
          SBYTE4(v14),
          SBYTE2(v14),
          SBYTE6(v14));
      if ( (*(_DWORD *)(*(_QWORD *)&retstr[2].right + 288LL) & 0xF) == 2
        || (!W32GetCurrentThread()
         || !*((_QWORD *)PtiCurrentShared() + 57)
         || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0
         || (v16 = *(_QWORD *)&retstr[2].right, v17 = *(_DWORD *)(v16 + 288), (v17 & 0xF) != 0)
         || (v17 & 0x40000000) == 0
          ? ((v19 = *(_QWORD *)&retstr[2].right, v20 = *(_DWORD *)(v19 + 288) & 0xF, v20 != 3)
           ? ((*(_DWORD *)(v19 + 232) & 0x400) == 0
            ? (v20
            || (v21 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 456LL)) == 0
            || (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 64LL) & 1) == 0
             ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 424LL) + 284LL))
             : (WindowDpiLastNotify = 96))
            : (WindowDpiLastNotify = GetWindowDpiLastNotify(retstr)))
           : (WindowDpiLastNotify = (*(_DWORD *)(v19 + 288) >> 8) & 0x1FF))
          : (WindowDpiLastNotify = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v16 + 284))),
            v22 = *(unsigned __int16 *)(*(_QWORD *)(v31 + 40) + 60LL),
            v22 == WindowDpiLastNotify) )
      {
        v25 = HIWORD(v30);
        v23 = WORD2(v30);
        v24 = WORD1(v30);
      }
      else
      {
        v15 = EngMulDiv((__int16)v30, v22, WindowDpiLastNotify);
        v23 = EngMulDiv(SWORD2(v30), v22, WindowDpiLastNotify);
        v24 = EngMulDiv(SWORD1(v30), v22, WindowDpiLastNotify);
        v25 = EngMulDiv(SHIWORD(v30), v22, WindowDpiLastNotify);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v26) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v26) = 0;
        }
        if ( (_BYTE)v12 || (_BYTE)v26 )
          WPP_RECORDER_AND_TRACE_SF_dddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v26,
            v24,
            5,
            26,
            29,
            (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
            v15,
            v23,
            v24,
            v25);
      }
      *(_DWORD *)this += v15;
      *((_DWORD *)this + 1) += v23;
      *((_DWORD *)this + 2) -= v24;
      *((_DWORD *)this + 3) -= v25;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( (_BYTE)v12 || v7 )
    {
      v27 = 30;
      LOBYTE(v27) = v7;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v27,
        (_DWORD)gFullLog,
        5,
        26,
        30,
        (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
        *(_DWORD *)this,
        *((_DWORD *)this + 1),
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        *(_BYTE *)this - *((_DWORD *)this + 2),
        *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
    }
  }
  else
  {
    v31 = *(_OWORD *)(*(_QWORD *)&retstr[2].right + 88LL);
    *(struct tagRECT *)this = *WindowMargins::ReduceRect(
                                 (WindowMargins *)&v30,
                                 retstr,
                                 (const struct tagWND *)&v31,
                                 0LL,
                                 v29);
    LogicalToPhysicalInPlaceRect(retstr, this);
  }
  return (struct tagRECT *)this;
}
