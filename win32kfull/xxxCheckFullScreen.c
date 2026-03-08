/*
 * XREFs of xxxCheckFullScreen @ 0x1C0033340
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxRemoveFullScreen @ 0x1C0033708 (xxxRemoveFullScreen.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C003FCD8 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     RECTFromSIZERECT @ 0x1C00D21BC (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C00E6AF8 (xxxAddFullScreen.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C00EA298 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C014AD54 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  __int64 v10; // rax
  __m128i v11; // xmm7
  int v12; // eax
  __int32 v13; // esi
  __int32 v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v20; // xmm6
  INT v21; // ebx
  INT v22; // r15d
  INT v23; // eax
  INT v24; // r8d
  INT v25; // ebx
  INT v26; // edi
  INT v27; // esi
  INT v28; // r14d
  int v29; // eax
  int v30; // edi
  int v31; // ebx
  INT v32; // eax
  INT v33; // eax
  struct tagRECT v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // eax
  int WindowBordersWithDpiAwareness; // eax
  __int64 v41; // rax
  int v42; // eax
  int v43; // [rsp+28h] [rbp-69h]
  struct tagRECT v44; // [rsp+30h] [rbp-61h] BYREF
  INT a[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v46; // [rsp+50h] [rbp-41h]
  __int128 v47; // [rsp+58h] [rbp-39h] BYREF
  __int64 v48; // [rsp+68h] [rbp-29h]
  __m128i v49; // [rsp+78h] [rbp-19h] BYREF

  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)(GetDispInfo() + 96);
  *(_QWORD *)&v44.left = v5;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v6 = v5;
LABEL_3:
    v46 = v6;
    ThreadLockAlways(v6, &v47);
    v7 = 18;
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
    if ( v8 && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
      v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    v9 = (v7 >> 8) & 0x1FF;
    v10 = *(_QWORD *)(v6 + 40);
    v11 = *(__m128i *)(v10 + 44);
    v49 = v11;
    if ( v9 )
    {
      v21 = *(unsigned __int16 *)(v10 + 62);
      v22 = v9;
      *(_OWORD *)a = *(_OWORD *)(v10 + 28);
      v20 = *(__m128i *)a;
      v23 = EngMulDiv(a[0], v9, v21);
      v24 = v21;
      v25 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
      v26 = v23;
      v27 = EngMulDiv(v25, v22, v24);
      v28 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 60LL);
      v29 = v26 + EngMulDiv(_mm_cvtsi128_si32(v11) - a[0], v22, v28);
      v30 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
      v49.m128i_i32[0] = v29;
      v31 = EngMulDiv(v30 - v25, v22, v28) + v27;
      v49.m128i_i32[1] = v31;
      v32 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - _mm_cvtsi128_si32(v11), v22, v28);
      v13 = v49.m128i_i32[0] + v32;
      v49.m128i_i32[2] = v49.m128i_i32[0] + v32;
      v33 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - v30, v22, v28);
      v6 = v46;
      v12 = v31 + v33;
      v5 = *(_QWORD *)&v44.left;
      v4 = 0;
      v49.m128i_i32[3] = v12;
    }
    else
    {
      v12 = v49.m128i_i32[3];
      v13 = v49.m128i_i32[2];
    }
    v14 = v49.m128i_i32[0];
    v43 = v12;
    if ( *(_DWORD *)a2 > v49.m128i_i32[0]
      || *((_DWORD *)a2 + 1) > v49.m128i_i32[1]
      || *((_DWORD *)a2 + 2) < v13 - v49.m128i_i32[0]
      || *((_DWORD *)a2 + 3) < v49.m128i_i32[3] - v49.m128i_i32[1] )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v15 = xxxRemoveFullScreen(a1);
    }
    else
    {
      v34 = *(struct tagRECT *)GetMonitorRectForWindow(a, v6, a1);
      v35 = *((_QWORD *)a1 + 5);
      v44 = v34;
      if ( (*(_BYTE *)(v35 + 31) & 1) != 0 )
        SetOrClrWF(1LL, a1, 832LL, 1LL);
      v36 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v36 + 31) & 1) != 0 && (((*(_BYTE *)(v36 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v36 + 30)) != 0 )
      {
        v37 = *(_DWORD *)(v36 + 288) & 0xF;
        if ( v37 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v36 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        }
        else if ( !v37
               && (v41 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v41 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        LODWORD(v16) = *(_DWORD *)a2;
        if ( *(_DWORD *)a2 + DpiDependentMetric > v44.right
          || (LODWORD(v16) = *((_DWORD *)a2 + 2) + v16, (int)v16 < v44.right)
          || (v17 = *((unsigned int *)a2 + 1), (int)v17 + DpiDependentMetric > v44.top)
          || (v16 = (unsigned int)(v17 + *((_DWORD *)a2 + 3)), (int)v16 < v44.bottom) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
            v4 = xxxRemoveFullScreen(a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v16, 0, 0);
          *(_DWORD *)a2 = v14 - WindowBordersWithDpiAwareness;
          v17 = (unsigned int)(v49.m128i_i32[1] - WindowBordersWithDpiAwareness);
          WindowBordersWithDpiAwareness *= 2;
          v16 = (unsigned int)(v43 + WindowBordersWithDpiAwareness - v49.m128i_i32[1]);
          *((_DWORD *)a2 + 1) = v17;
          *((_DWORD *)a2 + 2) = v13 + WindowBordersWithDpiAwareness - v14;
          if ( v6 == v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
          {
            v42 = *((_DWORD *)a2 + 3);
            if ( (int)v16 < v42 )
              v42 = v16;
            *((_DWORD *)a2 + 3) = v42;
          }
          else
          {
            *((_DWORD *)a2 + 3) = v16;
          }
          goto LABEL_15;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
LABEL_15:
          ThreadUnlock1(v17, v16, v18);
          return v4;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(&v44, a2) )
      {
        goto LABEL_15;
      }
      v15 = xxxAddFullScreen(a1);
    }
    v4 = v15;
    goto LABEL_15;
  }
  *(_OWORD *)a = *(_OWORD *)GetScreenRectForWindow(a, a1);
  if ( !(unsigned int)IsMaxedRect((struct tagRECT *)a, a2) )
  {
    RECTFromSIZERECT(&v49);
    v6 = MonitorFromRect(&v49, 1LL);
    goto LABEL_3;
  }
  return 0LL;
}
