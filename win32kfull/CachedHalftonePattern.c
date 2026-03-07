__int64 __fastcall CachedHalftonePattern(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, int a6)
{
  __int128 *v6; // rdi
  __int64 result; // rax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // r8d
  int v14; // ecx
  int v15; // eax
  char *v16; // rax
  unsigned __int64 v17; // r9
  unsigned int v18; // r10d
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // [rsp+32h] [rbp-1Fh]
  __int128 v26; // [rsp+48h] [rbp-9h]
  __int128 v27; // [rsp+58h] [rbp+7h]
  __int128 v28; // [rsp+68h] [rbp+17h]
  __int128 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+88h] [rbp+37h]

  v6 = (__int128 *)(a1 + 160);
  if ( !*(_QWORD *)(a1 + 176) && !(unsigned int)Generate_HTSC_WORD(v6) )
    return 4294967294LL;
  v11 = *v6;
  v12 = *((_QWORD *)v6 + 2);
  DWORD1(v28) = *(_DWORD *)(a2 + 48);
  v25 = WORD1(*((_QWORD *)v6 + 1));
  v13 = a4 % 65 + 65;
  if ( a4 % 65 >= 0 )
    v13 = a4 % 65;
  v14 = a5 % 65;
  v15 = v14 + 65;
  if ( v14 >= 0 )
    v15 = a5 % 65;
  *((_QWORD *)&v28 + 1) = (char *)&RGB555Pat + v13 + (__int64)(66 * v15);
  if ( a6 )
  {
    LODWORD(v30) = -66;
    *(_QWORD *)&v29 = (char *)&RGB555Pat + v13 - 66;
    v16 = (char *)(v29 + 4290);
  }
  else
  {
    LODWORD(v30) = 66;
    *(_QWORD *)&v29 = (char *)&RGB555Pat + v13 + 4290;
    v16 = (char *)&RGB555Pat + v13;
  }
  *((_QWORD *)&v29 + 1) = v16;
  v17 = WORD3(v11);
  v18 = 6 * WORD4(v11);
  v19 = a4 % (int)WORD3(v11);
  v20 = a5 % (int)WORD5(v11);
  v21 = v19 + WORD3(v11);
  v22 = v18 * WORD5(v11);
  if ( v19 >= 0 )
    v21 = a4 % (int)WORD3(v11);
  v23 = 6 * v21;
  v24 = v20 + v25;
  if ( v20 >= 0 )
    v24 = a5 % (int)WORD5(v11);
  *(_QWORD *)&v26 = v12 + v23 + (__int64)(int)(v18 * v24);
  if ( a6 )
  {
    *((_QWORD *)&v26 + 1) = v23 - (unsigned __int64)v18 + v12;
    *(_QWORD *)&v27 = v22 + *((_QWORD *)&v26 + 1);
    v18 = -6 * WORD4(v11);
  }
  else
  {
    *((_QWORD *)&v26 + 1) = v12 + v22 + (__int64)v23;
    *(_QWORD *)&v27 = v12 + v23;
  }
  result = (unsigned int)v22;
  *(_OWORD *)a3 = v26;
  DWORD2(v27) = v18;
  HIDWORD(v27) = -(-6 * v17 + v23);
  *(_OWORD *)(a3 + 16) = v27;
  LODWORD(v28) = -6 * v17;
  *(_OWORD *)(a3 + 32) = v28;
  *(_OWORD *)(a3 + 48) = v29;
  HIDWORD(v30) = 64 - v13;
  *(_QWORD *)(a3 + 64) = v30;
  return result;
}
