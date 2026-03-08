/*
 * XREFs of ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01E5920
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E5B20 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 * Callees:
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E52C4 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 */

__int64 __fastcall _TTCheckNCTarget(
        struct tagRECT *a1,
        struct tagWND *a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned __int16 *a5,
        struct tagPOINT *a6,
        struct tagRECT *a7,
        unsigned int a8)
{
  struct tagRECT v8; // xmm0
  __int16 v9; // r15
  __int64 v11; // r8
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // rsi
  unsigned __int16 v17; // bx
  struct tagRECT *v18; // rax
  struct tagRECT v19; // xmm0
  struct tagPOINT *v20; // rcx
  struct tagRECT v22; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v24; // [rsp+80h] [rbp+8h] BYREF

  v8 = *a1;
  v9 = a8;
  v11 = *((_QWORD *)a3 + 5);
  v24 = 0LL;
  v22 = v8;
  v23 = v8;
  v15 = TouchTargetingRankForRect(&v23, &v22, v11, a4, &v24, a8);
  v16 = a5;
  v17 = v15;
  if ( v15 >= *a5 || v15 >= 0xFFDu || !(unsigned int)TTBetterTarget(a2, v15, a3, a4, v9) )
    return 0LL;
  v18 = a7;
  v19 = *a1;
  v20 = a6;
  *v16 = v17;
  *v18 = v19;
  *v20 = v24;
  return 1LL;
}
