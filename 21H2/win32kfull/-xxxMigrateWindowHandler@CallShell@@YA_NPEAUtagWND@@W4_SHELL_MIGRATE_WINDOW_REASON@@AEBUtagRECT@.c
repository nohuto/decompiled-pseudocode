/*
 * XREFs of ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1C012036C (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

char __fastcall CallShell::xxxMigrateWindowHandler(
        struct tagWND *a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        _DWORD *a6,
        __int64 a7,
        __m128i *a8,
        int *a9,
        int *a10)
{
  int v14; // r8d
  __m128i v15; // xmm1
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  __int128 v18; // xmm0
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rcx
  char v22; // bl
  LONG right; // edx
  __int32 v24; // r8d
  int v25; // r9d
  int v26; // ecx
  int v27; // eax
  const char *v28; // rax
  __m128i v30; // xmm6
  char v31; // dl
  BOOL v32; // edi
  __int64 v33; // rcx
  PDEVICE_OBJECT v34; // r10
  __int16 v35; // ax
  const char *v36; // rax
  int v37; // edx
  int v38; // [rsp+28h] [rbp-E0h]
  __int64 v39; // [rsp+48h] [rbp-C0h]
  __m128i v40; // [rsp+88h] [rbp-80h] BYREF
  __m128i *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B4h] [rbp-54h]
  int v45; // [rsp+B8h] [rbp-50h]
  __int128 v46; // [rsp+BCh] [rbp-4Ch]
  unsigned __int16 v47; // [rsp+CCh] [rbp-3Ch]
  __int16 v48; // [rsp+CEh] [rbp-3Ah]
  __m128i v49; // [rsp+D0h] [rbp-38h]
  __m128i v50; // [rsp+E0h] [rbp-28h]
  __int16 v51; // [rsp+F0h] [rbp-18h]
  __int16 v52; // [rsp+F2h] [rbp-16h]
  struct tagRECT v53; // [rsp+F4h] [rbp-14h]
  int v54; // [rsp+104h] [rbp-4h]
  __int128 v55; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v56; // [rsp+118h] [rbp+10h] BYREF

  *a9 = 3;
  *a8 = 0LL;
  v41 = a8;
  v38 = a5;
  v15 = *(__m128i *)WindowMargins::ReduceRect(&v55, a1, a6);
  v16 = *((_QWORD *)a1 + 5);
  v40 = v15;
  v17 = (*(_DWORD *)(v16 + 288) >> 8) & 0x1FF;
  if ( v17 )
  {
    ScaleDPIRect(&v40, &v40, a5, v17, *a3, *a4);
    v15 = v40;
  }
  v18 = *(_OWORD *)a3;
  v19 = *(_QWORD *)a1;
  v48 = 0;
  v52 = 0;
  v46 = v18;
  v20 = 3;
  v42 = v19;
  v45 = *a10;
  v43 = 3;
  v44 = a2;
  v47 = a5;
  v21 = *(_QWORD *)(a7 + 40);
  v49 = v15;
  v50 = *(__m128i *)(v21 + 44);
  v51 = *(_WORD *)(v21 + 60);
  v53 = 0LL;
  v54 = 3;
  v22 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
    || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v14,
      v19,
      4,
      25,
      26,
      (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
      v19);
  }
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)&v42) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (LOBYTE(right) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(right) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v22 = 0;
    if ( (_BYTE)right || v22 )
    {
      LOBYTE(v24) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        right,
        v24,
        v25,
        5,
        25,
        27,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
    }
    return 0;
  }
  v26 = v54;
  if ( v54 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v22 = 0;
    }
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(right) = v22;
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        right,
        v24,
        v25,
        2,
        25,
        28,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids);
    }
    return 0;
  }
  if ( v54 > 3 )
  {
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v22 = 0;
    }
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v35 = 29;
  }
  else
  {
    v27 = v45;
    *a9 = v54;
    *a10 = v27;
    if ( v26 != 3 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
        || (LOBYTE(right) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(right) = 0;
      }
      if ( (_BYTE)right || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( v26 )
        {
          v28 = "maximized";
          if ( v26 != 1 )
            v28 = "minimized";
        }
        else
        {
          v28 = "restored";
        }
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          right,
          v24,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          25,
          30,
          (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
          (__int64)v28);
      }
      return 1;
    }
    v30 = (__m128i)v53;
    v56 = v53;
    v40 = v50;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v31 = 0;
    }
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v39) = v53.left;
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v31,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        v38,
        0x19u,
        0x1Fu,
        (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
        v39,
        v53.top,
        v53.right,
        v53.bottom,
        v50.m128i_i32[0],
        v50.m128i_i32[1],
        v50.m128i_i32[2],
        v50.m128i_i32[3]);
    }
    v55 = 0LL;
    v32 = IsRectEmptyInl(&v56);
    if ( v32 || !(unsigned int)IntersectRect(&v55, &v56.left, v40.m128i_i32) )
      goto LABEL_72;
    v24 = v30.m128i_i32[0];
    right = v56.right;
    v33 = v55 - v30.m128i_i64[0];
    if ( (_QWORD)v55 == v30.m128i_i64[0] )
      v33 = *((_QWORD *)&v55 + 1) - *(_QWORD *)&v56.right;
    if ( v33 )
    {
LABEL_72:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v22 = 0;
      }
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = "rect is empty";
        if ( !v32 )
          v36 = "rect not contained by work area";
        v37 = 32;
        LOBYTE(v37) = v22;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          v37,
          v24,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          25,
          32,
          (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
          (__int64)v36);
      }
      return 0;
    }
    v26 = v30.m128i_i32[0] == v40.m128i_i32[0];
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v30, 4)) == v40.m128i_i32[1] )
      ++v26;
    if ( v56.right == v40.m128i_i32[2] )
      ++v26;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v30, 12)) == v40.m128i_i32[3] )
      ++v26;
    if ( (unsigned int)(v26 - 2) <= 1 )
    {
      *v41 = v30;
      return 1;
    }
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v22 = 0;
    }
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v35 = 33;
  }
  LOBYTE(right) = v22;
  WPP_RECORDER_AND_TRACE_SF_D(
    v34->AttachedDevice,
    right,
    v24,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    25,
    v35,
    (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
    v26);
  return 0;
}
