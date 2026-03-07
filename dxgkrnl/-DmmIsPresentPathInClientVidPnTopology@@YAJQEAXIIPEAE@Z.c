__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdi
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 365);
  if ( !v8 )
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
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    v10 = (struct _KTHREAD **)(v9 + 40);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 40));
    v11 = *(_QWORD *)(v9 + 128);
    if ( v11 && (_InterlockedIncrement((volatile signed __int32 *)(v11 + 32)), (v12 = *(_QWORD *)(v9 + 128)) != 0) )
    {
      *a4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v12 + 96), a2, a3) != 0LL;
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 24));
    }
    else
    {
      *a4 = 0;
    }
    DXGFASTMUTEX::Release(v10);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
