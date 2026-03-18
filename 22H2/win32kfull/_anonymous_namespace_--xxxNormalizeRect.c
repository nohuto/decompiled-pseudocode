/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00C1C88 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023CA3C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D940 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00C1324 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00C3290 (-LogicalMonitorRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00C3A18 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C00EC0BC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BA7E4 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1C01F31A8 (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021C7A8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1C023DBB0 (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
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
  bool v12; // dl
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
  __int64 v29; // r9
  __m128i *MonitorWorkRectForWindow; // rax
  int v31; // r8d
  int v32; // edx
  __m128i v33; // xmm6
  int v34; // edi
  int v35; // r14d
  int v36; // r13d
  int v37; // ebx
  int v38; // edx
  int v40; // r15d
  int v41; // edi
  int v42; // r15d
  int v44; // ecx
  int v45; // r12d
  int v46; // ebx
  int v47; // r14d
  LONG v48; // edi
  int v49; // edx
  int WindowBordersWithDpiAwareness; // r11d
  int v51; // r8d
  int v52; // r10d
  int v53; // ebx
  int v54; // edi
  char v55; // dl
  char v56; // r8
  INT v57; // edi
  INT v58; // ebx
  int v59; // r15d
  int v60; // r12d
  int v61; // edx
  int v62; // r8d
  INT v63; // eax
  INT v64; // ecx
  INT v65; // eax
  int v66; // edx
  _UNKNOWN **v67; // r8
  char v68; // dl
  char v69; // r8
  int v70; // ecx
  _UNKNOWN **v71; // r8
  unsigned int v72; // [rsp+20h] [rbp-F8h]
  __int64 v73; // [rsp+40h] [rbp-D8h]
  __int64 v74; // [rsp+48h] [rbp-D0h]
  LONG v75; // [rsp+50h] [rbp-C8h]
  LONG v76; // [rsp+58h] [rbp-C0h]
  LONG v77; // [rsp+60h] [rbp-B8h]
  int v78; // [rsp+68h] [rbp-B0h]
  int v79; // [rsp+70h] [rbp-A8h]
  int v80; // [rsp+80h] [rbp-98h]
  int v81; // [rsp+84h] [rbp-94h]
  struct tagRECT v82; // [rsp+88h] [rbp-90h] BYREF
  __int128 v83; // [rsp+98h] [rbp-80h] BYREF
  struct tagRECT v84; // [rsp+A8h] [rbp-70h] BYREF
  unsigned __int16 v85; // [rsp+120h] [rbp+8h]
  struct tagRECT *v86; // [rsp+128h] [rbp+10h]
  int v87; // [rsp+130h] [rbp+18h]
  int v89; // [rsp+148h] [rbp+30h]

  v86 = retstr;
  v6 = a4;
  v7 = a3;
  v8 = retstr;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
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
    v48 = v7[1];
    v79 = v7[3] - v48;
    v78 = v7[2] - *v7;
    v77 = v7[3];
    v76 = v7[2];
    v75 = v48;
    v73 = *(_QWORD *)&v8->left;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)retstr, (_DWORD)a3, v79);
  }
  v11 = *(_OWORD *)GetMonitorRectForWindow(&v83, v6, v8);
  v83 = v11;
  CMonitorTopology::MonitorData::LogicalMonitorRect(a5, &v82, (const struct tagWND *)v8);
  bottom = v82.bottom;
  if ( *v7 <= v82.left && v7[1] <= v82.top && v7[2] >= v82.right && v7[3] >= v82.bottom )
  {
    *(_OWORD *)a1 = v11;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((const struct tagWND *)v8, v12, 0, 0);
    v51 = *(_DWORD *)a1 - WindowBordersWithDpiAwareness;
    v52 = *((_DWORD *)a1 + 1) - WindowBordersWithDpiAwareness;
    v53 = WindowBordersWithDpiAwareness + *((_DWORD *)a1 + 2);
    v54 = WindowBordersWithDpiAwareness + *((_DWORD *)a1 + 3);
    *(_DWORD *)a1 = v51;
    *((_DWORD *)a1 + 3) = v54;
    *((_DWORD *)a1 + 2) = v53;
    *((_DWORD *)a1 + 1) = v52;
    LOBYTE(v49) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v49 || v10 )
    {
      LOBYTE(v51) = v10;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(WPP_GLOBAL_Control->AttachedDevice, v49, v51, v54 - v52);
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
  v85 = v18;
  if ( !v16 && v18 != v15 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v55 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v55 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v56 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v56 = 0;
    }
    if ( v55 || v56 )
    {
      v58 = *(unsigned __int16 *)(v17 + 60);
      v57 = v15;
      LODWORD(v73) = v15;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v55,
        v56,
        (__int64)gFullLog,
        5u,
        4u,
        0xEu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v73,
        v58,
        v75,
        v76,
        v77,
        v78,
        v79);
      v18 = v58;
    }
    else
    {
      v57 = v15;
      v58 = *(unsigned __int16 *)(v17 + 60);
    }
    v59 = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    v60 = *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1);
    if ( (a6 & 1) != 0 && (unsigned int)xxxAppAdjustDpiCandidateRect(v86, v18, a1, a1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v61) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v61) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v62) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v62) = 0;
      }
      if ( (_BYTE)v61 || (_BYTE)v62 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v61,
          v62,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          15,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v59,
          v60,
          *((_BYTE *)a1 + 8) - *(_BYTE *)a1,
          *((_BYTE *)a1 + 12) - *((_BYTE *)a1 + 4));
    }
    else
    {
      v63 = EngMulDiv(*((_DWORD *)a1 + 2) - *(_DWORD *)a1, v58, v57);
      v64 = *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 2) = *(_DWORD *)a1 + v63;
      v65 = EngMulDiv(v64, v58, v57);
      *((_DWORD *)a1 + 3) = *((_DWORD *)a1 + 1) + v65;
      LOBYTE(v66) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      v67 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v67) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v67) = 0;
      }
      if ( (_BYTE)v66 || (_BYTE)v67 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v66,
          (_DWORD)v67,
          *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
          5,
          4,
          16,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v59,
          v60,
          *((_BYTE *)a1 + 8) - *(_BYTE *)a1,
          v65);
    }
    v6 = a4;
    v8 = v86;
  }
  v19 = WindowMargins::ReduceRect((WindowMargins *)&v84, v8, a1, (const struct tagRECT *)v15, v72);
  top = v82.top;
  v21 = bottom - v82.top;
  v22 = *v19;
  left = v82.left;
  v24 = DWORD2(v83) - v83;
  v25 = HIDWORD(v83) - DWORD1(v83);
  v26 = v82.right - v82.left;
  v27 = v83 - v82.left;
  v28 = DWORD1(v83) - v82.top;
  *(struct tagRECT *)a1 = v22;
  if ( v24 != v26 || v25 != v21 )
  {
    v27 += ((*(_DWORD *)a1 - left) * (v24 - v26) + v26 / 2) / v26;
    v28 += ((v25 - v21) * (*((_DWORD *)a1 + 1) - top) + v21 / 2) / v21;
  }
  v29 = 0LL;
  if ( v27 || v28 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v68 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v68 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v69 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v69 = 0;
    }
    if ( v68 || v69 )
    {
      LODWORD(v74) = v28;
      LODWORD(v73) = v27;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v68,
        v69,
        (__int64)gFullLog,
        5u,
        4u,
        0x11u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v73,
        v74);
    }
    *(_DWORD *)a1 += v27;
    *((_DWORD *)a1 + 2) += v27;
    *((_DWORD *)a1 + 3) += v28;
    *((_DWORD *)a1 + 1) += v28;
  }
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v84, v6, v8, v29);
  v32 = *((_DWORD *)a1 + 2);
  v33 = *MonitorWorkRectForWindow;
  v34 = _mm_cvtsi128_si32(_mm_srli_si128(*MonitorWorkRectForWindow, 8));
  v87 = v34;
  if ( v32 > v34 )
  {
    LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v32 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v31,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        18,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *(_DWORD *)a1 += v34 - *((_DWORD *)a1 + 2);
    v32 = v34;
    *((_DWORD *)a1 + 2) = v34;
  }
  v35 = _mm_cvtsi128_si32(v33);
  v80 = v35;
  if ( *(_DWORD *)a1 < v35 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v32) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v32 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v31,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        19,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *((_DWORD *)a1 + 2) += v35 - *(_DWORD *)a1;
    v32 = *((_DWORD *)a1 + 2);
    *(_DWORD *)a1 = v35;
  }
  v36 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 12));
  if ( *((_DWORD *)a1 + 3) > v36 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v32) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v32 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v31,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        20,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v32 = *((_DWORD *)a1 + 2);
    v70 = v36 - *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 2) = v32;
    *((_DWORD *)a1 + 1) += v70;
    *((_DWORD *)a1 + 3) = v36;
  }
  v37 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 4));
  v81 = v37;
  if ( *((_DWORD *)a1 + 1) < v37 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v32) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v32 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v31,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        21,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v32 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 3) += v37 - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 2) = v32;
    *((_DWORD *)a1 + 1) = v37;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0 )
  {
    if ( v32 > v34 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v32) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v31) = 0;
      }
      if ( (_BYTE)v32 || (_BYTE)v31 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v32,
          v31,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          22,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      *((_DWORD *)a1 + 2) = v34;
    }
    v40 = *((_DWORD *)a1 + 3);
    if ( v40 > v36 )
    {
      LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v31) = 0;
      }
      if ( (_BYTE)v32 || (_BYTE)v31 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v32,
          v31,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          23,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      *((_DWORD *)a1 + 3) = v36;
      v40 = v36;
    }
    v41 = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    v42 = v40 - *((_DWORD *)a1 + 1);
    v44 = a6 & 0x10;
    v45 = a6 & 4;
    v46 = a6 & 8;
    v89 = v44;
    v47 = a6 & 2;
    if ( v47 )
    {
      *(_DWORD *)a1 = v80;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v32) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v31) = 0;
      }
      if ( (_BYTE)v32 || (_BYTE)v31 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v32,
          v31,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          24,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      if ( !v46 )
      {
        *((_DWORD *)a1 + 2) = v41 + *(_DWORD *)a1;
LABEL_192:
        v44 = v89;
LABEL_33:
        v37 = v81;
        if ( v45 )
        {
          *((_DWORD *)a1 + 1) = v81;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v32) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v31) = 0;
          }
          if ( (_BYTE)v32 || (_BYTE)v31 )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v32,
              v31,
              (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              5,
              4,
              26,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          if ( !v89 )
          {
            *((_DWORD *)a1 + 3) = v42 + *((_DWORD *)a1 + 1);
            goto LABEL_35;
          }
        }
        else if ( !v44 )
        {
LABEL_35:
          v8 = v86;
          v35 = v80;
          v34 = v87;
          goto LABEL_25;
        }
        *((_DWORD *)a1 + 3) = v36;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v32) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v31) = 0;
        }
        if ( (_BYTE)v32 || (_BYTE)v31 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v31,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            5,
            4,
            27,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        if ( !v45 )
          *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 3) - v42;
        goto LABEL_35;
      }
    }
    else if ( !v46 )
    {
      goto LABEL_33;
    }
    *((_DWORD *)a1 + 2) = v87;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v32) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v31) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v31) = 0;
    }
    if ( (_BYTE)v32 || (_BYTE)v31 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        v31,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        25,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( !v47 )
      *(_DWORD *)a1 = *((_DWORD *)a1 + 2) - v41;
    goto LABEL_192;
  }
LABEL_25:
  *(struct tagRECT *)a1 = *WindowMargins::ExtendRect(&v84, v8, a1, (const struct tagRECT *)v85);
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0
    && *(_DWORD *)a1 <= v35
    && *((_DWORD *)a1 + 1) <= v37
    && *((_DWORD *)a1 + 2) >= v34
    && *((_DWORD *)a1 + 3) >= v36 )
  {
    LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v71 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v71) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v71) = 0;
    }
    if ( (_BYTE)v38 || (_BYTE)v71 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v38,
        (_DWORD)v71,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        28,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    *(__m128i *)a1 = v33;
    ++*(_DWORD *)a1;
    --*((_DWORD *)a1 + 2);
    ++*((_DWORD *)a1 + 1);
    --*((_DWORD *)a1 + 3);
  }
  return a1;
}
