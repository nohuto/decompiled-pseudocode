_OWORD *__fastcall InputConfig::Mouse::GetUnionRegion(_OWORD *a1)
{
  char *v2; // rax
  __int64 v3; // rdx
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  char v18[8]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v19; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v18);
  v2 = (char *)*((_QWORD *)gpInputConfig + 3);
  if ( !v2 )
    v2 = (char *)gpInputConfig + 32;
  v3 = 5LL;
  v4 = a1;
  v5 = v2 + 24;
  do
  {
    v6 = v5[1];
    *v4 = *v5;
    v7 = v5[2];
    v4[1] = v6;
    v8 = v5[3];
    v4[2] = v7;
    v9 = v5[4];
    v4[3] = v8;
    v10 = v5[5];
    v4[4] = v9;
    v11 = v5[6];
    v4[5] = v10;
    v12 = v5[7];
    v5 += 8;
    v4[6] = v11;
    v4 += 8;
    *(v4 - 1) = v12;
    --v3;
  }
  while ( v3 );
  v13 = v5[1];
  *v4 = *v5;
  v14 = v5[2];
  v4[1] = v13;
  v15 = v5[3];
  v16 = *((_QWORD *)v5 + 8);
  v4[2] = v14;
  v4[3] = v15;
  *((_QWORD *)v4 + 8) = v16;
  ExReleaseResourceLite(*v19);
  KeLeaveCriticalRegion();
  return a1;
}
