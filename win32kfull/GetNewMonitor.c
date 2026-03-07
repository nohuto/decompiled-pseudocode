__int64 __fastcall GetNewMonitor(struct tagWND *a1, struct tagRECT *a2, _OWORD *a3)
{
  __int64 v3; // rax
  __int64 InheritedMonitor; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  BOOL v11; // r13d
  int v12; // r12d
  signed __int32 *v13; // r9
  int v14; // ecx
  int v15; // r8d
  BOOL v16; // r11d
  __int64 v17; // r10
  __m128i v18; // xmm6
  int v19; // r15d
  int v20; // r13d
  struct tagRECT *v21; // r12
  _OWORD *v22; // rax
  struct tagMONITOR *v24; // rax
  struct tagMONITOR *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  bool v28; // zf
  unsigned __int32 v29; // ecx
  struct tagRECT v30; // xmm0
  int v31; // r9d
  __int64 v32; // r8
  int v33; // [rsp+28h] [rbp-89h]
  struct tagRECT v35; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v36; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v37[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v38; // [rsp+A8h] [rbp-9h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  *(_QWORD *)&v36.left = a2;
  InheritedMonitor = 0LL;
  v7 = ValidateHmonitorNoRip(*(_QWORD *)(v3 + 256));
  v35 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 672LL);
  v9 = *((_DWORD *)a1 + 80);
  v11 = 1;
  if ( (v9 & 0x4000000) == 0 && (v9 & 0x8000000) == 0 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 31) & 1) == 0 && (*(_BYTE *)(v10 + 20) & 0x40) == 0 )
      v11 = 0;
  }
  if ( v8 && *(struct tagWND **)(v8 + 16) == a1 )
  {
    v13 = (signed __int32 *)(v8 + 200);
    v12 = 1;
    if ( !_bittest((const signed __int32 *)(v8 + 200), 0x1Du) )
    {
      v14 = 1;
LABEL_9:
      v15 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = 0;
    v13 = (signed __int32 *)(v8 + 200);
  }
  v14 = 0;
  if ( !v12 || !_bittest(v13, 0x1Du) )
    goto LABEL_9;
  v15 = 1;
LABEL_10:
  v16 = v14 && (*v13 & 8) != 0 && v11;
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(__m128i *)(v17 + 88);
  v38 = (struct tagRECT)v18;
  if ( a2 )
  {
    if ( !v14 )
      goto LABEL_36;
    v26 = *(_QWORD *)(v8 + 24) - *(_QWORD *)(v17 + 88);
    if ( !v26 )
      v26 = *(_QWORD *)(v8 + 32) - *(_QWORD *)(v17 + 96);
    if ( v26 )
    {
LABEL_36:
      v18 = *(__m128i *)a2;
      v38 = *a2;
    }
  }
  if ( !v16 && v14 && (unsigned int)(*(_DWORD *)(v8 + 176) - 9) <= 1 )
  {
    v19 = 1;
LABEL_38:
    v20 = 0;
    goto LABEL_18;
  }
  v19 = 0;
  if ( v14 || v11 )
    goto LABEL_38;
  v20 = 1;
LABEL_18:
  if ( v12 && (v14 || *(_QWORD *)&v36.left) )
  {
    v27 = *(_QWORD *)(v8 + 24) - v18.m128i_i64[0];
    if ( !v27 )
      v27 = *(_QWORD *)(v8 + 32) - _mm_srli_si128(v18, 8).m128i_u64[0];
    v28 = v27 == 0;
    v29 = *v13;
    if ( v28 )
    {
      InheritedMonitor = *(_QWORD *)(v8 + 208);
      v15 = (v29 >> 3) & 1;
    }
    else
    {
      *v13 = v29 | 0x8000000;
    }
  }
  v21 = *(struct tagRECT **)&v36.left;
  if ( v15 )
  {
    v30 = *(struct tagRECT *)(v8 + 24);
    v35 = v30;
    if ( *(_QWORD *)&v36.left )
      *(struct tagRECT *)*(_QWORD *)&v36.left = v30;
  }
  v22 = a3;
  if ( a3 )
    *a3 = v18;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v24 = _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v24;
      if ( v24 )
      {
        if ( !v7 || v24 == (struct tagMONITOR *)v7 || !v19 )
          goto LABEL_24;
        v36 = (struct tagRECT)v18;
        memset_0(v37, 0, sizeof(v37));
        if ( (unsigned int)GetMonitorTransform(v7, a1, (__int64)v37) )
        {
          TransformVector((unsigned int)v37, (unsigned int)&v36, (unsigned int)&v36.top, 0, 0);
          TransformVector((unsigned int)v37, (unsigned int)&v36.right, (unsigned int)&v36.bottom, v31, v31 & v33);
        }
        TransformRectAroundCursor(
          (struct MOVESIZEDATA *)v8,
          &v36,
          *(_WORD *)(*(_QWORD *)(v7 + 40) + 60LL),
          v21,
          &v35,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL));
        if ( (unsigned int)IsNewMonitorRectMostOccupied(
                             &v35,
                             (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                             (const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 28LL)) )
          goto LABEL_24;
        v35 = (struct tagRECT)v18;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
      {
        v25 = (struct tagMONITOR *)MonitorFromRect(&v38, 2LL);
        v18 = (__m128i)v38;
      }
      else
      {
        v25 = _MonitorFromWindowInternal(a1, 2u, 1);
      }
      InheritedMonitor = (__int64)v25;
    }
LABEL_24:
    v22 = a3;
  }
  if ( v22
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0
    && v7
    && v7 != InheritedMonitor
    && IsTopLevelWindow((__int64)a1) )
  {
    if ( (unsigned int)IsRectEmptyInl(&v35) )
    {
      if ( v19 )
      {
        TransformRectAroundCursor(
          (struct MOVESIZEDATA *)v8,
          &v38,
          *(_WORD *)(*(_QWORD *)(v7 + 40) + 60LL),
          v21,
          &v35,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL));
      }
      else if ( v20 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v38,
          *(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 60LL),
          (_DWORD)v21,
          (unsigned int)&v35,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL),
          *(_QWORD *)(v32 + 88));
      }
      if ( !(unsigned int)IsRectEmptyInl(&v35)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v35,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v7 + 40) + 28LL)) )
      {
        InheritedMonitor = v7;
        v35 = (struct tagRECT)v18;
      }
    }
    if ( !(unsigned int)IsRectEmptyInl(&v35) )
      *a3 = v35;
  }
  return InheritedMonitor;
}
