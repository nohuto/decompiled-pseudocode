/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C7590
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02DB25C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02DB3BC (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
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
  __int64 v23; // rax
  __int128 v24; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+90h] [rbp+40h]
  int v28; // [rsp+98h] [rbp+48h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v26 = 0LL;
  v5 = a3;
  v6 = a2 * *((_DWORD *)a1 + 4);
  v24 = 0LL;
  v27 = v3;
  v25 = 0LL;
  v8 = *(_QWORD *)a1 + v6;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + v10 * *((_DWORD *)a1 + 5);
  *((_QWORD *)&v24 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 12);
      v13 = (v12 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v14 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
      v15 = ((_BYTE)v12 * *(_BYTE *)v3) & 3;
      v28 = ((_BYTE)v12 * *(_BYTE *)(v3 + 4)) & 3;
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
        LODWORD(v25) = v21;
        *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~(v19 & v18) | v19 & v18 & *(_DWORD *)(v21 + v11);
      }
      else
      {
        if ( (_DWORD)v15 )
        {
          LODWORD(v25) = v21;
          *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & ~v18 | v18 & ~*(_DWORD *)(v21 + v11);
          LODWORD(v16) = v16 + 4;
          v21 += 4;
        }
        DWORD2(v25) = (unsigned int)(v13 - v16) >> 2;
        if ( (unsigned int)(v13 - v16) >= 4 )
        {
          v22 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v24 = v8 + (unsigned int)v16;
          v21 %= v22;
          *(_QWORD *)&v25 = __PAIR64__(v22, v21);
          HIDWORD(v25) = v22;
          if ( (((unsigned __int8)v21 | (unsigned __int8)v22) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v24);
          }
          else
          {
            HIDWORD(v25) = v22 >> 2;
            vFetchNotAndCopy(&v24);
          }
          v3 = v27;
          v11 = *((_QWORD *)&v24 + 1);
        }
        if ( v28 )
        {
          LODWORD(v25) = ((int)v21 + 4 * (unsigned __int64)DWORD2(v25)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v13 + v8) = *(_DWORD *)(v13 + v8) & ~v19 | v19 & ~*(_DWORD *)((unsigned int)v25 + v11);
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
      v23 = *((int *)a1 + 4);
      v3 += 8LL;
      *((_QWORD *)&v24 + 1) = v11;
      v8 += v23;
      v27 = v3;
      --v5;
    }
    while ( v5 );
  }
}
