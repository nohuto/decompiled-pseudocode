__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v8; // rax
  VIDPN_MGR *v9; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v11; // rbp
  unsigned __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v20; // rdi
  int v22; // eax
  int updated; // eax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v26; // [rsp+58h] [rbp-40h]
  __int64 v27; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+8h] BYREF
  int v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v4 = 0;
  v5 = a3;
  v6 = a2;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v27, *(_QWORD *)(v8 + 104));
    v25 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v25, (__int64)ClientCommittedVidPnRef);
    if ( v25 )
    {
      v11 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      v12 = 0LL;
      v26 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      while ( 1 )
      {
        v28 = -1;
        v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, v6, v12, &v28);
        v18 = v13;
        if ( v13 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
          v24[3] = v12;
          v24[4] = v6;
          v24[5] = v11;
          v24[6] = v18;
          goto LABEL_37;
        }
        if ( v28 == -1 )
          goto LABEL_17;
        Path = DMMVIDPNTOPOLOGY::FindPath(v11, v6, v28);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        v20 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v20 )
          WdLogSingleEntry0(1LL);
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_16;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v20 + 108)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_16;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          WdLogSingleEntry0(3LL);
          goto LABEL_35;
        }
        v22 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        LODWORD(v18) = v22;
        if ( v22 == -1071774970 )
        {
          WdLogSingleEntry4(7LL, v5, v6, v28, a1);
LABEL_35:
          LODWORD(v18) = -1071774970;
          goto LABEL_37;
        }
        if ( v22 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v6, v28, v22);
          goto LABEL_37;
        }
        *((_DWORD *)Path + 44) = v29;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v18) = updated;
        if ( updated < 0 )
          goto LABEL_37;
LABEL_16:
        v11 = v26;
        ++v12;
      }
    }
    WdLogSingleEntry1(2LL, a1);
    LODWORD(v18) = -1071774884;
LABEL_37:
    v4 = v18;
LABEL_17:
    auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
