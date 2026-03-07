__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v5; // bl
  __int64 v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // r14
  struct DMMVIDPNTARGET *NextTarget; // r14
  DMMVIDPNTARGETSET *v11; // r12
  unsigned int v12; // edx
  int NumPathsFromSource; // eax
  __int64 v14; // rax
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  unsigned __int8 v19; // r13
  unsigned __int8 v20; // cl
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  struct DMMVIDPNTARGET *v23; // rdi
  DMMVIDPNTOPOLOGY *v24; // r14
  unsigned int v25; // r12d
  int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  DMMVIDPNSOURCEMODE *v29; // rcx
  unsigned __int64 v30; // rsi
  _DWORD *v31; // rbx
  DMMVIDPNTARGET **Path; // r14
  __int64 v33; // rcx
  DMMVIDPNTOPOLOGY *v34; // [rsp+20h] [rbp-20h]
  DMMVIDPNTARGETSET *v35; // [rsp+28h] [rbp-18h]
  __int64 v36; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNTARGETMODESET *v38; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
      WdLogSingleEntry0(1LL);
    v5 = 0;
    v34 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v6 = 12LL;
    v7 = *(_QWORD **)(a1 + 304);
    v35 = (DMMVIDPNTARGETSET *)v7;
    v8 = v7 + 3;
    v9 = (_QWORD *)v7[3];
    v39 = (unsigned __int64)(v7 + 3);
    if ( v9 == v7 + 3 )
      goto LABEL_16;
    NextTarget = (struct DMMVIDPNTARGET *)(v9 - 1);
    if ( !NextTarget )
      goto LABEL_16;
    v11 = (DMMVIDPNTARGETSET *)v7;
    do
    {
      v12 = *((_DWORD *)NextTarget + 6);
      v38 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
                             (DMMVIDPNTOPOLOGY *)(a1 + 96),
                             v12,
                             (unsigned __int64 *)&v38);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
          WdLogSingleEntry0(1LL);
        ++v5;
        v14 = 1LL;
        if ( (unsigned __int64)v38 > 1 )
          v14 = (__int64)v38;
        v6 += 440 * v14 + 48;
      }
      v15 = v5;
      NextTarget = DMMVIDPNTARGETSET::GetNextTarget(v11, NextTarget);
    }
    while ( NextTarget );
    v2 = a2;
    v8 = (_QWORD *)v39;
    if ( v5 <= 1u )
LABEL_16:
      v15 = 1;
    v16 = v6 + 4LL * v15 - 4;
    v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize((_QWORD *)v2, v16);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v19 = 0;
      v20 = 1;
      **(_DWORD **)(v2 + 32) = v16;
      *(_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL) = v5;
      v21 = (_QWORD *)*v8;
      if ( v5 > 1u )
        v20 = v5;
      v22 = 4LL * v20 + 8;
      if ( v21 != v8 )
      {
        v23 = (struct DMMVIDPNTARGET *)(v21 - 1);
        if ( v23 )
        {
          v24 = v34;
          do
          {
            v25 = *((_DWORD *)v23 + 6);
            v39 = 0LL;
            v26 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v24, v25, &v39);
            if ( v26 != -1071774919 )
            {
              if ( v26 < 0 )
                WdLogSingleEntry0(1LL);
              *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v19 + 8) = v22;
              v27 = 1LL;
              if ( v39 > 1 )
                v27 = v39;
              v36 = 440 * v27 + 48 + v22;
              v28 = *(_QWORD *)(v2 + 32) + *(unsigned int *)(*(_QWORD *)(v2 + 32) + 4LL * v19 + 8);
              v38 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v23);
              v29 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v38 + 18);
              if ( v29 )
                DMMVIDPNSOURCEMODE::Serialize(v29, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v28);
              auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v38, 0LL);
              v30 = 0LL;
              *(_BYTE *)(v28 + 40) = v39;
              if ( v39 )
              {
                v31 = (_DWORD *)(v28 + 472);
                do
                {
                  LODWORD(v38) = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v34, (char *)v25, v30, (unsigned int *)&v38) < 0 )
                    WdLogSingleEntry0(1LL);
                  Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath(v34, v25, (int)v38);
                  if ( !Path )
                    WdLogSingleEntry0(1LL);
                  DMMVIDPNPRESENTPATH::Serialize(
                    (DMMVIDPNPRESENTPATH *)Path,
                    (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v31 - 106));
                  v38 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(Path[12]);
                  v33 = *((_QWORD *)v38 + 18);
                  if ( v33 )
                  {
                    *(v31 - 16) = *(_DWORD *)(v33 + 24);
                    *(_OWORD *)(v31 - 14) = *(_OWORD *)(v33 + 72);
                    *(_OWORD *)(v31 - 10) = *(_OWORD *)(v33 + 88);
                    *(_OWORD *)(v31 - 6) = *(_OWORD *)(v33 + 104);
                    *((_QWORD *)v31 - 1) = *(_QWORD *)(v33 + 120);
                    *v31 = *(_DWORD *)(v33 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v38, 0LL);
                  ++v30;
                  v31 += 110;
                }
                while ( v30 < v39 );
                v2 = a2;
                v24 = v34;
              }
              v22 = v36;
              ++v19;
            }
            v23 = DMMVIDPNTARGETSET::GetNextTarget(v35, v23);
          }
          while ( v23 );
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v16, a1, v17);
      return v18;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
