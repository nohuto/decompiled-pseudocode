/*
 * XREFs of xxxCalcCaptionButton @ 0x1C022EAF0
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C000B72C (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C022F438 (xxxTrackCaptionButton.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0021944 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C00A4C44 (xxxMNCanClose.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, _DWORD *a4, int *a5, int a6)
{
  __int64 v10; // r8
  int v11; // ecx
  int WindowDpiLastNotify; // ebp
  __int64 v13; // rax
  int v14; // r9d
  _DWORD *v15; // r8
  __int64 v16; // rax
  int v17; // r15d
  int v18; // ebx
  int DpiDependentMetric; // r12d
  int v20; // ebx
  __int16 v21; // ax
  __int64 v22; // rax
  int *v23; // rax
  int v24; // edx
  int v25; // eax
  int v26; // r9d
  unsigned __int16 v27; // r10
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // eax
  int v32; // [rsp+68h] [rbp+10h]

  *a3 = 0;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_DWORD *)(v10 + 288) & 0xF;
  if ( v11 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v10 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v10 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( !v11
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
  }
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
    v14 = -3;
  else
    v14 = -(int)GetWindowBordersForDpi(
                  *(_DWORD *)(v10 + 28),
                  *(_DWORD *)(v10 + 24),
                  v10,
                  (__int64)a4,
                  WindowDpiLastNotify);
  v15 = *(_DWORD **)(a1 + 40);
  *a4 = v15[22] - v14;
  a4[2] = v14 + v15[24];
  a4[1] = v15[23] - v14;
  a4[3] = v14 + v15[25];
  v16 = *(_QWORD *)(a1 + 40);
  v32 = -*(_DWORD *)(v16 + 92);
  v17 = -*(_DWORD *)(v16 + 88);
  v18 = (*(char *)(v16 + 24) >> 7) & 0xB;
  DpiDependentMetric = GetDpiDependentMetric(v18 + 12, WindowDpiLastNotify);
  v20 = GetDpiDependentMetric(v18 + 13, WindowDpiLastNotify);
  if ( a2 != 5 )
  {
    v22 = *(_QWORD *)(a1 + 40);
    if ( a2 == 2 )
    {
      if ( (*(_BYTE *)(v22 + 30) & 2) == 0 && !a6 )
        goto LABEL_31;
      LOWORD(v17) = v17 + 2;
      a4[2] += -2 * DpiDependentMetric;
      v23 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
      {
        *a5 = 4;
        v21 = -4064;
        goto LABEL_23;
      }
    }
    else
    {
      if ( a2 != 3 )
      {
        if ( (*(_BYTE *)(v22 + 25) & 4) != 0 )
        {
          a4[2] -= DpiDependentMetric;
          *a5 = 11;
          *a3 = -3712;
        }
        goto LABEL_31;
      }
      if ( (*(_BYTE *)(v22 + 30) & 1) == 0 && !a6 )
        goto LABEL_31;
      a4[2] -= DpiDependentMetric;
      v23 = a5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
      {
        *a5 = 14;
        v21 = -4048;
        goto LABEL_23;
      }
    }
    *v23 = 8;
    *a3 = -3808;
    goto LABEL_32;
  }
  if ( (unsigned int)xxxMNCanClose(a1) || a6 )
  {
    *a5 = (*(char *)(*(_QWORD *)(a1 + 40) + 24LL) >> 7) & 0x29;
    v21 = -4000;
LABEL_23:
    *a3 = v21;
  }
LABEL_31:
  if ( !*a3 )
  {
    v27 = v32;
    return (unsigned __int16)v17 | (v27 << 16);
  }
LABEL_32:
  v24 = a4[1];
  v25 = a4[2] - DpiDependentMetric;
  LOWORD(v17) = v25 + v17;
  v26 = a4[2] + 1;
  v27 = v24 + v32 + 2;
  v28 = v25 - 1;
  a4[2] = v26;
  *a4 = v25 - 1;
  a4[1] = v24 - 1;
  a4[3] = v20 + v24 + 1;
  v29 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v29 + 26) & 0x40) != 0 )
  {
    v30 = *(_DWORD *)(v29 + 88) + *(_DWORD *)(v29 + 96) - v28;
    a4[2] = v30;
    *a4 = v30 + v28 - v26;
  }
  return (unsigned __int16)v17 | (v27 << 16);
}
