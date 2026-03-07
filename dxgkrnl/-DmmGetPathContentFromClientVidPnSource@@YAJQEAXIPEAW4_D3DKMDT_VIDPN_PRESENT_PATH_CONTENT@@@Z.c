__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  __int64 v8; // rsi
  VIDPN_MGR *v9; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v10; // r12d
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rbx
  DMMVIDPNTOPOLOGY *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  struct DMMVIDPNPRESENTPATH *Path; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v24; // rax
  DMMVIDPNTOPOLOGY *v25; // [rsp+50h] [rbp-48h]
  _QWORD v26[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
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
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( v9 )
  {
    v10 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v26, (__int64)v9);
    v28 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v28, (__int64)ClientCommittedVidPnRef);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
      v13 = 0LL;
      v14 = *((_QWORD *)v9 + 15);
      v15 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      v25 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      while ( 1 )
      {
        v27 = -1;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, (char *)(unsigned int)v4, v13, &v27);
        v12 = v16;
        if ( v16 < 0 )
          break;
        v21 = v27;
        if ( v27 == -1 )
          goto LABEL_20;
        Path = DMMVIDPNTOPOLOGY::FindPath(v15, v4, v27);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v14, v21);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v10 = *((_DWORD *)Path + 41);
LABEL_20:
            if ( v14 )
              ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
            auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
            *a3 = v10;
            goto LABEL_28;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v21, v14);
        }
        v15 = v25;
        ++v13;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v24[3] = v13;
      v24[4] = v4;
      v24[5] = v15;
      v24[6] = v12;
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      LODWORD(v12) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    v3 = v12;
LABEL_28:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26[0] + 40LL));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
