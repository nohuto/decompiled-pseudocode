__int64 __fastcall CmpSwapHiveStorage(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD **v18; // r9
  _QWORD *v19; // r10
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r11
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rcx
  _QWORD *v31; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v32; // [rsp+28h] [rbp-8h]

  HvSwapHiveStorage();
  v4 = (_QWORD *)(a2 + 1544);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1792);
  v9 = 64LL;
  *(_DWORD *)(a1 + 1792) = *(_DWORD *)(a2 + 1792);
  v10 = a2 - a1;
  *(_DWORD *)(a2 + 1792) = v8;
  v11 = *(_QWORD *)(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = *(_QWORD *)(a2 + 1808);
  v12 = *(_QWORD *)(a2 + 1816);
  *(_QWORD *)(a2 + 1808) = v11;
  v13 = *(_QWORD *)(a1 + 1816);
  *(_QWORD *)(a1 + 1816) = v12;
  *(_QWORD *)(a2 + 1816) = v13;
  LODWORD(v12) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(a1 + 1872) = *(_DWORD *)(a2 + 1872);
  LODWORD(v13) = *(_DWORD *)(a2 + 1876);
  *(_DWORD *)(a2 + 1872) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(a1 + 1876) = v13;
  LODWORD(v13) = *(_DWORD *)(a2 + 1880);
  *(_DWORD *)(a2 + 1876) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(a1 + 1880) = v13;
  v14 = *(_QWORD *)(a2 + 1888);
  *(_DWORD *)(a2 + 1880) = v12;
  v15 = *(_QWORD *)(a1 + 1888);
  *(_QWORD *)(a1 + 1888) = v14;
  *(_QWORD *)(a2 + 1888) = v15;
  v16 = (_QWORD *)(a1 + 1896);
  do
  {
    v17 = (_QWORD *)*v16;
    v18 = (_QWORD **)((char *)v16 + v10 + 8);
    v19 = &v31;
    v32 = &v31;
    v20 = &v31;
    v31 = &v31;
    if ( v17 != v16 )
    {
      v32 = *(_QWORD **)((char *)v18 + v5);
      v21 = v32;
      v31 = v17;
      v17[1] = &v31;
      *v21 = &v31;
      v19 = v32;
      v20 = v31;
      *(_QWORD **)((char *)v18 + v5) = v16;
      *v16 = v16;
    }
    v22 = (_QWORD *)((char *)v16 + v10);
    v23 = *(_QWORD **)((char *)v16 + v10);
    if ( v23 != (_QWORD *)((char *)v16 + v10) )
    {
      v24 = *v18;
      *v16 = v23;
      *(_QWORD **)((char *)v18 + v5) = v24;
      v23[1] = v16;
      *v24 = v16;
      v19 = v32;
      v20 = v31;
      *v18 = v22;
      *v22 = v22;
    }
    if ( v20 != &v31 )
    {
      *v22 = v20;
      *v18 = v19;
      v20[1] = v22;
      *v19 = v22;
    }
    v16 += 2;
    --v9;
  }
  while ( v9 );
  v25 = *(_QWORD *)(a1 + 4136);
  *(_QWORD *)(a1 + 4136) = *(_QWORD *)(a2 + 4136);
  v26 = *(_QWORD *)(a2 + 4144);
  *(_QWORD *)(a2 + 4136) = v25;
  v27 = *(_QWORD *)(a1 + 4144);
  *(_QWORD *)(a1 + 4144) = v26;
  *(_QWORD *)(a2 + 4144) = v27;
  v28 = *(_QWORD *)(a1 + 4184);
  *(_QWORD *)(a1 + 4184) = *(_QWORD *)(a2 + 4184);
  *(_QWORD *)(a2 + 4184) = v28;
  LODWORD(v27) = *(_DWORD *)(a1 + 4224);
  *(_DWORD *)(a1 + 4224) = *(_DWORD *)(a2 + 4224);
  LODWORD(v28) = *(_DWORD *)(a2 + 4228);
  *(_DWORD *)(a2 + 4224) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4228);
  *(_DWORD *)(a1 + 4228) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4752);
  *(_DWORD *)(a2 + 4228) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4752);
  *(_DWORD *)(a1 + 4752) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4756);
  *(_DWORD *)(a2 + 4752) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4756);
  *(_DWORD *)(a1 + 4756) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4760);
  *(_DWORD *)(a2 + 4756) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4760);
  *(_DWORD *)(a1 + 4760) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4764);
  *(_DWORD *)(a2 + 4760) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4764);
  *(_DWORD *)(a1 + 4764) = v28;
  result = *(_QWORD *)(a2 + 4792);
  *(_DWORD *)(a2 + 4764) = v27;
  v30 = *(_QWORD *)(a1 + 4792);
  *(_QWORD *)(a1 + 4792) = result;
  *(_QWORD *)(a2 + 4792) = v30;
  return result;
}
