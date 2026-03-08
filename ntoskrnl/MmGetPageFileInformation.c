/*
 * XREFs of MmGetPageFileInformation @ 0x140872420
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int v6; // r12d
  unsigned int *v7; // r13
  void ***v8; // rax
  void ***v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rbx
  void **v14; // r9
  unsigned int v15; // r8d
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // r11d
  int v20; // r9d
  unsigned __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v26; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+10h]
  unsigned int v30; // [rsp+B0h] [rbp+18h]
  int v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v28 = a1;
  LOBYTE(v28) = 0;
  v6 = a4 != 0 ? 40 : 32;
  v7 = a5;
  *a5 = 0;
  v8 = MiPartitionObjectToPartition((void **)0xFFFFFFFFFFFFFFFFLL, 0, &v28);
  v9 = v8;
  if ( !v8 )
    return 3221226656LL;
  v10 = *((_DWORD *)v8 + 4262);
  v24 = v10;
  *(_DWORD *)(a2 + 4) = 0;
  v11 = 0;
  v12 = 0;
  v13 = a2;
  while ( v11 < v10 )
  {
    v14 = v9[v11 + 2132];
    if ( (*((_BYTE *)v14 + 204) & 0x50) == 0 )
    {
      v13 = v29 + v12;
      v15 = v6 + v12;
      if ( v6 + v12 <= v12 || v15 > v30 )
      {
        *v7 = v15;
        v22 = -1073741820;
        goto LABEL_17;
      }
      v16 = *(_DWORD *)v14;
      v17 = *((_DWORD *)v14 + 6);
      v18 = *((_DWORD *)v14 + 8);
      v19 = *((_DWORD *)v14 + 4);
      v20 = *((_DWORD *)v14 + 2);
      *(_DWORD *)(v13 + 4) = v16;
      *(_DWORD *)(v13 + 8) = v16 - v17 - 2;
      *(_DWORD *)(v13 + 12) = v18;
      if ( v31 )
      {
        *(_DWORD *)(v13 + 32) = v19;
        *(_DWORD *)(v13 + 36) = v20;
      }
      WORD3(v27) = 0;
      v21 = *((unsigned __int16 *)v9[v11 + 2132] + 48);
      v26 = v21;
      LOWORD(v27) = *((_WORD *)v9[v11 + 2132] + 48);
      *(_DWORD *)((char *)&v27 + 2) = (unsigned __int16)(v21 + 2);
      *((_QWORD *)&v27 + 1) = v13 + v6;
      *(_OWORD *)(v13 + 16) = v27;
      LODWORD(a5) = (*(_DWORD *)((char *)&v27 + 2) + 7) & 0xFFFFFFF8;
      v12 = (_DWORD)a5 + v15;
      if ( (unsigned int)a5 + v15 <= v15 || v12 > v30 )
      {
        *v7 = v12;
        v22 = -1073741820;
        goto LABEL_17;
      }
      memmove((void *)(v13 + v6), v9[v11 + 2132][13], (unsigned int)v21);
      *(_WORD *)(*((_QWORD *)&v27 + 1) + 2 * (v26 >> 1)) = 0;
      *(_DWORD *)v13 = v6 + (_DWORD)a5;
    }
    ++v11;
    v10 = v24;
  }
  *(_DWORD *)v13 = 0;
  *v7 = v12;
  v22 = 0;
LABEL_17:
  if ( (_BYTE)v28 )
    PsDereferencePartition((__int64)v9[25]);
  return v22;
}
