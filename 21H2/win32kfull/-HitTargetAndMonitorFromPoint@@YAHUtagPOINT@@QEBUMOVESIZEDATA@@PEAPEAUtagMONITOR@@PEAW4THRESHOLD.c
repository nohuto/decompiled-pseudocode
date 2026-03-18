/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A7C0
 * Callers:
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209718 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02097EC (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02098AC (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@.c)
 *     ?PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020ACF0 (-PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall HitTargetAndMonitorFromPoint(
        struct tagPOINT a1,
        const struct MOVESIZEDATA *a2,
        struct tagMONITOR **a3,
        enum THRESHOLD_MARGIN_DIRECTION *a4)
{
  unsigned __int64 v4; // rbx
  __m128i v7; // xmm6
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r9
  int v14; // r10d
  LONG v15; // r11d
  __int64 v16; // r9
  int v17; // r10d
  LONG v18; // r11d
  int v19; // r10d
  struct tagMONITOR *v20; // rcx
  struct tagMONITOR *v22; // r8
  char v23; // dl
  struct tagRECT v24; // [rsp+50h] [rbp-30h] BYREF
  struct tagMONITOR *v25; // [rsp+60h] [rbp-20h] BYREF
  struct tagPOINT v26; // [rsp+A0h] [rbp+20h] BYREF

  v26 = a1;
  v4 = *((unsigned int *)a2 + 50);
  v25 = 0LL;
  v24 = 0LL;
  ComputeSourceRectAndMonitorWithPrecision(a2, &v26, &v25, &v24);
  v7 = (__m128i)v24;
  v8 = (v4 >> 15) & 7;
  v9 = *((unsigned __int8 *)&unk_1C032CF48 + 4 * v8);
  v10 = *((unsigned __int8 *)&unk_1C032CF48 + 4 * v8 + 3);
  v24.right = _mm_cvtsi128_si32((__m128i)v24) + *((unsigned __int8 *)&unk_1C032CF48 + 4 * v8 + 1);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PtInRectSpace)(&v24, v26, 1LL) )
  {
    *(_DWORD *)a4 = 1;
LABEL_3:
    *a3 = v25;
    return 1LL;
  }
  v24 = (struct tagRECT)v7;
  v24.left = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - v12;
  if ( (unsigned int)PtInRectSpace(&v24, v11, 2LL) )
  {
    *(_DWORD *)a4 = 2;
    goto LABEL_3;
  }
  v24.top = v7.m128i_i32[1];
  v24.right = v7.m128i_i32[2] - v14;
  v24.bottom = v7.m128i_i32[1] + v9;
  v24.left = v15;
  if ( (unsigned int)PtInRectSpace(&v24, v13, 0LL) )
  {
    *(_DWORD *)a4 = 0;
    goto LABEL_3;
  }
  v24.bottom = v7.m128i_i32[3];
  v24.right = v7.m128i_i32[2] - v17;
  v24.left = v18;
  v24.top = v7.m128i_i32[3] - v10;
  if ( (unsigned int)PtInRectSpace(&v24, v16, 3LL) )
  {
    v20 = v25;
    *(_DWORD *)a4 = v19;
    *a3 = v20;
    return 1LL;
  }
  v22 = v25;
  *(_DWORD *)a4 = 4;
  *a3 = v22;
  v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x14u,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      v22,
      *(unsigned __int16 *)(*((_QWORD *)v22 + 5) + 60LL));
  return 0LL;
}
