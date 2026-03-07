__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-19h] BYREF
  __int128 v7; // [rsp+28h] [rbp-11h]
  __int64 v8; // [rsp+38h] [rbp-1h]
  __int16 v9; // [rsp+40h] [rbp+7h]
  __int128 v10; // [rsp+48h] [rbp+Fh]
  __int64 v11; // [rsp+58h] [rbp+1Fh]
  __int64 v12; // [rsp+60h] [rbp+27h]
  bool v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int v15; // [rsp+70h] [rbp+37h]
  __int64 v16; // [rsp+74h] [rbp+3Bh]
  __int64 v17; // [rsp+80h] [rbp+47h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v13 = v3 == 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v3;
  v14 = 0;
  v15 = 1;
  v16 = 0LL;
  v17 = 0LL;
  CCD_BTL::Global();
  v4 = CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)&v6, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
  return v4;
}
