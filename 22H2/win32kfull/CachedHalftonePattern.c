/*
 * XREFs of CachedHalftonePattern @ 0x1C001B8A8
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C001B810 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C0262424 (CreateHalftoneBrushPat.c)
 * Callees:
 *     Generate_HTSC_WORD @ 0x1C0129E08 (Generate_HTSC_WORD.c)
 */

__int64 __fastcall CachedHalftonePattern(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, int a6)
{
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // r8d
  int v13; // ecx
  int v14; // eax
  char *v15; // rax
  unsigned __int64 v16; // r9
  unsigned int v17; // r10d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  __int64 result; // rax
  unsigned __int16 v25; // [rsp+32h] [rbp-1Fh]
  __int128 v26; // [rsp+48h] [rbp-9h]
  __int128 v27; // [rsp+58h] [rbp+7h]
  __int128 v28; // [rsp+68h] [rbp+17h]
  __int128 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+88h] [rbp+37h]

  if ( !*(_QWORD *)(a1 + 176) && !(unsigned int)Generate_HTSC_WORD(a1 + 160) )
    return 4294967294LL;
  v10 = *(_OWORD *)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 176);
  DWORD1(v28) = *(_DWORD *)(a2 + 48);
  v25 = WORD1(*(_QWORD *)(a1 + 168));
  v12 = a4 % 65 + 65;
  if ( a4 % 65 >= 0 )
    v12 = a4 % 65;
  v13 = a5 % 65;
  v14 = v13 + 65;
  if ( v13 >= 0 )
    v14 = a5 % 65;
  *((_QWORD *)&v28 + 1) = (char *)&RGB555Pat + v12 + (__int64)(66 * v14);
  if ( a6 )
  {
    LODWORD(v30) = -66;
    *(_QWORD *)&v29 = (char *)&RGB555Pat + v12 - 66;
    v15 = (char *)(v29 + 4290);
  }
  else
  {
    LODWORD(v30) = 66;
    *(_QWORD *)&v29 = (char *)&RGB555Pat + v12 + 4290;
    v15 = (char *)&RGB555Pat + v12;
  }
  *((_QWORD *)&v29 + 1) = v15;
  v16 = WORD3(v10);
  v17 = 6 * WORD4(v10);
  v18 = a4 % (int)WORD3(v10);
  v19 = a5 % (int)WORD5(v10);
  v20 = v18 + WORD3(v10);
  v21 = v17 * WORD5(v10);
  if ( v18 >= 0 )
    v20 = a4 % (int)WORD3(v10);
  v22 = 6 * v20;
  v23 = v25 + v19;
  if ( v19 >= 0 )
    v23 = a5 % (int)WORD5(v10);
  *(_QWORD *)&v26 = v11 + v22 + (__int64)(int)(v17 * v23);
  if ( a6 )
  {
    *((_QWORD *)&v26 + 1) = v22 - (unsigned __int64)v17 + v11;
    *(_QWORD *)&v27 = v21 + *((_QWORD *)&v26 + 1);
    v17 = -6 * WORD4(v10);
  }
  else
  {
    *((_QWORD *)&v26 + 1) = v11 + v21 + (__int64)v22;
    *(_QWORD *)&v27 = v11 + v22;
  }
  result = (unsigned int)v21;
  *(_OWORD *)a3 = v26;
  DWORD2(v27) = v17;
  HIDWORD(v27) = -(-6 * v16 + v22);
  *(_OWORD *)(a3 + 16) = v27;
  LODWORD(v28) = -6 * v16;
  *(_OWORD *)(a3 + 32) = v28;
  *(_OWORD *)(a3 + 48) = v29;
  HIDWORD(v30) = 64 - v12;
  *(_QWORD *)(a3 + 64) = v30;
  return result;
}
