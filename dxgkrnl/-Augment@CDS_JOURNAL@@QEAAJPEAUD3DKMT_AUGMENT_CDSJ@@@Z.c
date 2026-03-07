__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  _QWORD *v7; // rsi
  _OWORD *v8; // rax
  bool v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  _QWORD *v14; // rdx
  struct DXGADAPTER *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rax
  struct D3DKMT_GETPATHSMODALITY *v19[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v20[64]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD *v21; // [rsp+D0h] [rbp-30h]
  _DWORD v22[9]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v23; // [rsp+124h] [rbp+24h]
  __int128 v24; // [rsp+12Ch] [rbp+2Ch]
  __int128 v25; // [rsp+13Ch] [rbp+3Ch]
  __int64 v26; // [rsp+14Ch] [rbp+4Ch]
  int v27; // [rsp+154h] [rbp+54h]

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v20, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v20, a2, 0x40u);
  if ( (int)v5 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v5) = -1071774974;
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v7 != v7 && *(_DWORD *)this == 1 )
      {
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v20, this);
        if ( (_DWORD)v5 == -1073741266 )
        {
          WdLogSingleEntry3(3LL, this, v20, v21);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v21;
      *(_OWORD *)this = *v21;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v23 = 0LL;
        v26 = 0LL;
        v27 = 0;
        *(_OWORD *)v22 = 0LL;
        *(_OWORD *)&v22[5] = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v22, a2, v6);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v19, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v19, a2, 0xFu);
        if ( (int)v5 >= 0 )
        {
          v10 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v22, (struct CCD_TOPOLOGY *)v19, v9);
          v5 = v10;
          if ( v10 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v19),
                v13 = CCD_TOPOLOGY::Persist(v19, 1LL, v11, v12),
                v5 = v13,
                v13 < 0) )
          {
            WdLogSingleEntry3(2LL, v5, v19, v19[8]);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v22);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v19);
        goto LABEL_29;
      }
      v14 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        goto LABEL_24;
      v15 = (struct DXGADAPTER *)*((unsigned int *)a2 + 4);
      do
      {
        v16 = (__int64)v14;
        if ( *((_DWORD *)v14 + 8) == (_DWORD)v15
          && *((_DWORD *)v14 + 5) == *((_DWORD *)a2 + 1)
          && *((_DWORD *)v14 + 6) == *((_DWORD *)a2 + 2) )
        {
          break;
        }
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != v7 );
      if ( v14 == v7 )
      {
LABEL_24:
        v17 = operator new[](0x58uLL, 0x63644356u, 256LL);
        v16 = v17;
        if ( !v17 )
        {
          WdLogSingleEntry1(6LL, 88LL);
          LODWORD(v5) = -1073741801;
          goto LABEL_29;
        }
        *(_OWORD *)v17 = 0LL;
        *(_OWORD *)(v17 + 20) = 0LL;
        *(_QWORD *)(v17 + 36) = 0LL;
        *(_OWORD *)(v17 + 44) = 0LL;
        *(_OWORD *)(v17 + 60) = 0LL;
        *(_QWORD *)(v17 + 76) = 0LL;
        *(_DWORD *)(v17 + 84) = 0;
        v18 = (__int64 *)*((_QWORD *)this + 4);
        if ( (_QWORD *)*v18 != v7 )
          __fastfail(3u);
        *(_QWORD *)v16 = v7;
        *(_QWORD *)(v16 + 8) = v18;
        *v18 = v16;
        *((_QWORD *)this + 4) = v16;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v16, a2, v15);
    }
  }
LABEL_29:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v20);
  return (unsigned int)v5;
}
