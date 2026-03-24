/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C00719B0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0071040 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // r15
  unsigned int v14; // ebx
  unsigned __int16 v15; // r14
  __m128i v16; // xmm0
  unsigned __int16 v17; // bx
  unsigned __int64 v18; // r8
  int v19; // edi
  int v20; // eax
  signed __int64 v21; // r10
  unsigned __int64 v22; // r11
  int v23; // edi
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  signed __int64 v26; // r10
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rax
  signed __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  signed int v35; // r9d
  signed __int64 v36; // r11
  unsigned __int64 v37; // rdx
  int v38; // eax
  int v39; // edx
  signed int v40; // r10d
  signed __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 result; // rax
  __int64 v45; // [rsp+20h] [rbp-48h]
  __int128 v46; // [rsp+30h] [rbp-38h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 || !qword_1C0256C18 || (int)qword_1C0256C18() < 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  if ( !a4 || (v9 = (_QWORD *)*a4) == 0LL )
  {
    v9 = qword_1C0256C20;
    if ( qword_1C0256C20 )
      v9 = (_QWORD *)qword_1C0256C20(*(_QWORD *)a2, 2LL, CurrentThreadDpiAwarenessContext);
  }
  if ( a4 )
    *a4 = v9;
  v10 = v9[5];
  v11 = 0x80000000;
  v12 = CurrentThreadDpiAwarenessContext & 0x20000000;
  v13 = *(unsigned __int16 *)(v10 + 64);
  if ( v8 == 2 && v12 )
  {
    v15 = *(_WORD *)(v10 + 68);
    v14 = CurrentThreadDpiAwarenessContext >> 8;
  }
  else
  {
    v14 = CurrentThreadDpiAwarenessContext >> 8;
    v15 = v14 & 0x1FF;
    if ( v8 != 2 )
    {
LABEL_13:
      v16 = *(__m128i *)(v10 + 28);
      v45 = v16.m128i_i64[0];
      v17 = v14 & 0x1FF;
      if ( v17 )
      {
        v18 = *(unsigned __int16 *)(v10 + 66);
        v19 = 1;
        v20 = _mm_cvtsi128_si32(v16);
        if ( v20 < 0 )
        {
          v19 = -1;
          v20 = -v20;
        }
        if ( *(_WORD *)(v10 + 66)
          && ((v21 = (v18 >> 1) + v20 * (unsigned __int64)v17, *(_WORD *)(v10 + 66) != 96LL)
            ? (v22 = v21 / *(unsigned __int16 *)(v10 + 66))
            : (v22 = v21 / 96),
              v22 <= 0x7FFFFFFF) )
        {
          if ( v19 <= 0 )
            LODWORD(v22) = -(int)v22;
        }
        else
        {
          LODWORD(v22) = 0x80000000;
          if ( v19 > 0 )
            LODWORD(v22) = 0x7FFFFFFF;
        }
        v23 = 1;
        v24 = HIDWORD(v16.m128i_i64[0]);
        if ( v16.m128i_i32[1] < 0 )
        {
          v23 = -1;
          LODWORD(v24) = -v16.m128i_i32[1];
        }
        if ( *(_WORD *)(v10 + 66)
          && ((v25 = *(unsigned __int16 *)(v10 + 66), v26 = (v18 >> 1) + (int)v24 * (unsigned __int64)v17, v25 != 96)
            ? (v28 = v26 / v25)
            : (v27 = (__int64)((unsigned __int128)(v26 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
               v28 = (v27 >> 63) + v27),
              v28 <= 0x7FFFFFFF) )
        {
          if ( v23 <= 0 )
            LODWORD(v28) = -(int)v28;
        }
        else
        {
          LODWORD(v28) = 0x80000000;
          if ( v23 > 0 )
            LODWORD(v28) = 0x7FFFFFFF;
        }
        if ( !*(_WORD *)(v10 + 64)
          || (v29 = ((unsigned __int64)*(unsigned __int16 *)(v10 + 64) >> 1) / *(unsigned __int16 *)(v10 + 64),
              v29 > 0x7FFFFFFF) )
        {
          LODWORD(v29) = 0x7FFFFFFF;
        }
        LODWORD(v45) = v22 + v29;
        if ( !*(_WORD *)(v10 + 64)
          || ((v30 = v13 >> 1, *(_WORD *)(v10 + 64) != 96LL)
            ? (v31 = v30 / *(unsigned __int16 *)(v10 + 64))
            : (v31 = v30 / 96),
              v31 > 0x7FFFFFFF) )
        {
          LODWORD(v31) = 0x7FFFFFFF;
        }
        HIDWORD(v45) = v28 + v31;
      }
      v32 = v45;
      goto LABEL_38;
    }
  }
  if ( !v12 )
    goto LABEL_13;
  v32 = *(_QWORD *)(v10 + 72);
LABEL_38:
  v33 = *(_DWORD *)a2 - v32;
  v34 = v32 - *(_DWORD *)a2;
  v35 = (v33 >> 31) & 0xFFFFFFFE;
  v46 = *(_OWORD *)(v10 + 28);
  if ( v33 >= 0 )
    v34 = v33;
  if ( v15
    && ((v36 = ((unsigned __int64)v15 >> 1) + v34 * v13, v15 != 96LL) ? (v37 = v36 / v15) : (v37 = v36 / 96),
        v37 <= 0x7FFFFFFF) )
  {
    if ( v35 <= -1 )
      LODWORD(v37) = -(int)v37;
  }
  else
  {
    LODWORD(v37) = 0x80000000;
    if ( v35 > -1 )
      LODWORD(v37) = 0x7FFFFFFF;
  }
  *(_DWORD *)a1 = v46 + v37;
  v38 = *(_DWORD *)(a2 + 4) - HIDWORD(v32);
  v39 = HIDWORD(v32) - *(_DWORD *)(a2 + 4);
  v40 = (v38 >> 31) & 0xFFFFFFFE;
  if ( v38 >= 0 )
    v39 = *(_DWORD *)(a2 + 4) - HIDWORD(v32);
  if ( v15
    && ((v41 = ((unsigned __int64)v15 >> 1) + v13 * v39, v15 != 96LL)
      ? (v43 = v41 / v15)
      : (v42 = (__int64)((unsigned __int128)(v41 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4, v43 = (v42 >> 63) + v42),
        v43 <= 0x7FFFFFFF) )
  {
    v11 = v43;
    if ( v40 <= -1 )
      v11 = -(int)v43;
  }
  else if ( v40 > -1 )
  {
    v11 = 0x7FFFFFFF;
  }
  result = 1LL;
  *(_DWORD *)(a1 + 4) = v11 + DWORD1(v46);
  return result;
}
