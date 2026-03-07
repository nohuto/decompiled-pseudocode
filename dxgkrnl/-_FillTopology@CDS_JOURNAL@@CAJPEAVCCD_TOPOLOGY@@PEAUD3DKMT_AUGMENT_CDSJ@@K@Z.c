__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v15; // eax
  unsigned __int16 v16; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v8 = 0;
  while ( 1 )
  {
    v16 = v8 + 1;
    v9 = CCD_TOPOLOGY::Reserve(this, (unsigned __int16)(v8 + 1), v6, v7);
    if ( v9 < v16 )
      break;
    if ( a3 == 15 )
    {
      v10 = CCD_TOPOLOGY::RetrievePersisted((struct D3DKMT_HASH **)this, 0xFu, &v16);
    }
    else
    {
      if ( a3 != 64 )
      {
        v11 = -1073741811;
LABEL_15:
        v13 = (int)v11;
LABEL_16:
        WdLogSingleEntry4(2LL, v13, this, *((_QWORD *)this + 8), a2);
        return v11;
      }
      v10 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v16);
    }
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -1073741789 )
        goto LABEL_15;
      v8 = v16;
    }
    else
    {
      if ( !a2 )
        return v11;
      v12 = *((_QWORD *)this + 8);
      if ( v12 && *(_WORD *)(v12 + 20) < *(_WORD *)(v12 + 22) )
      {
        if ( a3 == 64 )
        {
          v15 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
          v11 = v15;
          if ( v15 < 0 )
          {
            v13 = v15;
            goto LABEL_16;
          }
        }
        return v11;
      }
      v8 = v16 + 1;
    }
  }
  WdLogSingleEntry1(6LL, v16);
  return 3221225495LL;
}
