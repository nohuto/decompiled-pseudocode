__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v7; // rsi
  VIDPN_MGR *v8; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v10; // r12
  __int64 v11; // rbx
  unsigned __int64 i; // rbp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
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
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)a1 + 365);
  if ( !v7 )
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
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, (__int64)v8);
    v25 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
    auto_rc<DMMVIDPN const>::reset(&v25, (__int64)ClientCommittedVidPnRef);
    if ( v25 )
    {
      v10 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v8 + 15) + 72LL));
      v11 = *((_QWORD *)v8 + 15);
      for ( i = 0LL; ; ++i )
      {
        v24 = -1;
        v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, v4, i, &v24);
        v18 = v13;
        if ( v13 < 0 )
          break;
        v19 = v24;
        if ( v24 == -1 )
          goto LABEL_14;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, v24);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 417) )
          {
            *a3 = 1;
LABEL_14:
            if ( v11 )
              ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
            goto LABEL_16;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v19, v11);
        }
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v22[3] = i;
      v22[4] = v4;
      v22[5] = v10;
      v22[6] = v18;
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      LODWORD(v18) = -1071774884;
    }
    v3 = v18;
LABEL_16:
    auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
