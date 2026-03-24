/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020AE28
 * Callers:
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A3B0 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A4BC (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     xxxInitializeMoveSizeData @ 0x1C021184C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A580 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020BA3C (-PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0210C14 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HitTargetAndMonitorFromPoint(
        struct tagPOINT a1,
        const struct _MOVESIZEDATA *const a2,
        struct tagMONITOR **a3,
        enum eTHRESHOLD_MARGIN_DIRECTION *a4)
{
  unsigned int v4; // esi
  __int64 v7; // rsi
  BOOL v8; // r14d
  __int64 v9; // rcx
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // si
  unsigned __int8 v12; // r15
  struct tagRECT v13; // xmm6
  int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int8 v18; // r11
  __int64 v19; // r9
  int v20; // edx
  int v21; // r8d
  int v22; // r11d
  struct tagMONITOR *v24[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v26; // [rsp+A0h] [rbp+20h] BYREF

  v26 = a1;
  v4 = *((_DWORD *)a2 + 49);
  v24[0] = 0LL;
  v7 = (v4 >> 15) & 7;
  v25 = 0LL;
  v8 = *(_DWORD *)*gpDispInfo > 1u && (unsigned int)v7 < 6;
  ComputeSourceRectAndMonitorWithPrecision(a2, &v26, v24, &v25);
  v9 = (unsigned int)v7;
  v10 = *((_BYTE *)v24[0] + 4 * v7 + 249);
  v11 = *((_BYTE *)v24[0] + 4 * v7 + 250);
  v12 = *((_BYTE *)v24[0] + 4 * v9 + 251);
  if ( v8 )
  {
    if ( !v10 )
      v10 = gWinArrGlobal[dword_1C02EC4A4[4 * (unsigned int)v9]];
    if ( !v11 )
      v11 = gWinArrGlobal[dword_1C02EC4A8[4 * v9]];
    if ( !v12 )
      v12 = gWinArrGlobal[dword_1C02EC4AC[4 * v9]];
  }
  v13 = v25;
  *(struct tagRECT *)v24 = v25;
  v14 = _mm_cvtsi128_si32((__m128i)v25) + v10;
  LODWORD(v24[1]) = v14;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PtInRectSpace)(v24, v26, 1LL) )
  {
    *(_DWORD *)a4 = 1;
LABEL_20:
    *a3 = (struct tagMONITOR *)v16;
    return 1LL;
  }
  *(struct tagRECT *)v24 = v13;
  LODWORD(v24[0]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) - v11;
  if ( (unsigned int)PtInRectSpace(v24, v15, 2LL) )
  {
    *(_DWORD *)a4 = 2;
    goto LABEL_20;
  }
  LODWORD(v24[1]) = v13.right - v11;
  HIDWORD(v24[1]) = v13.top + v18;
  v24[0] = (struct tagMONITOR *)__PAIR64__(v13.top, v14);
  if ( (unsigned int)PtInRectSpace(v24, v17, 0LL) )
  {
    *(_DWORD *)a4 = 0;
    goto LABEL_20;
  }
  HIDWORD(v24[1]) = v13.bottom;
  LODWORD(v24[1]) = v13.right - v11;
  LODWORD(v24[0]) = v14;
  HIDWORD(v24[0]) = v13.bottom - v12;
  if ( (unsigned int)PtInRectSpace(v24, v19, 3LL) )
  {
    *(_DWORD *)a4 = v22;
    goto LABEL_20;
  }
  *(_DWORD *)a4 = 4;
  *a3 = (struct tagMONITOR *)v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL),
      v20,
      v21,
      11,
      (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
      v16,
      *(_WORD *)(*(_QWORD *)(v16 + 40) + 64LL));
  return 0LL;
}
