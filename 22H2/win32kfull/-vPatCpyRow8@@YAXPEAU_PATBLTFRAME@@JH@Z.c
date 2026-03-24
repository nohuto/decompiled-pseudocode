/*
 * XREFs of ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C6DA0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C02DB1EC (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02DB2D4 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // eax
  __int64 v8; // r14
  int v9; // r9d
  int v10; // edi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  int v17; // eax
  int v18; // r8d
  int v19; // r13d
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-30h] BYREF
  __int128 v26; // [rsp+30h] [rbp-20h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+90h] [rbp+40h]
  int v29; // [rsp+98h] [rbp+48h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v27 = 0LL;
  v5 = a3;
  v6 = a2 * *((_DWORD *)a1 + 4);
  v25 = 0LL;
  v28 = v3;
  v26 = 0LL;
  v8 = *(_QWORD *)a1 + v6;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  *((_QWORD *)&v25 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 12);
      v13 = (v12 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v14 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
      v15 = ((_BYTE)v12 * *(_BYTE *)v3) & 3;
      v29 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
      v16 = (v12 * *(_DWORD *)v3) & 0xFFFFFFFC;
      v17 = v16 - *((_DWORD *)a1 + 8);
      v18 = aulLeftMask[v15];
      v19 = ~aulLeftMask[v14];
      v20 = *((_DWORD *)a1 + 10);
      if ( v17 >= 0 )
        v21 = v17 % v20;
      else
        v21 = v20 - ~v17 % v20 - 1;
      if ( (_DWORD)v16 == (_DWORD)v13 )
      {
        LODWORD(v26) = v21;
        *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~(v19 & v18) | v19 & v18 & *(_DWORD *)(v21 + v11);
      }
      else
      {
        if ( (_DWORD)v15 )
        {
          LODWORD(v26) = v21;
          *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~v18 | v18 & *(_DWORD *)(v21 + v11);
          LODWORD(v16) = v16 + 4;
          v21 += 4;
        }
        DWORD2(v26) = (unsigned int)(v13 - v16) >> 2;
        if ( (unsigned int)(v13 - v16) >= 4 )
        {
          v22 = *((_DWORD *)a1 + 10);
          v23 = v21 % v22;
          *(_QWORD *)&v26 = __PAIR64__(v22, v23);
          *(_QWORD *)&v25 = v8 + (unsigned int)v16;
          v21 %= v22;
          HIDWORD(v26) = v22;
          if ( (((unsigned __int8)v23 | (unsigned __int8)v22) & 3) != 0 )
          {
            vFetchShiftAndCopy(&v25);
          }
          else
          {
            HIDWORD(v26) = v22 >> 2;
            vFetchAndCopy(&v25, v23);
          }
          v3 = v28;
          v11 = *((_QWORD *)&v25 + 1);
        }
        if ( v29 )
        {
          LODWORD(v26) = ((int)v21 + 4 * (unsigned __int64)DWORD2(v26)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v13 + v8) = *(_DWORD *)(v13 + v8) & ~v19 | v19 & *(_DWORD *)((unsigned int)v26 + v11);
        }
      }
      if ( ++v10 == *((_DWORD *)a1 + 11) )
      {
        v11 = *((_QWORD *)a1 + 1);
        v10 = 0;
      }
      else
      {
        v11 += *((int *)a1 + 5);
      }
      v24 = *((int *)a1 + 4);
      v3 += 8LL;
      *((_QWORD *)&v25 + 1) = v11;
      v8 += v24;
      v28 = v3;
      --v5;
    }
    while ( v5 );
  }
}
