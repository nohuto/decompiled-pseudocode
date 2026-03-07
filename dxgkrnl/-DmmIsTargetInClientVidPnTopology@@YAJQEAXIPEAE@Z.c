__int64 __fastcall DmmIsTargetInClientVidPnTopology(_QWORD *a1, int a2, bool *a3)
{
  bool IsTargetInTopology; // bl
  __int64 v8; // rax
  VIDPN_MGR *v9; // rbp
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct DMMVIDPN *v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  IsTargetInTopology = 0;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v8 = a1[365];
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
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v8 + 104));
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    v11 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef )
      IsTargetInTopology = DMMVIDPNTOPOLOGY::IsTargetInTopology(
                             (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                             a2);
    *a3 = IsTargetInTopology;
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v11, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
