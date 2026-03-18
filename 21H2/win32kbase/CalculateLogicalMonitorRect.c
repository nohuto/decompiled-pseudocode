/*
 * XREFs of CalculateLogicalMonitorRect @ 0x1C006E324
 * Callers:
 *     GetMonitorRectForDpi @ 0x1C006DCC8 (GetMonitorRectForDpi.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006DD10 (LogicalToPhysicalDPIRect.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C006DE50 (LogicalCursorPosFromDpiAwarenessContext.c)
 * Callees:
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 */

__m128i *__fastcall CalculateLogicalMonitorRect(
        __m128i *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  __m128i *v5; // r14
  INT v6; // ebp
  __int64 v8; // rbx
  INT v9; // r13d
  INT v10; // esi
  INT v11; // eax
  INT v12; // r12d
  INT v13; // r8d
  INT v14; // edi
  __m128i v15; // xmm6
  __int64 v16; // rbp
  int v17; // esi
  int v18; // edi

  v5 = a1;
  v6 = a3;
  *a1 = *a2;
  if ( a4 )
  {
    v8 = a1->m128i_i64[0];
    v9 = a4;
    v10 = EngMulDiv(a1->m128i_i64[0], a4, a5);
    v11 = EngMulDiv(SHIDWORD(v8), v9, a5);
    v12 = v6;
    v13 = v6;
    v14 = v11;
    v15 = *a1;
    v16 = a1->m128i_i64[0];
    v17 = EngMulDiv(*(_OWORD *)a1 - v8, v9, v13) + v10;
    a1->m128i_i32[0] = v17;
    v5 = a1;
    v18 = EngMulDiv(HIDWORD(v16) - HIDWORD(v8), v9, v12) + v14;
    v15.m128i_i64[0] = _mm_srli_si128(v15, 8).m128i_u64[0];
    a1->m128i_i32[1] = v18;
    a1->m128i_i32[2] = v17 + EngMulDiv(v15.m128i_i32[0] - v16, v9, v12);
    a1->m128i_i32[3] = v18 + EngMulDiv(v15.m128i_i32[1] - HIDWORD(v16), v9, v12);
  }
  return v5;
}
