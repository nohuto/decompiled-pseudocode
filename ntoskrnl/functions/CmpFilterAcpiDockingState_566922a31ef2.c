__int64 __fastcall CmpFilterAcpiDockingState(unsigned __int16 *a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  char v7; // r11
  int v8; // r12d
  char v9; // r13
  int v10; // r10d
  __int64 v13; // rdi
  unsigned int v14; // ecx
  SIZE_T v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  int v18; // edx
  int v19; // r9d
  int v20; // ebp
  __int64 v21; // rax
  char v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // edi
  __int64 v26; // r9
  int v27; // ecx
  unsigned int v29; // eax
  char v30; // [rsp+20h] [rbp-38h]
  char v31; // [rsp+24h] [rbp-34h]
  int v32; // [rsp+28h] [rbp-30h]
  int v33; // [rsp+2Ch] [rbp-2Ch]

  v6 = 0LL;
  v7 = 0;
  v8 = a2;
  v33 = 0;
  LOBYTE(a2) = 0;
  v31 = 0;
  v9 = 0;
  v32 = a2;
  v30 = 0;
  v10 = a4;
  if ( a6 && *(_DWORD *)(a6 + 4) )
  {
    do
    {
      v13 = 3 * v6;
      if ( (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == 0 || (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == (*a1 & 3) )
      {
        v14 = *(_DWORD *)(a6 + 24 * v6 + 16);
        if ( v14 == a1[1] )
        {
          v15 = RtlCompareMemory(a1 + 2, *(const void **)(a6 + 24 * v6 + 24), v14);
          v10 = a4;
          v7 = v31;
          if ( *(_DWORD *)(a6 + 24 * v6 + 16) == v15 )
          {
            v16 = *(_DWORD *)(a5 + 4);
            v17 = 0;
            if ( v16 )
            {
              v18 = *(_DWORD *)(a6 + 24 * v6 + 8);
              v19 = v18;
              v20 = v32;
              do
              {
                v21 = 32LL * v17;
                if ( *(_DWORD *)(v21 + a5 + 28) == v18 )
                {
                  *(_DWORD *)(v21 + a5 + 32) |= 2u;
                  v9 = 1;
                  v18 = *(_DWORD *)(a6 + 8 * v13 + 8);
                  v19 = v18;
                  v16 = *(_DWORD *)(a5 + 4);
                }
                if ( v8 == *a1 )
                {
                  v20 = (unsigned __int8)v20;
                  if ( !a3 )
                    v20 = 1;
                }
                if ( v19 == a4 )
                  v7 = 1;
                ++v17;
              }
              while ( v17 < v16 );
              v32 = v20;
              LODWORD(v6) = v33;
              v31 = v7;
            }
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      v33 = v6;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a6 + 4) );
    LOBYTE(a2) = v32;
    if ( (_BYTE)v32 )
      goto LABEL_20;
  }
  if ( a3 || v9 || v8 != *a1 )
  {
LABEL_20:
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v30 = 1;
    v9 = 1;
  }
  v23 = *(_DWORD *)(a5 + 4);
  v24 = 0;
  if ( v23 )
  {
    v25 = 1;
    do
    {
      v26 = 32LL * v24;
      v27 = *(_DWORD *)(v26 + a5 + 32);
      if ( (_BYTE)a2 )
      {
        if ( (v27 & 2) == 0 )
          goto LABEL_30;
        if ( !v7 )
        {
          *(_DWORD *)(v26 + a5 + 32) = v27 | 8;
          goto LABEL_27;
        }
      }
      else
      {
        if ( (v27 & 4) != 0 && !v9 || (v27 & 1) != 0 || (v27 & 2) != 0 )
          goto LABEL_27;
        if ( !v22 )
        {
LABEL_30:
          v29 = v23 - v24 - 1;
          if ( v29 )
          {
            memmove((void *)(v26 + a5 + 8), (const void *)(32LL * v25 + a5 + 8), 32LL * v29);
            LOBYTE(a2) = v32;
          }
          --*(_DWORD *)(a5 + 4);
          goto LABEL_28;
        }
      }
      if ( *(_DWORD *)(v26 + a5 + 28) != v10 )
        goto LABEL_30;
LABEL_27:
      ++v24;
      ++v25;
LABEL_28:
      v23 = *(_DWORD *)(a5 + 4);
      v10 = a4;
      v22 = v30;
      v7 = v31;
    }
    while ( v24 < v23 );
  }
  return 0LL;
}
