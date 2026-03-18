/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02098AC
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A7C0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v9; // r8d
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  struct tagRECT v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  const struct tagWND *v16; // r8
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  const struct tagWND *v20; // r8
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-20h] BYREF

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v9 = *((_DWORD *)a1 + 50);
  v10 = CurrentThreadDpiAwarenessContext;
  if ( (v9 & 0x38000) == 0x30000 )
  {
    v19 = MonitorFromPoint((unsigned __int64)*a2, 2u, CurrentThreadDpiAwarenessContext);
    v20 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v21 = v19;
    v13 = *(struct tagRECT *)GetMonitorWorkRectForWindow((__int64)v22, v19, v20);
LABEL_13:
    v12 = v21;
    goto LABEL_14;
  }
  if ( *(_DWORD *)*gpDispInfo <= 1u || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 )
  {
    if ( (v9 & 0x20) != 0 )
      v14 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
    else
      v14 = *((_QWORD *)a1 + 26);
    v21 = v14;
    LogicalToPhysicalDPIPoint(a2, a2, v10, &v21);
    v15 = MonitorFromPoint((unsigned __int64)*a2, 2u, 0x12u);
    v16 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v21 = v15;
    if ( *(_DWORD *)*gpDispInfo <= 1u )
      MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow((__int64)v22, v15, v16);
    else
      MonitorWorkRectForWindow = (__m128i *)GetMonitorRectForWindow((__int64)v23, v15, v16);
    v18 = *MonitorWorkRectForWindow;
    *(_QWORD *)&v24.left = MonitorWorkRectForWindow->m128i_i64[0];
    v24.bottom = v18.m128i_i32[3] - 1;
    v24.right = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - 1;
    LogicalToPhysicalDPIRect(&v24, &v24, v10, &v21);
    ++v24.right;
    ++v24.bottom;
    v13 = v24;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)a1 + 34);
  *a2 = (struct tagPOINT)v11;
  v12 = MonitorFromPoint(v11, 2u, 0x12u);
  v21 = v12;
  v13 = *(struct tagRECT *)(*(_QWORD *)(v12 + 40) + 28LL);
LABEL_14:
  *a3 = (struct tagMONITOR *)v12;
  *a4 = v13;
}
