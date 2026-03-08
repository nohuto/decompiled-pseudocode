/*
 * XREFs of GetMonitorRectForDpi @ 0x1C003BDD8
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     GetScreenRectForDpi @ 0x1C003A9AC (GetScreenRectForDpi.c)
 *     CreateMonitorRegionForDpi @ 0x1C003B6D0 (CreateMonitorRegionForDpi.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C003B720 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     GetMonitorRect @ 0x1C003DBB4 (GetMonitorRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00A8E10 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00C1BB0 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r12
  __int64 v5; // rbx
  INT v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  INT v9; // esi
  INT v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // r12
  INT v13; // ebp
  __int64 v14; // rdi
  unsigned __int64 v15; // xmm6_8
  int v16; // r14d
  int v17; // eax
  signed int v18; // r8d
  unsigned __int64 v19; // rax

  v3 = *(_QWORD *)(a2 + 40);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v5 = a1->m128i_i64[0];
    v6 = *(unsigned __int16 *)(v3 + 62);
    v7 = a3;
    v8 = HIDWORD(a1->m128i_i64[0]);
    v9 = EngMulDiv(a1->m128i_i64[0], a3, v6);
    v10 = EngMulDiv(SHIDWORD(v5), v7, v6);
    v11 = *a1;
    v12 = *(unsigned __int16 *)(v3 + 60);
    v13 = v10;
    v14 = a1->m128i_i64[0];
    LODWORD(v5) = EngMulDiv(*(_OWORD *)a1 - v5, v7, v12) + v9;
    a1->m128i_i32[0] = v5;
    v15 = _mm_srli_si128(v11, 8).m128i_u64[0];
    v16 = EngMulDiv(HIDWORD(v14) - v8, v7, v12) + v13;
    a1->m128i_i32[1] = v16;
    a1->m128i_i32[2] = v5 + EngMulDiv(v15 - v14, v7, v12);
    v17 = HIDWORD(v14) - HIDWORD(v15);
    v18 = ((HIDWORD(v15) - HIDWORD(v14)) >> 31) & 0xFFFFFFFE;
    if ( HIDWORD(v15) - HIDWORD(v14) >= 0 )
      v17 = HIDWORD(v15) - HIDWORD(v14);
    if ( (_DWORD)v12
      && (v19 = (__int64)(((unsigned __int64)(unsigned int)v12 >> 1) + v7 * v17) / v12, v19 <= 0x7FFFFFFF) )
    {
      if ( v18 <= -1 )
        LODWORD(v19) = -(int)v19;
    }
    else
    {
      LODWORD(v19) = 0x80000000;
      if ( v18 > -1 )
        LODWORD(v19) = 0x7FFFFFFF;
    }
    a1->m128i_i32[3] = v16 + v19;
  }
  return a1;
}
