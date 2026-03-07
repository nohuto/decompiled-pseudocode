__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r12
  __int64 v8; // rbp
  VIDPN_MGR *v9; // rbp
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v10; // edi
  char v11; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rbx
  DMMVIDPNTOPOLOGY *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbp
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v24; // rcx
  DMMVIDPNTOPOLOGY *v25; // [rsp+50h] [rbp-48h]
  _QWORD v26[8]; // [rsp+58h] [rbp-40h] BYREF
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
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
    v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    v11 = 0;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v26, (__int64)v9);
    v28 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v28, (__int64)ClientCommittedVidPnRef);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
      v14 = 0LL;
      v15 = *((_QWORD *)v9 + 15);
      v16 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      v25 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      while ( 1 )
      {
        LODWORD(Path) = -1;
        v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, (char *)(unsigned int)v4, v14, (unsigned int *)&Path);
        v13 = v17;
        if ( v17 < 0 )
          break;
        v22 = (unsigned int)Path;
        if ( (_DWORD)Path == -1 )
        {
          if ( v15 )
            ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
          auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
          if ( v11 )
            *a3 = v10;
          goto LABEL_27;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v25, v4, (int)Path);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v22);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v11 = 1;
            v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v10);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v22, v15);
        }
        v16 = v25;
        ++v14;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v24[3] = v14;
      v24[4] = v4;
      v24[5] = v25;
      v24[6] = v13;
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      LODWORD(v13) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    v3 = v13;
LABEL_27:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26[0] + 40LL));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
