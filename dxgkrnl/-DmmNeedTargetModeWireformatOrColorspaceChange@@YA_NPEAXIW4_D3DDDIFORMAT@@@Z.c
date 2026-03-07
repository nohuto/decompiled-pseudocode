char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(_QWORD *a1, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  VIDPN_MGR *v7; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v9; // rdi
  int NumPathsFromSource; // eax
  __int64 v11; // r12
  char v12; // r14
  __int64 v13; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNTARGET *v15; // rcx
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  struct DMMVIDPNTARGETMODESET *v27; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304537) )
    return 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 0;
  }
  v6 = a1[365];
  if ( !v6 || (v7 = *(VIDPN_MGR **)(v6 + 104)) == 0LL )
  {
    WdLogSingleEntry1(2LL, a1);
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, (__int64)v7);
  v25 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
  auto_rc<DMMVIDPN const>::reset(&v25, (__int64)ClientCommittedVidPnRef);
  v9 = v25;
  if ( v25 )
  {
    v24 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v25 + 96), v4, &v24);
    if ( NumPathsFromSource < 0 )
    {
      v21 = v4;
      v22 = v9 + 96;
LABEL_38:
      v23 = NumPathsFromSource;
LABEL_39:
      WdLogSingleEntry3(2LL, v21, v22, v23);
      goto LABEL_27;
    }
    v11 = 0LL;
    if ( v24 )
    {
      v12 = 1;
      while ( 1 )
      {
        LODWORD(v27) = -1;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                               (DMMVIDPNTOPOLOGY *)(v9 + 96),
                               (char *)(unsigned int)v4,
                               v11,
                               (unsigned int *)&v27);
        if ( NumPathsFromSource < 0 )
          break;
        v13 = (unsigned int)v27;
        if ( (_DWORD)v27 == -1 )
          WdLogSingleEntry0(1LL);
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v9 + 96), v4, v13);
        if ( !Path )
        {
          v23 = v13;
          v22 = v4;
          v21 = v9;
          goto LABEL_39;
        }
        v15 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12);
        if ( !v15 )
        {
          WdLogSingleEntry1(2LL, Path);
          goto LABEL_27;
        }
        v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v15);
        v27 = v16;
        if ( !*((_QWORD *)v16 + 18) )
          WdLogSingleEntry0(1LL);
        v17 = *((_QWORD *)v16 + 18);
        v18 = *(_DWORD *)(v17 + 132);
        v19 = *(_DWORD *)(v17 + 136);
        if ( a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F || v19 == 12 || v19 == 32 || v19 == 30 )
        {
LABEL_24:
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v27, 0LL);
          goto LABEL_25;
        }
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          if ( (((unsigned __int8)(v18 >> 2) | (unsigned __int8)(BYTE1(v18) | (v18 >> 14) | (v18 >> 20))) & 0xC) == 0 )
            goto LABEL_24;
        }
        else if ( (((unsigned __int8)(v18 >> 2) | (unsigned __int8)((v18 >> 20) | (v18 >> 14) | BYTE1(v18))) & 0xC) != 0 )
        {
          goto LABEL_24;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v27, 0LL);
        if ( ++v11 >= v24 )
          goto LABEL_27;
      }
      v22 = v4;
      v21 = v11;
      goto LABEL_38;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
  }
LABEL_27:
  v12 = 0;
LABEL_25:
  auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
  return v12;
}
