char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  char v4; // r10
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  _QWORD v18[3]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  int v32; // [rsp+128h] [rbp+28h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h] BYREF

  v33 = a3;
  v32 = a2;
  v4 = 0;
  v5 = *(_OWORD *)(a3 + 280);
  v20 = *(_OWORD *)(a3 + 264);
  v6 = *(_OWORD *)(a3 + 296);
  v21 = v5;
  v7 = *(_OWORD *)(a3 + 312);
  v22 = v6;
  v8 = *(_OWORD *)(a3 + 328);
  v23 = v7;
  v9 = *(_OWORD *)(a3 + 344);
  v24 = v8;
  v10 = *(_OWORD *)(a3 + 360);
  v25 = v9;
  v26 = v10;
  v27 = *(_OWORD *)(a3 + 376);
  v11 = *(_OWORD *)(a3 + 408);
  v28 = *(_OWORD *)(a3 + 392);
  v12 = *(_OWORD *)(a3 + 424);
  v13 = *(_QWORD *)(a3 + 440);
  v29 = v11;
  v30 = v12;
  v31 = v13;
  v18[0] = &v33;
  v18[1] = &v32;
  if ( !a2 )
  {
    if ( !(a4 | ((v31 & 0x100000000LL) == 0)) && (_DWORD)v30 != 1 )
      return v4;
    v16 = DWORD2(v30);
    goto LABEL_14;
  }
  v14 = a2 - 1;
  if ( !v14 )
  {
    if ( !(a4 | ((v31 & 0x200000000LL) == 0)) && (_DWORD)v30 != 2 )
      return v4;
    v16 = HIDWORD(v30);
    goto LABEL_14;
  }
  if ( v14 == 1 )
  {
    v18[2] = 0x3F8000003F800000LL;
    v19 = 1065353216;
    v15 = *((_QWORD *)&v21 + 1) - 0x3F8000003F800000LL;
    if ( *((_QWORD *)&v21 + 1) == 0x3F8000003F800000LL )
      v15 = (unsigned int)v22 - (unsigned __int64)v19;
    if ( v15 )
    {
      v16 = v31;
LABEL_14:
      if ( lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator()((__int64)v18, v16) )
        return 1;
    }
  }
  return v4;
}
