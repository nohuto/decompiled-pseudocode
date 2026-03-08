/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00FB208 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023E588 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FB30C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00FE8D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A7638 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F4350 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021F368 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C0220F00 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1C023E328 (_anonymous_namespace_--GetArrangedOptions.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowCheckpoint(
        struct tagWND *a1,
        struct tagRECT *a2,
        __int64 a3,
        CMonitorTopology *a4,
        char a5,
        int *a6)
{
  unsigned int v8; // r13d
  char v10; // di
  char v11; // r14
  _DWORD *v12; // rax
  struct tagRECT v13; // xmm0
  CMonitorTopology::MonitorData *v14; // rax
  char v15; // r14
  __m128i v16; // xmm6
  __m128i v17; // xmm0
  struct tagRECT *v18; // r14
  int v19; // edx
  const struct CMonitorTopology::MonitorData *v20; // rsi
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  LONG left; // ecx
  unsigned int v25; // ecx
  char v26; // dl
  char ArrangedOptions; // al
  __m128i v29; // xmm6
  __m128i v30; // xmm0
  unsigned __int16 v31; // [rsp+28h] [rbp-B9h]
  __int64 v32; // [rsp+48h] [rbp-99h]
  int v33; // [rsp+48h] [rbp-99h]
  __int64 v34; // [rsp+50h] [rbp-91h]
  int v35; // [rsp+50h] [rbp-91h]
  __int64 v36; // [rsp+58h] [rbp-89h]
  int v37; // [rsp+58h] [rbp-89h]
  __int64 v38; // [rsp+60h] [rbp-81h]
  int v39; // [rsp+60h] [rbp-81h]
  __int64 v40; // [rsp+68h] [rbp-79h]
  int v41; // [rsp+68h] [rbp-79h]
  __int64 v42; // [rsp+70h] [rbp-71h]
  int v43; // [rsp+70h] [rbp-71h]
  __int64 v44; // [rsp+78h] [rbp-69h] BYREF
  __int64 v45; // [rsp+80h] [rbp-61h] BYREF
  struct tagRECT v46; // [rsp+88h] [rbp-59h] BYREF
  int v47; // [rsp+98h] [rbp-49h]
  int *v48; // [rsp+A0h] [rbp-41h]
  __m128i v49; // [rsp+A8h] [rbp-39h] BYREF
  struct tagRECT v50; // [rsp+B8h] [rbp-29h] BYREF

  v45 = a3;
  v48 = a6;
  v8 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(_DWORD **)(a3 + 40);
    v43 = v12[10] - v12[8];
    v41 = v12[9] - v12[7];
    v39 = v12[10];
    v37 = v12[9];
    v35 = v12[8];
    v33 = v12[7];
    LODWORD(v44) = 33;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x21u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v33,
      v35,
      v37,
      v39,
      v41,
      v43,
      v44,
      v45);
  }
  v13 = *a2;
  a2[3].left &= ~0x20u;
  v46 = v13;
  v14 = CMonitorTopology::MonitorDataFromRect(a4, a1, &v46);
  v15 = 0;
  if ( v14 )
  {
    v16 = *(__m128i *)anonymous_namespace_::xxxNormalizeRect(
                        (struct tagWND *)&v46,
                        (struct tagRECT *)a1,
                        &a2->left,
                        v45,
                        v14,
                        0);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0 )
    {
      v15 = BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    }
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = 34;
      v17 = _mm_srli_si128(v16, 8);
      LODWORD(v42) = v17.m128i_i32[1] - v16.m128i_i32[1];
      LODWORD(v40) = _mm_cvtsi128_si32(v17) - v16.m128i_i32[0];
      LODWORD(v38) = v17.m128i_i32[1];
      LODWORD(v36) = _mm_cvtsi128_si32(v17);
      LODWORD(v34) = v16.m128i_i32[1];
      LODWORD(v32) = v16.m128i_i32[0];
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x19u,
        0x22u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v32,
        v34,
        v36,
        v38,
        v40,
        v42);
    }
    *a2 = (struct tagRECT)v16;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    return 0LL;
  if ( (a2[3].left & 0x18) == 0 )
    return 0LL;
  v18 = a2 + 1;
  v46 = a2[1];
  v20 = CMonitorTopology::MonitorDataFromRect(a4, a1, &v46);
  if ( !v20 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v21) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v21) = 0;
  }
  if ( (_BYTE)v19 || (_BYTE)v21 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v21,
      (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      5,
      25,
      35,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
  LODWORD(v44) = 0;
  v49 = 0LL;
  CMonitorTopology::MonitorData::LogicalWorkArea(v20, &v50, a1);
  if ( (a5 & 1) != 0 )
  {
    v31 = *((_WORD *)v20 + 20);
    v46 = *v18;
    if ( CallShell::xxxMigrateWindowHandler(
           (struct tagRECT *)a1,
           2,
           (__int64 *)v20 + 3,
           (__int64 *)&v50.left,
           v31,
           (struct tagWND *)&v46,
           v45,
           &v49,
           (int *)&v44,
           v48) )
    {
      v8 = 1;
      switch ( (_DWORD)v44 )
      {
        case 0:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              4,
              25,
              38,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          }
          a2[3].left &= 0xFFFFFFE5;
          return 1LL;
        case 1:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v22) = 0;
          }
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              4,
              25,
              37,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          }
          a2[3].left = a2[3].left & 0xFFFFFFE5 | 2;
          return 1LL;
        case 3:
          left = a2[3].left;
          if ( *((_DWORD *)v20 + 6) == v49.m128i_i32[0] )
          {
            v25 = left & 0xFFFFFFE7 | 8;
          }
          else if ( *((_DWORD *)v20 + 8) == v49.m128i_i32[2] )
          {
            v25 = left & 0xFFFFFFE7 | 0x10;
          }
          else
          {
            v25 = left | 0x18;
          }
          a2[3].left = v25;
          PhysicalToLogicalDPIRect(&v49, &v49, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v45);
          v49 = *(__m128i *)WindowMargins::ExtendRect(
                              &v46,
                              (struct tagRECT *)a1,
                              (const struct tagWND *)&v49,
                              (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v45 + 40) + 60LL));
          *v18 = (struct tagRECT)v49;
          v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v38) = v49.m128i_i32[3];
            LODWORD(v36) = v49.m128i_i32[2];
            LODWORD(v34) = v49.m128i_i32[1];
            LODWORD(v32) = v49.m128i_i32[0];
            WPP_RECORDER_AND_TRACE_SF_dddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v26,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              HIDWORD(v49.m128i_i64[1]),
              4u,
              0x19u,
              0x24u,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              v32,
              v34,
              v36,
              v38);
          }
          return 1LL;
      }
    }
  }
  ArrangedOptions = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&a2[1], (struct tagRECT *)a1, v20);
  v29 = *(__m128i *)anonymous_namespace_::xxxNormalizeRect(
                      (struct tagWND *)&v46,
                      (struct tagRECT *)a1,
                      &a2[1].left,
                      v45,
                      v20,
                      ArrangedOptions);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = _mm_srli_si128(v29, 8);
    LODWORD(v42) = v30.m128i_i32[1] - v29.m128i_i32[1];
    LODWORD(v40) = _mm_cvtsi128_si32(v30) - v29.m128i_i32[0];
    LODWORD(v38) = v30.m128i_i32[1];
    LODWORD(v36) = _mm_cvtsi128_si32(v30);
    LODWORD(v34) = v29.m128i_i32[1];
    LODWORD(v32) = v29.m128i_i32[0];
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x27u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v32,
      v34,
      v36,
      v38,
      v40,
      v42);
  }
  *v18 = (struct tagRECT)v29;
  return v8;
}
