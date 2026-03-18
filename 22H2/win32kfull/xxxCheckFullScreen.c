/*
 * XREFs of xxxCheckFullScreen @ 0x1C009687C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0096CD4 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxAddFullScreen @ 0x1C0096D10 (xxxAddFullScreen.c)
 *     xxxSetTrayWindow @ 0x1C0096ECC (xxxSetTrayWindow.c)
 *     RECTFromSIZERECT @ 0x1C009C78C (RECTFromSIZERECT.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     xxxRemoveFullScreen @ 0x1C00EA564 (xxxRemoveFullScreen.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C00EC0BC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C0157A74 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  struct tagSIZERECT *v2; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm7
  int v14; // eax
  __int32 v15; // esi
  __int32 v16; // edi
  _QWORD *v17; // rbx
  __m128i v19; // xmm6
  INT v20; // ebx
  INT v21; // r15d
  INT v22; // eax
  INT v23; // r8d
  INT v24; // ebx
  INT v25; // edi
  INT v26; // esi
  INT v27; // r14d
  int v28; // eax
  int v29; // edi
  int v30; // ebx
  INT v31; // eax
  INT v32; // eax
  struct tagRECT v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // eax
  int WindowBordersWithDpiAwareness; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  int v43; // [rsp+28h] [rbp-79h]
  struct tagRECT v44; // [rsp+30h] [rbp-71h] BYREF
  INT a[4]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v46; // [rsp+50h] [rbp-51h]
  __int64 v47; // [rsp+58h] [rbp-49h]
  struct tagSIZERECT *v48; // [rsp+60h] [rbp-41h]
  __int128 v49; // [rsp+68h] [rbp-39h] BYREF
  __int64 v50; // [rsp+78h] [rbp-29h]
  __m128i v51; // [rsp+88h] [rbp-19h] BYREF

  v48 = a2;
  v2 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)(GetDispInfo(a1) + 96);
  *(_QWORD *)&v44.left = v5;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v6 = v5;
LABEL_3:
    v47 = v6;
    ThreadLockAlways(v6, &v49);
    v8 = *((_QWORD *)a1 + 2);
    v9 = 18;
    v10 = *(_QWORD *)(v8 + 456);
    if ( v10 )
    {
      v8 = **(_QWORD **)(v10 + 8);
      if ( (*(_DWORD *)(v8 + 64) & 1) != 0 )
        v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    }
    v11 = v9 >> 8;
    LOWORD(v11) = v11 & 0x1FF;
    v12 = *(_QWORD *)(v6 + 40);
    v13 = *(__m128i *)(v12 + 44);
    v51 = v13;
    if ( (_WORD)v11 )
    {
      v20 = *(unsigned __int16 *)(v12 + 62);
      v21 = (unsigned __int16)v11;
      *(_OWORD *)a = *(_OWORD *)(v12 + 28);
      v19 = *(__m128i *)a;
      v22 = EngMulDiv(a[0], (unsigned __int16)v11, v20);
      v23 = v20;
      v24 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
      v25 = v22;
      v26 = EngMulDiv(v24, v21, v23);
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 60LL);
      v28 = v25 + EngMulDiv(_mm_cvtsi128_si32(v13) - a[0], v21, v27);
      v29 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
      v51.m128i_i32[0] = v28;
      v30 = EngMulDiv(v29 - v24, v21, v27) + v26;
      v51.m128i_i32[1] = v30;
      v31 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) - _mm_cvtsi128_si32(v13), v21, v27);
      v15 = v51.m128i_i32[0] + v31;
      v51.m128i_i32[2] = v51.m128i_i32[0] + v31;
      v32 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v13, 12)) - v29, v21, v27);
      v6 = v47;
      v14 = v30 + v32;
      v2 = v48;
      v5 = *(_QWORD *)&v44.left;
      v51.m128i_i32[3] = v14;
    }
    else
    {
      v14 = v51.m128i_i32[3];
      v15 = v51.m128i_i32[2];
    }
    v16 = v51.m128i_i32[0];
    v43 = v14;
    if ( *(_DWORD *)v2 > v51.m128i_i32[0]
      || (v8 = HIDWORD(v51.m128i_i64[0]), *((_DWORD *)v2 + 1) > v51.m128i_i32[1])
      || *((_DWORD *)v2 + 2) < v15 - v51.m128i_i32[0]
      || *((_DWORD *)v2 + 3) < v51.m128i_i32[3] - v51.m128i_i32[1] )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v17 = (_QWORD *)*((_QWORD *)a1 + 3);
      if ( v17 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
          v8 = gpsi;
          if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
          {
            v8 = **(_QWORD **)(gptiCurrent + 464LL);
            v11 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(v8 + 16));
            if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(v8 + 16)) & 0x800) != 0 || *(_QWORD *)(v17[1] + 192LL) )
            {
              SetOrClrWF(0LL, a1, 1088LL, 1LL);
              v8 = gpDispInfo;
              v11 = *(unsigned __int16 *)(gpDispInfo + 160LL);
              *(_WORD *)(gpDispInfo + 160LL) = v11 - 1;
              if ( !(_WORD)v11 )
              {
                v46 = 0LL;
                *(_OWORD *)a = 0LL;
                PushW32ThreadLock((__int64)v17, a, UserDereferenceObject);
                ObfReferenceObject(v17);
                xxxSetTrayWindow(v17, 1LL);
                PopAndFreeW32ThreadLock((__int64)a);
                v4 = 1;
              }
            }
          }
        }
      }
      goto LABEL_15;
    }
    v33 = *(struct tagRECT *)GetMonitorRectForWindow(a, v6, a1);
    v34 = *((_QWORD *)a1 + 5);
    v44 = v33;
    if ( (*(_BYTE *)(v34 + 31) & 1) != 0 )
      SetOrClrWF(1LL, a1, 832LL, 1LL);
    v35 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v35 + 31) & 1) != 0 && (((*(_BYTE *)(v35 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v35 + 30)) != 0 )
    {
      v36 = *(_DWORD *)(v35 + 288) & 0xF;
      if ( v36 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v35 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v35 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v36
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
      LODWORD(v11) = *(_DWORD *)v2;
      if ( *(_DWORD *)v2 + DpiDependentMetric > v44.right
        || (LODWORD(v11) = *((_DWORD *)v2 + 2) + v11, (int)v11 < v44.right)
        || (v8 = *((unsigned int *)v2 + 1), (int)v8 + DpiDependentMetric > v44.top)
        || (v11 = (unsigned int)(v8 + *((_DWORD *)v2 + 3)), (int)v11 < v44.bottom) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
          v4 = xxxRemoveFullScreen(a1);
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v11, 0, 0);
        *(_DWORD *)v2 = v16 - WindowBordersWithDpiAwareness;
        v8 = (unsigned int)(v51.m128i_i32[1] - WindowBordersWithDpiAwareness);
        WindowBordersWithDpiAwareness *= 2;
        v11 = (unsigned int)(v43 + WindowBordersWithDpiAwareness - v51.m128i_i32[1]);
        *((_DWORD *)v2 + 1) = v8;
        *((_DWORD *)v2 + 2) = v15 + WindowBordersWithDpiAwareness - v16;
        if ( v6 == v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v42 = *((_DWORD *)v2 + 3);
          if ( (int)v11 < v42 )
            v42 = v11;
          *((_DWORD *)v2 + 3) = v42;
        }
        else
        {
          *((_DWORD *)v2 + 3) = v11;
        }
        goto LABEL_15;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
        goto LABEL_22;
    }
    else if ( (unsigned int)IsMaxedRect(&v44, v2) )
    {
LABEL_22:
      v4 = xxxAddFullScreen(a1);
    }
LABEL_15:
    ThreadUnlock1(v8, v11, v7);
    return v4;
  }
  *(_OWORD *)a = *(_OWORD *)GetScreenRectForWindow(a, a1);
  if ( !(unsigned int)IsMaxedRect((struct tagRECT *)a, v2) )
  {
    RECTFromSIZERECT(&v51, v40);
    v6 = MonitorFromRect(&v51, 1LL);
    goto LABEL_3;
  }
  return 0LL;
}
