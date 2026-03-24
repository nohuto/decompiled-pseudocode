/*
 * XREFs of GetNewMonitor @ 0x1C006BF5C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00707F8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1368 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     GetMonitorTransform @ 0x1C0042784 (GetMonitorTransform.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006C184 (GetInheritedMonitor.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E41E0 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E431C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformRectAroundPoint @ 0x1C01E5F04 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C021757C (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, struct tagRECT *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 InheritedMonitor; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  BOOL v13; // r11d
  int v14; // r15d
  int v15; // r8d
  int v16; // edx
  BOOL v17; // r10d
  __m128i v18; // xmm6
  struct tagRECT *v19; // r15
  struct tagMONITOR *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  struct tagRECT v25; // xmm0
  int v26; // r9d
  __int64 v27; // r10
  int v28; // [rsp+28h] [rbp-89h]
  struct tagRECT v29; // [rsp+38h] [rbp-79h] BYREF
  BOOL v30; // [rsp+48h] [rbp-69h]
  struct tagRECT v31; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v32[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v33; // [rsp+A8h] [rbp-9h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  *(_QWORD *)&v31.left = a3;
  InheritedMonitor = 0LL;
  v7 = ValidateHmonitorNoRip(*(_QWORD *)(v3 + 256));
  v8 = *((_QWORD *)a1 + 5);
  v9 = 1;
  v10 = v7;
  v11 = *((_QWORD *)a1 + 2);
  v29 = 0LL;
  v12 = *(_QWORD *)(v11 + 672);
  v13 = (*(_BYTE *)(v8 + 233) & 3) != 0 || (*(_BYTE *)(v8 + 31) & 1) != 0 || (*(_BYTE *)(v8 + 20) & 0x40) != 0;
  if ( v12 && *(struct tagWND **)(v12 + 16) == a1 )
  {
    v14 = 1;
    if ( *(int *)(v12 + 196) >= 0 )
    {
      v15 = 1;
      goto LABEL_45;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = 0;
  if ( !v14 )
  {
LABEL_8:
    v16 = 0;
    goto LABEL_9;
  }
LABEL_45:
  if ( *(int *)(v12 + 196) >= 0 )
    goto LABEL_8;
  v16 = 1;
LABEL_9:
  v17 = v15 && (*(_DWORD *)(v12 + 196) & 8) != 0 && v13;
  v18 = *(__m128i *)(v8 + 88);
  v33 = (struct tagRECT)v18;
  if ( a2 )
  {
    if ( !v15 )
      goto LABEL_38;
    v23 = *(_QWORD *)(v12 + 24) - *(_QWORD *)(v8 + 88);
    if ( !v23 )
      v23 = *(_QWORD *)(v12 + 32) - *(_QWORD *)(v8 + 96);
    if ( v23 )
    {
LABEL_38:
      v18 = *(__m128i *)a2;
      v33 = *a2;
    }
  }
  if ( v17 || !v15 || (unsigned int)(*(_DWORD *)(v12 + 176) - 9) > 1 )
    v9 = 0;
  v30 = !v15 && !v13;
  if ( v14 && (v15 || a2) )
  {
    v24 = *(_QWORD *)(v12 + 24) - v18.m128i_i64[0];
    if ( !v24 )
      v24 = *(_QWORD *)(v12 + 32) - _mm_srli_si128(v18, 8).m128i_u64[0];
    if ( v24 )
    {
      *(_DWORD *)(v12 + 196) |= 0x20000000u;
    }
    else
    {
      InheritedMonitor = *(_QWORD *)(v12 + 208);
      v16 = (*(_DWORD *)(v12 + 196) >> 3) & 1;
    }
  }
  if ( v16 )
  {
    v25 = *(struct tagRECT *)(v12 + 24);
    v29 = v25;
    if ( a2 )
      *a2 = v25;
  }
  v19 = *(struct tagRECT **)&v31.left;
  if ( *(_QWORD *)&v31.left )
    *(__m128i *)*(_QWORD *)&v31.left = v18;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v21 = _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v21;
      if ( !v21 )
        goto LABEL_34;
      if ( v10 && v21 != (struct tagMONITOR *)v10 && v9 )
      {
        v31 = (struct tagRECT)v18;
        memset(v32, 0, sizeof(v32));
        if ( (unsigned int)GetMonitorTransform(v10, (__int64)a1, (__int64)v32) )
        {
          TransformVector((unsigned int)v32, (unsigned int)&v31, (unsigned int)&v31.top, 0, 0);
          TransformVector((unsigned int)v32, (unsigned int)&v31.right, (unsigned int)&v31.bottom, v26, v26 & v28);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v12,
          &v31,
          *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL),
          a2,
          &v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
        if ( !(unsigned int)IsNewMonitorRectMostOccupied(
                              &v29,
                              (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                              (const struct tagRECT *)(*(_QWORD *)(v10 + 40) + 28LL)) )
        {
          InheritedMonitor = 0LL;
          v29 = (struct tagRECT)v18;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_34:
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v22 = MonitorFromRect(&v33, 2u, 0);
          v18 = (__m128i)v33;
        }
        else
        {
          v22 = (__int64)_MonitorFromWindowInternal(a1, 2, 1);
        }
        InheritedMonitor = v22;
      }
    }
  }
  if ( v19
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0
    && v10
    && v10 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( IsRectEmptyInl(&v29) )
    {
      if ( v9 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v12,
          &v33,
          *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL),
          a2,
          &v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
      }
      else if ( v30 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v33,
          *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL),
          (_DWORD)a2,
          (unsigned int)&v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL),
          *(_QWORD *)(v27 + 88));
      }
      if ( !IsRectEmptyInl(&v29)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v29,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v10 + 40) + 28LL)) )
      {
        InheritedMonitor = v10;
        v29 = (struct tagRECT)v18;
      }
    }
    if ( !IsRectEmptyInl(&v29) )
      *v19 = v29;
  }
  return InheritedMonitor;
}
