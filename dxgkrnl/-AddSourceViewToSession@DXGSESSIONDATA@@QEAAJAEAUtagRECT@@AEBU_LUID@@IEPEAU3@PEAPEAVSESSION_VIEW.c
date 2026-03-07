__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // r11
  struct DISPLAY_SOURCE *DisplaySource; // rax
  struct DISPLAY_SOURCE *v12; // rbx
  __int64 v13; // rcx
  char *v14; // rdi
  char *i; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  struct tagRECT v18; // xmm0
  _QWORD *v19; // rax
  char *v20; // rax
  char **v21; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  char **v29; // r8
  __int64 v30; // rbx

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  if ( !SessionAdapterFromLuid
    || (DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v10), (v12 = DisplaySource) == 0LL) )
  {
    v30 = v10;
    WdLogSingleEntry5(2LL, v10, a3->HighPart, a3->LowPart, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is not owned by session 0x%I64x (returning 0x%I64x).",
      v30,
      a3->HighPart,
      a3->LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)DisplaySource + 6);
  if ( v13 )
  {
    v23 = v10;
    if ( IsEqualRect((const struct tagRECT *)(v13 + 24), a2) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v28[3] = v23;
      v28[4] = a3->HighPart;
      v28[5] = a3->LowPart;
      v28[7] = -1071774953LL;
      v28[6] = this;
      return 3223192343LL;
    }
    WdLogSingleEntry5(2LL, v23, a3->HighPart, a3->LowPart, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x from adapter 0x%I64x%08I64x is owned by other session view in session 0x%I64x, returning 0x%I64x.",
      v23,
      a3->HighPart,
      a3->LowPart,
      (__int64)this,
      -1073741811LL);
    return 3221225485LL;
  }
  v14 = (char *)this + 18592;
  for ( i = (char *)*((_QWORD *)this + 2324); ; i = *v29 )
  {
    if ( i == v14 )
      goto LABEL_6;
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      break;
  }
  if ( v17 )
  {
LABEL_9:
    *(struct _LUID *)(v17 + 64) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v17, v12, a5);
    return 0LL;
  }
LABEL_6:
  v16 = operator new[](0x48uLL, 0x4B677844u, 256LL);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = this;
    v18 = *a2;
    *(_DWORD *)(v16 + 40) = 0;
    *(struct tagRECT *)(v16 + 24) = v18;
    v19 = (_QWORD *)(v16 + 48);
    v19[1] = v19;
    *v19 = v19;
    *(_QWORD *)(v17 + 64) = 0LL;
    v20 = (char *)(v17 + 8);
    v21 = (char **)*((_QWORD *)this + 2325);
    if ( *v21 != v14 )
      __fastfail(3u);
    *(_QWORD *)v20 = v14;
    *(_QWORD *)(v17 + 16) = v21;
    *v21 = v20;
    *((_QWORD *)this + 2325) = v20;
    goto LABEL_9;
  }
  WdLogSingleEntry5(6LL, a2->left, a2->top, a2->right, a2->bottom, this);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate session view for rect (%d, %d, %d, %d) in session 0x%I64x.",
    a2->left,
    a2->top,
    a2->right,
    a2->bottom,
    (__int64)this);
  return 3221225495LL;
}
