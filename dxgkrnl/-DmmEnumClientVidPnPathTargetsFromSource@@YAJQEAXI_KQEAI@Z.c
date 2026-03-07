__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // rax
  struct _KTHREAD **v32; // [rsp+50h] [rbp-38h]
  __int64 v33; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v9 = a1[365];
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  v32 = (struct _KTHREAD **)(v10 + 40);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 40));
  v15 = *(_QWORD *)(v10 + 128);
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
    v16 = *(_QWORD *)(v10 + 128);
    v33 = v16;
    if ( v16 )
    {
      v17 = v16 + 96;
      v18 = -1;
      v19 = v16 + 120;
      v20 = 0LL;
      v21 = *(_QWORD *)(v16 + 120);
      if ( v21 == v16 + 120 || (v14 = v21 - 8, v12 = (_QWORD *)(v21 - 8), v21 == 8) )
      {
LABEL_21:
        v23 = v5;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v20, v19, v14) + 24) = v17;
      }
      else
      {
        do
        {
          if ( *(_DWORD *)(v12[11] + 24LL) == (_DWORD)v5 )
          {
            if ( v20 == a3 )
            {
              v18 = *(_DWORD *)(v12[12] + 24LL);
              goto LABEL_18;
            }
            ++v20;
          }
          v22 = v12[1];
          v12 = (_QWORD *)(v22 - 8);
          if ( v22 == v19 )
            v12 = 0LL;
        }
        while ( v12 );
        if ( !v14 )
          goto LABEL_21;
        v23 = v5;
        if ( v20 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdTrace(0LL, v20, v19, v14);
          v24[3] = v17;
          v24[4] = v5;
          v24[5] = a3;
LABEL_18:
          ReferenceCounted::Release((ReferenceCounted *)(v16 + 24));
          *a4 = v18;
          goto LABEL_19;
        }
        v31 = WdLogNewEntry5_WdTrace(0LL, 0LL, v19, v14);
        *(_QWORD *)(v31 + 24) = v5;
        *(_QWORD *)(v31 + 32) = v17;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v4 = -1071774919;
      v30[3] = a3;
      v30[4] = v23;
      v30[5] = v17;
      v30[6] = -1071774919LL;
      goto LABEL_23;
    }
  }
  else
  {
    v33 = 0LL;
  }
  v4 = -1071774884;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = a1;
LABEL_23:
  auto_rc<DMMVIDPN const>::reset(&v33, 0LL);
LABEL_19:
  DXGFASTMUTEX::Release(v32);
  return v4;
}
