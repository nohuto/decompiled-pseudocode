__int64 __fastcall DmmIsStaticAndLeafTarget(DXGADAPTER *a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  DMMVIDEOPRESENTTARGET *v11; // rax
  unsigned int v12; // edi
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    return 3221225485LL;
  }
  *a3 = 0;
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
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      *a3 = *((_QWORD *)v11 + 59) == 0LL;
      v12 = 0;
      *a4 = DMMVIDEOPRESENTTARGET::IsLeafTarget(v11);
    }
    else
    {
      if ( !*(_QWORD *)(v9 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry2(3LL, v4, *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL));
      v12 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
