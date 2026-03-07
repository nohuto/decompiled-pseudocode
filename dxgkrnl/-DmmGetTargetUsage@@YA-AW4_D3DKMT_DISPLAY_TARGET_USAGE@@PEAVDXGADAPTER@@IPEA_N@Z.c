__int64 __fastcall DmmGetTargetUsage(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 2920) )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)(a1 + 2920);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    if ( a2 == -1 )
      WdLogSingleEntry0(1LL);
    v9 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v8, a2);
    if ( v9 )
    {
      if ( a3 )
        *a3 = *(_BYTE *)(v9 + 96);
      v10 = *(_DWORD *)(v9 + 92);
    }
    else
    {
      v10 = 0;
    }
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to get VidPnMgr on adapter 0x%I64x!",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
