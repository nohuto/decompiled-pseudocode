/*
 * XREFs of _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 *     CalculateLogicalMonitorRect @ 0x1C00B0650 (CalculateLogicalMonitorRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

_BYTE *__fastcall anonymous_namespace_::GetPreviousMonitorInfo(
        _BYTE *a1,
        const struct tagWND *a2,
        struct tagRECT *a3,
        __int64 a4)
{
  struct tagRECT v4; // xmm6
  __int32 v8; // r8d
  LONG v9; // edx
  int v10; // eax
  unsigned int PreviousMonitorIndex; // eax
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rbx
  struct tagRECT v18; // [rsp+30h] [rbp-30h] BYREF

  v18 = *a3;
  v4 = v18;
  v8 = _mm_srli_si128(*(__m128i *)&v18, 8).m128i_i32[1] - v18.top;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8));
  v10 = _mm_cvtsi128_si32((__m128i)v18);
  v18.right = v9;
  if ( v9 == v10 )
  {
    v18.right = v9 + 1;
    v4 = v18;
  }
  if ( !v8 )
  {
    ++v18.bottom;
    v4 = v18;
  }
  memset(a1, 0, 0x48uLL);
  if ( a4 )
  {
    v18 = v4;
    PreviousMonitorIndex = anonymous_namespace_::FindPreviousMonitorIndex(a2, &v18);
    if ( PreviousMonitorIndex != -1 )
    {
      *a1 = 1;
      v12 = a4 + 72LL * PreviousMonitorIndex;
      *((_QWORD *)a1 + 1) = *(_QWORD *)(v12 + 16);
      v13 = *(unsigned __int16 *)(v12 + 56);
      *((_WORD *)a1 + 32) = v13;
      *((_OWORD *)a1 + 3) = *(_OWORD *)(v12 + 40);
      *((_OWORD *)a1 + 1) = *(_OWORD *)CalculateLogicalMonitorRect(
                                         (unsigned int)&v18,
                                         (unsigned int)a4 + 8 * (9 * PreviousMonitorIndex + 3),
                                         v13,
                                         (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF,
                                         *(_WORD *)(a4 + 12));
      v14 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8;
      LOWORD(v14) = v14 & 0x1FF;
      *((_OWORD *)a1 + 2) = *(_OWORD *)CalculateLogicalMonitorRect(
                                         (unsigned int)&v18,
                                         (int)v12 + 40,
                                         *((unsigned __int16 *)a1 + 32),
                                         v14,
                                         *(_WORD *)(a4 + 12));
    }
  }
  else
  {
    v16 = (_QWORD *)MonitorFromRect(&v18, 0, *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL));
    v17 = (__int64)v16;
    if ( v16 )
    {
      *a1 = 1;
      *((_QWORD *)a1 + 1) = *v16;
      *((_OWORD *)a1 + 1) = *(_OWORD *)GetMonitorRectForWindow((__int64)&v18, (__int64)v16, a2);
      *((_OWORD *)a1 + 2) = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)&v18, v17, a2);
      *((_OWORD *)a1 + 3) = *(_OWORD *)(*(_QWORD *)(v17 + 40) + 44LL);
      *((_WORD *)a1 + 32) = *(_WORD *)(*(_QWORD *)(v17 + 40) + 60LL);
    }
  }
  return a1;
}
