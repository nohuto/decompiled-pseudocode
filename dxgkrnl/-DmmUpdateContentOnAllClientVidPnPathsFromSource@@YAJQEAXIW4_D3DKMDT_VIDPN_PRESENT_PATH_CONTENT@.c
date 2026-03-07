__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rax
  VIDPN_MGR *v8; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v11; // rbp
  __int64 i; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  int updated; // eax
  _QWORD *v20; // rax
  _QWORD v21[7]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 2920);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v21, *(_QWORD *)(v7 + 104));
    v23 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
    auto_rc<DMMVIDPN const>::reset(&v23, (__int64)ClientCommittedVidPnRef);
    if ( v23 )
    {
      v11 = (DMMVIDPNTOPOLOGY *)(v23 + 96);
      for ( i = 0LL; ; ++i )
      {
        v22 = -1;
        v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, (char *)(unsigned int)v4, i, &v22);
        v6 = v13;
        if ( v13 < 0 )
          break;
        if ( v22 == -1 )
          goto LABEL_22;
        Path = DMMVIDPNTOPOLOGY::FindPath(v11, v4, v22);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_21;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v20[3] = i;
      v20[4] = v4;
      v20[5] = v11;
      v20[6] = v6;
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      LODWORD(v6) = -1071774884;
    }
LABEL_21:
    v3 = v6;
LABEL_22:
    auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21[0] + 40LL));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    return 3223192373LL;
  }
}
