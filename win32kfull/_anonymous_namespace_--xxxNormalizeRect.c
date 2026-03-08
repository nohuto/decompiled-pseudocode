/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024060C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C003FCD8 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FB30C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00FEAF0 (-LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FF518 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BB984 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C01F43A8 (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021F368 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1C0240880 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 */

struct tagWND *__fastcall anonymous_namespace_::xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *retstr,
        LONG *a3,
        __int64 a4,
        CMonitorTopology::MonitorData *a5,
        char a6)
{
  __int64 v6; // r15
  LONG *v7; // r14
  struct tagRECT *v8; // r12
  char v10; // bp
  __int128 v11; // xmm6
  __int64 v12; // rdx
  LONG bottom; // r13d
  __int64 v14; // rax
  unsigned __int16 v15; // r14
  __int16 v16; // cx
  __int64 v17; // rax
  unsigned __int16 v18; // r10
  struct tagRECT *v19; // rax
  LONG top; // r11d
  int v21; // r13d
  struct tagRECT v22; // xmm0
  LONG left; // eax
  int v24; // r9d
  int v25; // r8d
  int v26; // r10d
  int v27; // ebx
  int v28; // edi
  __m128i *MonitorWorkRectForWindow; // rax
  int v30; // r8d
  int v31; // edx
  __m128i v32; // xmm6
  int v33; // edi
  int v34; // r14d
  int v35; // r13d
  int v36; // ebx
  int v37; // edx
  int v39; // r15d
  int v40; // edi
  int v41; // r15d
  int v43; // ecx
  int v44; // r12d
  int v45; // ebx
  int v46; // r14d
  LONG v47; // edi
  int v48; // edx
  int WindowBordersWithDpiAwareness; // r11d
  int v50; // r8d
  int v51; // r10d
  int v52; // ebx
  int v53; // edi
  char v54; // dl
  char v55; // r8
  INT v56; // edi
  INT v57; // ebx
  int v58; // r15d
  int v59; // r12d
  int v60; // edx
  int v61; // r8d
  INT v62; // eax
  INT v63; // ecx
  INT v64; // eax
  int v65; // edx
  _UNKNOWN **v66; // r8
  char v67; // dl
  char v68; // r8
  int v69; // ecx
  _UNKNOWN **v70; // r8
  unsigned int v71; // [rsp+20h] [rbp-F8h]
  __int64 v72; // [rsp+40h] [rbp-D8h]
  __int64 v73; // [rsp+48h] [rbp-D0h]
  LONG v74; // [rsp+50h] [rbp-C8h]
  LONG v75; // [rsp+58h] [rbp-C0h]
  LONG v76; // [rsp+60h] [rbp-B8h]
  int v77; // [rsp+68h] [rbp-B0h]
  int v78; // [rsp+70h] [rbp-A8h]
  int v79; // [rsp+80h] [rbp-98h]
  int v80; // [rsp+84h] [rbp-94h]
  struct tagRECT v81; // [rsp+88h] [rbp-90h] BYREF
  __int128 v82; // [rsp+98h] [rbp-80h] BYREF
  struct tagRECT v83; // [rsp+A8h] [rbp-70h] BYREF
  unsigned __int16 v84; // [rsp+120h] [rbp+8h]
  struct tagRECT *v85; // [rsp+128h] [rbp+10h]
  int v86; // [rsp+130h] [rbp+18h]
  int v88; // [rsp+148h] [rbp+30h]

  v85 = retstr;
  v6 = a4;
  v7 = a3;
  v8 = retstr;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(retstr) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(retstr) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)retstr || (_BYTE)a3 )
  {
    v47 = v7[1];
    v78 = v7[3] - v47;
    v77 = v7[2] - *v7;
    v76 = v7[3];
    v75 = v7[2];
    v74 = v47;
    v72 = *(_QWORD *)&v8->left;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)retstr, (_DWORD)a3, v78);
  }
  v11 = *(_OWORD *)GetMonitorRectForWindow(&v82, v6, v8);
  v82 = v11;
  CMonitorTopology::MonitorData::LogicalMonitorRect(a5, &v81, (const struct tagWND *)v8);
  bottom = v81.bottom;
  if ( *v7 <= v81.left && v7[1] <= v81.top && v7[2] >= v81.right && v7[3] >= v81.bottom )
  {
    *(_OWORD *)a1 = v11;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((const struct tagWND *)v8, v12, 0, 0);
    v50 = *(_DWORD *)a1 - WindowBordersWithDpiAwareness;
    v51 = *((_DWORD *)a1 + 1) - WindowBordersWithDpiAwareness;
    v52 = WindowBordersWithDpiAwareness + *((_DWORD *)a1 + 2);
    v53 = WindowBordersWithDpiAwareness + *((_DWORD *)a1 + 3);
    *(_DWORD *)a1 = v50;
    *((_DWORD *)a1 + 3) = v53;
    *((_DWORD *)a1 + 2) = v52;
    *((_DWORD *)a1 + 1) = v51;
    LOBYTE(v48) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v48 || v10 )
    {
      LOBYTE(v50) = v10;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(WPP_GLOBAL_Control->AttachedDevice, v48, v50, v53 - v51);
    }
    return a1;
  }
  *(_OWORD *)a1 = *(_OWORD *)v7;
  v14 = *(_QWORD *)&v8[2].right;
  v15 = *(_WORD *)(v14 + 286);
  v16 = (*(_DWORD *)(v14 + 288) >> 8) & 0x1FF;
  if ( !v15 || (a6 & 0x20) != 0 )
    v15 = *((_WORD *)a5 + 20);
  v17 = *(_QWORD *)(v6 + 40);
  v18 = *(_WORD *)(v17 + 60);
  v84 = v18;
  if ( !v16 && v18 != v15 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (v54 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v54 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v55 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v55 = 0;
    }
    if ( v54 || v55 )
    {
      v57 = *(unsigned __int16 *)(v17 + 60);
      v56 = v15;
      LODWORD(v72) = v15;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v54,
        v55,
        (__int64)gFullLog,
        5u,
        0x19u,
        0xEu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v72,
        v57,
        v74,
        v75,
        v76,
        v77,
        v78);
      v18 = v57;
    }
    else
    {
      v56 = v15;
      v57 = *(unsigned __int16 *)(v17 + 60);
    }
    v58 = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    v59 = *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1);
    if ( (a6 & 1) != 0 && (unsigned int)xxxAppAdjustDpiCandidateRect(v85, v18, a1, a1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v60) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v60) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v61) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v61) = 0;
      }
      if ( (_BYTE)v60 || (_BYTE)v61 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v60,
          v61,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          15,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v58,
          v59,
          *((_BYTE *)a1 + 8) - *(_BYTE *)a1,
          *((_BYTE *)a1 + 12) - *((_BYTE *)a1 + 4));
    }
    else
    {
      v62 = EngMulDiv(*((_DWORD *)a1 + 2) - *(_DWORD *)a1, v57, v56);
      v63 = *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 2) = *(_DWORD *)a1 + v62;
      v64 = EngMulDiv(v63, v57, v56);
      *((_DWORD *)a1 + 3) = *((_DWORD *)a1 + 1) + v64;
      LOBYTE(v65) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      v66 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v66) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v66) = 0;
      }
      if ( (_BYTE)v65 || (_BYTE)v66 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v65,
          (_DWORD)v66,
          *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
          5,
          25,
          16,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v58,
          v59,
          *((_BYTE *)a1 + 8) - *(_BYTE *)a1,
          v64);
    }
    v6 = a4;
    v8 = v85;
  }
  v19 = WindowMargins::ReduceRect((WindowMargins *)&v83, v8, a1, (const struct tagRECT *)v15, v71);
  top = v81.top;
  v21 = bottom - v81.top;
  v22 = *v19;
  left = v81.left;
  v24 = DWORD2(v82) - v82;
  v25 = HIDWORD(v82) - DWORD1(v82);
  v26 = v81.right - v81.left;
  v27 = v82 - v81.left;
  v28 = DWORD1(v82) - v81.top;
  *(struct tagRECT *)a1 = v22;
  if ( v24 != v26 || v25 != v21 )
  {
    v27 += ((*(_DWORD *)a1 - left) * (v24 - v26) + v26 / 2) / v26;
    v28 += ((v25 - v21) * (*((_DWORD *)a1 + 1) - top) + v21 / 2) / v21;
  }
  if ( v27 || v28 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (v67 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v67 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v68 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v68 = 0;
    }
    if ( v67 || v68 )
    {
      LODWORD(v73) = v28;
      LODWORD(v72) = v27;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v67,
        v68,
        (__int64)gFullLog,
        5u,
        0x19u,
        0x11u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v72,
        v73);
    }
    *(_DWORD *)a1 += v27;
    *((_DWORD *)a1 + 2) += v27;
    *((_DWORD *)a1 + 3) += v28;
    *((_DWORD *)a1 + 1) += v28;
  }
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v83, v6, v8);
  v31 = *((_DWORD *)a1 + 2);
  v32 = *MonitorWorkRectForWindow;
  v33 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8));
  v86 = v33;
  if ( v31 > v33 )
  {
    LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v31 || (_BYTE)v30 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        18,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *(_DWORD *)a1 += v33 - *((_DWORD *)a1 + 2);
    v31 = v33;
    *((_DWORD *)a1 + 2) = v33;
  }
  v34 = _mm_cvtsi128_si32(v32);
  v79 = v34;
  if ( *(_DWORD *)a1 < v34 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v31 || (_BYTE)v30 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        19,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *((_DWORD *)a1 + 2) += v34 - *(_DWORD *)a1;
    v31 = *((_DWORD *)a1 + 2);
    *(_DWORD *)a1 = v34;
  }
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 12));
  if ( *((_DWORD *)a1 + 3) > v35 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v31 || (_BYTE)v30 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        20,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v31 = *((_DWORD *)a1 + 2);
    v69 = v35 - *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 2) = v31;
    *((_DWORD *)a1 + 1) += v69;
    *((_DWORD *)a1 + 3) = v35;
  }
  v36 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 4));
  v80 = v36;
  if ( *((_DWORD *)a1 + 1) < v36 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v31 || (_BYTE)v30 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        21,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v31 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 3) += v36 - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 2) = v31;
    *((_DWORD *)a1 + 1) = v36;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0 )
  {
    if ( v31 > v33 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v31) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v30) = 0;
      }
      if ( (_BYTE)v31 || (_BYTE)v30 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v30,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          22,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      *((_DWORD *)a1 + 2) = v33;
    }
    v39 = *((_DWORD *)a1 + 3);
    if ( v39 > v35 )
    {
      LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v30) = 0;
      }
      if ( (_BYTE)v31 || (_BYTE)v30 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v30,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          23,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      *((_DWORD *)a1 + 3) = v35;
      v39 = v35;
    }
    v40 = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    v41 = v39 - *((_DWORD *)a1 + 1);
    v43 = a6 & 0x10;
    v44 = a6 & 4;
    v45 = a6 & 8;
    v88 = v43;
    v46 = a6 & 2;
    if ( v46 )
    {
      *(_DWORD *)a1 = v79;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v31) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v30) = 0;
      }
      if ( (_BYTE)v31 || (_BYTE)v30 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v30,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          24,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      if ( !v45 )
      {
        *((_DWORD *)a1 + 2) = v40 + *(_DWORD *)a1;
LABEL_192:
        v43 = v88;
LABEL_33:
        v36 = v80;
        if ( v44 )
        {
          *((_DWORD *)a1 + 1) = v80;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v31) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v30) = 0;
          }
          if ( (_BYTE)v31 || (_BYTE)v30 )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v31,
              v30,
              (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              5,
              25,
              26,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          if ( !v88 )
          {
            *((_DWORD *)a1 + 3) = v41 + *((_DWORD *)a1 + 1);
            goto LABEL_35;
          }
        }
        else if ( !v43 )
        {
LABEL_35:
          v8 = v85;
          v34 = v79;
          v33 = v86;
          goto LABEL_25;
        }
        *((_DWORD *)a1 + 3) = v35;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v31) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v30) = 0;
        }
        if ( (_BYTE)v31 || (_BYTE)v30 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v31,
            v30,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            5,
            25,
            27,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        if ( !v44 )
          *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 3) - v41;
        goto LABEL_35;
      }
    }
    else if ( !v45 )
    {
      goto LABEL_33;
    }
    *((_DWORD *)a1 + 2) = v86;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v31) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v30) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v31 || (_BYTE)v30 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        0,
        5,
        25,
        25,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( !v46 )
      *(_DWORD *)a1 = *((_DWORD *)a1 + 2) - v40;
    goto LABEL_192;
  }
LABEL_25:
  *(struct tagRECT *)a1 = *WindowMargins::ExtendRect(&v83, v8, a1, (const struct tagRECT *)v84);
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0
    && *(_DWORD *)a1 <= v34
    && *((_DWORD *)a1 + 1) <= v36
    && *((_DWORD *)a1 + 2) >= v33
    && *((_DWORD *)a1 + 3) >= v35 )
  {
    LOBYTE(v37) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v70 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v70) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v70) = 0;
    }
    if ( (_BYTE)v37 || (_BYTE)v70 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v37,
        (_DWORD)v70,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        28,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *(__m128i *)a1 = v32;
    ++*(_DWORD *)a1;
    --*((_DWORD *)a1 + 2);
    ++*((_DWORD *)a1 + 1);
    --*((_DWORD *)a1 + 3);
  }
  return a1;
}
