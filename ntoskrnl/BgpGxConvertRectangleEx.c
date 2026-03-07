__int64 __fastcall BgpGxConvertRectangleEx(int *a1, __int64 a2, _QWORD *a3, char a4)
{
  char v4; // bp
  _QWORD *v5; // r12
  unsigned int v6; // esi
  int *v7; // rdi
  int v8; // eax
  char v9; // r15
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  _BYTE *v13; // r9
  char *v14; // r10
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  __int64 v20; // r12
  int v21; // eax
  unsigned int v22; // r13d
  signed __int64 v23; // r14
  unsigned int v24; // r11d
  unsigned __int8 *v25; // rdi
  __int64 v26; // r15
  int v27; // ecx
  int v28; // eax
  char v29; // cl
  unsigned int v30; // edx
  _BYTE *v31; // rax
  int v32; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v33[4]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-50h]
  _QWORD v35[9]; // [rsp+40h] [rbp-48h] BYREF
  char v38; // [rsp+A8h] [rbp+20h]

  v33[2] = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 1;
    v38 = 1;
    if ( (unsigned int)a2 > a1[2] )
      return 3221225485LL;
    v11 = *a3;
    *(_DWORD *)v11 = *a1;
    *(_DWORD *)(v11 + 4) = a1[1];
    *(_DWORD *)(v11 + 8) = a2;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 12) = a1[3];
    *(_QWORD *)(v11 + 24) = *((_QWORD *)a1 + 3);
  }
  else
  {
    v8 = *a1;
    v35[0] = 0LL;
    v9 = 0;
    v33[1] = v8;
    v38 = 0;
    v33[0] = a1[1];
    result = BgpGxRectangleCreate(v33, a2, v35);
    if ( (int)result < 0 )
      return result;
    v11 = v35[0];
  }
  v12 = v7[2];
  v13 = *(_BYTE **)(v11 + 24);
  v14 = (char *)*((_QWORD *)v7 + 3);
  v15 = v12 >> 3;
  LODWORD(v35[0]) = v12 >> 3;
  if ( v12 != v6 )
  {
    if ( v6 == 4 )
    {
      v18 = 0;
      v34 = 0;
      if ( *(_DWORD *)v11 )
      {
        do
        {
          v19 = 0;
          if ( *(_DWORD *)(v11 + 4) )
          {
            v20 = v15;
            do
            {
              v21 = *(_DWORD *)v14;
              v22 = -1;
              v33[0] = 0;
              v23 = (char *)FourBitPalette - (char *)&v32;
              v32 = v21;
              do
              {
                v24 = 0;
                v25 = (unsigned __int8 *)&v32;
                v26 = 3LL;
                do
                {
                  v27 = v25[v23];
                  v28 = *v25++;
                  v24 += abs32(v28 - v27) + 2 * abs32(v28 - v27);
                  --v26;
                }
                while ( v26 );
                v29 = v33[0];
                if ( v24 >= v22 )
                  v29 = v4;
                v30 = v33[0] + 1;
                v23 += 4LL;
                ++v33[0];
                v4 = v29;
                if ( v24 >= v22 )
                  v24 = v22;
                v22 = v24;
              }
              while ( v30 < 0x10 );
              if ( (v19 & 1) != 0 )
                *v13++ |= v29;
              else
                *v13 = 16 * v29;
              v14 += v20;
              ++v19;
            }
            while ( v19 < *(_DWORD *)(v11 + 4) );
            v15 = v35[0];
            v18 = v34;
          }
          ++v18;
          v31 = v13 + 1;
          v34 = v18;
          if ( (v19 & 1) == 0 )
            v31 = v13;
          v13 = v31;
        }
        while ( v18 < *(_DWORD *)v11 );
        v7 = a1;
        v9 = v38;
      }
      v5 = a3;
    }
    else
    {
      v16 = *(_DWORD *)v11 * *(_DWORD *)(v11 + 4);
      if ( v16 )
      {
        v17 = v16;
        do
        {
          v13[2] = v14[2];
          v13[1] = v14[1];
          *v13 = *v14;
          if ( v6 == 32 )
            v13[3] = 0;
          v14 += v15;
          v13 += v6 >> 3;
          --v17;
        }
        while ( v17 );
      }
    }
    if ( v9 )
      v7[4] |= 0x10u;
    goto LABEL_7;
  }
  if ( !v9 )
  {
    memmove(v13, v14, (unsigned int)v7[3]);
LABEL_7:
    *v5 = v11;
  }
  return 0LL;
}
