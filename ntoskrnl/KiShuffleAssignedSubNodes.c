__int64 __fastcall KiShuffleAssignedSubNodes(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // r9
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int16 v9; // cx
  char v10; // si
  unsigned __int16 v11; // r10
  __int64 *v12; // r13
  __int64 v13; // rdi
  unsigned __int16 v14; // bp
  __int64 *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r12
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  unsigned __int16 i; // r9
  __int64 v26; // rdx
  unsigned __int16 j; // r9
  __int64 v28; // rdx
  unsigned __int16 k; // r9
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  __int16 v37; // [rsp+0h] [rbp-68h]
  unsigned __int16 v38; // [rsp+2h] [rbp-66h]
  unsigned int v39; // [rsp+8h] [rbp-60h]
  int v40; // [rsp+Ch] [rbp-5Ch]
  __int64 *v41; // [rsp+10h] [rbp-58h]
  __int64 *v42; // [rsp+18h] [rbp-50h]
  __int64 v43; // [rsp+28h] [rbp-40h]
  char v44; // [rsp+78h] [rbp+10h]

  v4 = KiSubNodeCount;
  v5 = 0;
  LODWORD(result) = 0;
  v7 = a3;
  v40 = 0;
  v9 = 64;
  do
  {
    v44 = 0;
    v10 = 0;
    v11 = 0;
    if ( v4 )
    {
      v12 = a1;
      v42 = a1;
      while ( 1 )
      {
        v13 = *v12;
        v43 = *v12;
        if ( (*(_BYTE *)(*v12 + 5) & 1) == 0 )
          goto LABEL_47;
        v37 = 64;
        v14 = 0;
        v39 = 0;
        v15 = a1;
        v38 = 0;
        v41 = a1;
        do
        {
          v16 = *v15;
          if ( (*(_BYTE *)(*v15 + 5) & 1) != 0 && v11 != v14 )
          {
            v17 = *(unsigned __int16 *)(v13 + 6);
            v18 = *(unsigned __int16 *)(v16 + 6);
            if ( (_WORD)v17 != (_WORD)v18 )
            {
              v19 = *(unsigned __int8 *)(v16 + 4);
              v20 = *(unsigned __int8 *)(v13 + 4);
              v21 = v20 - v19;
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v21 = *(unsigned __int8 *)(v16 + 4) - v20;
              v22 = *(_WORD *)(v16 + 6);
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v22 = *(_WORD *)(v13 + 6);
              if ( *(_DWORD *)(v7 + 4LL * v22) >= v21 )
              {
                v23 = 0;
                do
                {
                  if ( v5 != v11 )
                  {
                    v24 = a1[v5];
                    if ( (*(_BYTE *)(v24 + 5) & 1) != 0 && *(_WORD *)(v24 + 6) == (_WORD)v17 )
                      v23 = *((_DWORD *)KeNodeDistance
                            + *(unsigned __int16 *)(v24 + 2)
                            + *(unsigned __int16 *)(v13 + 2) * (unsigned __int16)KeNumberNodes)
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v17)
                          + v23
                          - 1;
                  }
                  ++v5;
                }
                while ( v5 < v4 );
                for ( i = 0; i < v4; ++i )
                {
                  if ( i != v11 )
                  {
                    v26 = a1[i];
                    if ( (*(_BYTE *)(v26 + 5) & 1) != 0 && *(_WORD *)(v26 + 6) == (_WORD)v18 )
                      v23 = *((_DWORD *)KeNodeDistance
                            + *(unsigned __int16 *)(v26 + 2)
                            + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v16 + 2))
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v18)
                          + v23
                          - 1;
                  }
                }
                v13 = v43;
                for ( j = 0; j < v4; ++j )
                {
                  if ( j != v11 )
                  {
                    v28 = a1[j];
                    if ( (*(_BYTE *)(v28 + 5) & 1) != 0 && *(_WORD *)(v28 + 6) == (_WORD)v17 )
                      v23 = *((_DWORD *)KeNodeDistance
                            + *(unsigned __int16 *)(v28 + 2)
                            + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v16 + 2))
                          / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v17)
                          + v23
                          - 1;
                  }
                }
                v14 = v38;
                for ( k = 0; k < v4; ++k )
                {
                  if ( k != v11 )
                  {
                    v30 = a1[k];
                    if ( (*(_BYTE *)(v30 + 5) & 1) != 0 && *(_WORD *)(v30 + 6) == (_WORD)v18 )
                      v23 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v30 + 2)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v43 + 2))
                           / (unsigned int)*(unsigned __int16 *)(a4 + 2 * v18)
                           - 1;
                  }
                }
                v15 = v41;
                v5 = 0;
                if ( v23 && v39 < v23 )
                {
                  v9 = v38;
                  v39 = v23;
                  v7 = a3;
                  v37 = v38;
                  goto LABEL_43;
                }
                v7 = a3;
              }
              v9 = v37;
            }
          }
LABEL_43:
          ++v14;
          ++v15;
          v38 = v14;
          v41 = v15;
        }
        while ( v14 < v4 );
        v12 = v42;
        if ( v9 == 64 )
        {
          v10 = v44;
          v9 = 64;
        }
        else
        {
          v10 = 1;
          v44 = 1;
          v31 = a1[v9];
          v32 = *(unsigned __int16 *)(v13 + 6);
          v33 = *(unsigned __int16 *)(v31 + 6);
          *(_WORD *)(v13 + 6) = v33;
          *(_WORD *)(v31 + 6) = v32;
          v34 = *(_DWORD *)(v7 + 4 * v32) - *(unsigned __int8 *)(v13 + 4);
          *(_DWORD *)(v7 + 4 * v32) = v34;
          *(_DWORD *)(v7 + 4 * v32) = v34 + *(unsigned __int8 *)(v31 + 4);
          v35 = *(_DWORD *)(v7 + 4 * v33) - *(unsigned __int8 *)(v31 + 4);
          *(_DWORD *)(v7 + 4 * v33) = v35;
          v36 = v35 + *(unsigned __int8 *)(v13 + 4);
          v9 = 64;
          *(_DWORD *)(v7 + 4 * v33) = v36;
        }
LABEL_47:
        ++v12;
        ++v11;
        v42 = v12;
        v5 = 0;
        if ( v11 >= v4 )
        {
          LODWORD(result) = v40;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v40 = result;
  }
  while ( v10 && (unsigned int)result < 0xA );
  return result;
}
