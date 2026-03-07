void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  unsigned int v4; // ebx
  int v5; // r15d
  int v6; // eax
  __int64 v8; // r14
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // r9
  int v12; // r11d
  int v13; // r12d
  int v14; // r11d
  char v15; // dl
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r11
  int v20; // r10d
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // esi
  __int128 v24; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+90h] [rbp+40h]
  int v28; // [rsp+98h] [rbp+48h]
  int v29; // [rsp+A0h] [rbp+50h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v26 = 0LL;
  v5 = a3;
  v6 = *((_DWORD *)a1 + 4) * a2;
  v24 = 0LL;
  v25 = 0LL;
  v8 = *(_QWORD *)a1 + v6;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v10;
  *((_QWORD *)&v24 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 12);
      v13 = v3[1] * v12;
      v14 = *v3 * v12;
      v15 = v13;
      v16 = v13 & 0xFFFFFFFC;
      v17 = v15 & 3;
      v18 = v14 & 3;
      v29 = v17;
      v19 = v14 & 0xFFFFFFFC;
      v20 = dword_1C0318450[v18];
      v21 = *((_DWORD *)a1 + 10);
      v27 = dword_1C0318450[v17];
      v28 = ~v27;
      v22 = v19 - *((_DWORD *)a1 + 8);
      if ( v22 >= 0 )
        v23 = v22 % v21;
      else
        v23 = v21 - ~v22 % v21 - 1;
      if ( (_DWORD)v19 == (_DWORD)v16 )
      {
        LODWORD(v25) = v23;
        *(_DWORD *)(v19 + v8) = *(_DWORD *)(v19 + v8) & ~(v28 & v20) | v28 & v20 & *(_DWORD *)(v23 + v11);
      }
      else
      {
        if ( (_DWORD)v18 )
        {
          LODWORD(v25) = v23;
          *(_DWORD *)(v19 + v8) = *(_DWORD *)(v19 + v8) & ~v20 | v20 & ~*(_DWORD *)(v23 + v11);
          LODWORD(v19) = v19 + 4;
          v21 = *((_DWORD *)a1 + 10);
          v23 += 4;
        }
        DWORD2(v25) = (unsigned int)(v16 - v19) >> 2;
        if ( (unsigned int)(v16 - v19) >= 4 )
        {
          HIDWORD(v25) = v21;
          *(_QWORD *)&v24 = v8 + (unsigned int)v19;
          v23 %= v21;
          *(_QWORD *)&v25 = __PAIR64__(v21, v23);
          if ( (((unsigned __int8)v23 | (unsigned __int8)v21) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v24);
          }
          else
          {
            HIDWORD(v25) = v21 >> 2;
            vFetchNotAndCopy(&v24);
          }
          v11 = *((_QWORD *)&v24 + 1);
        }
        if ( v29 )
        {
          LODWORD(v25) = ((int)v23 + 4 * (unsigned __int64)DWORD2(v25)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v16 + v8) = *(_DWORD *)(v16 + v8) & v27 | v28 & ~*(_DWORD *)((unsigned int)v25 + v11);
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
      v8 += *((int *)a1 + 4);
      *((_QWORD *)&v24 + 1) = v11;
      v3 += 2;
      --v5;
    }
    while ( v5 );
  }
}
