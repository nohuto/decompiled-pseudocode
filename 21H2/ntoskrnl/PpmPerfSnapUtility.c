/*
 * XREFs of PpmPerfSnapUtility @ 0x14056EAEC
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1402CF960 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // r15d
  char *v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 136) - *(_QWORD *)(v1 + 40);
    v4 = v3;
    v5 = *(_QWORD *)(v1 + 176) - *(_QWORD *)(v1 + 80);
    v6 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 32);
    if ( !v3 )
      v4 = 1LL;
    v7 = (*(_QWORD *)(v1 + 160) - *(_QWORD *)(v1 + 64)) / v4;
    v8 = *(_QWORD *)(v1 + 176) - *(_QWORD *)(v1 + 80);
    v9 = v7;
    if ( !v5 )
      v8 = 1LL;
    v10 = (unsigned __int8)(100LL * (*(_QWORD *)(v1 + 184) - *(_QWORD *)(v1 + 88)) / v8);
    if ( v10 > 0x64 )
      LOWORD(v10) = 100;
    if ( !(_DWORD)v7 )
    {
      v9 = 100;
      if ( v6 )
        v9 = *(_DWORD *)(v6 + 120);
    }
    v11 = (char *)(v1 + 328);
    v12 = 3LL;
    v13 = (_QWORD *)(v1 + 192);
    do
    {
      v14 = v5;
      v15 = *v13 - *(v13 - 12);
      ++v13;
      if ( !v5 )
        v14 = 1LL;
      v16 = 100 * v15 / v14;
      if ( (unsigned __int8)v16 > 0x64u )
        v16 = 100;
      *v11++ = v16;
      --v12;
    }
    while ( v12 );
    *(_WORD *)(a1 + 52) = v10;
    if ( v6 )
    {
      v17 = v3;
      if ( !v3 )
        v17 = 1LL;
      v18 = (*(_QWORD *)(v1 + 152) - *(_QWORD *)(v1 + 56)) / v17;
      if ( !(_DWORD)v18 )
        LODWORD(v18) = *(_DWORD *)(v6 + 116);
      *(_DWORD *)(v6 + 116) = v18;
      *(_DWORD *)(v6 + 120) = v9;
    }
    *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 128);
    *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 144);
    *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 160);
    *(_OWORD *)(v1 + 80) = *(_OWORD *)(v1 + 176);
    *(_OWORD *)(v1 + 96) = *(_OWORD *)(v1 + 192);
    *(_OWORD *)(v1 + 112) = *(_OWORD *)(v1 + 208);
    if ( *(_BYTE *)(a1 + 60) )
    {
      *(_QWORD *)(a1 + 96) += v3;
      *(_QWORD *)(a1 + 104) += v19;
    }
  }
}
