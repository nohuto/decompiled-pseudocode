__int64 __fastcall DmmIsTargetForceable(DXGADAPTER *a1, unsigned int a2, bool *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  DMMVIDEOPRESENTTARGET *v11; // rax
  bool IsTargetForceable; // al
  unsigned int v13; // edi
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  *a3 = 0;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v15, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      if ( a4 == 5 )
        IsTargetForceable = *((_QWORD *)v11 + 14) == 0LL;
      else
        IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable(v11);
      *a3 = IsTargetForceable;
      v13 = 0;
    }
    else
    {
      if ( !*(_QWORD *)(v9 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry2(3LL, v4, *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL));
      v13 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
    return v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
