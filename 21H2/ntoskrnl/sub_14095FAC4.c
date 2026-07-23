/*
 * XREFs of sub_14095FAC4 @ 0x14095FAC4
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14095FAC4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  signed int v7; // ebx
  __int64 *v8; // r8
  int v9; // r9d
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // r10d
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // r15d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  PVOID PoolWithTag; // rax
  unsigned int v23; // r11d
  __int64 v24; // r9
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  char *v28; // rdx
  int v29; // r8d
  char *v30; // r13
  char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // r11d
  __int64 v35; // r8
  unsigned int v36; // ecx
  unsigned int v37; // eax
  char *v38; // rdx
  int v39; // r9d
  char *v40; // r15
  char *v41; // r13
  char *v42; // rcx
  __int64 v43; // rax

  v6 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 && *(_DWORD *)a1 > 3u )
  {
    v12 = 0;
    v11 = -1LL;
    while ( 1 )
    {
      v13 = -1LL;
      if ( v10 + 4 >= v10 )
        v13 = v10 + 4;
      v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        break;
      v14 = v13 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v14 >= v13 )
        v10 = v14;
      v7 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        break;
      if ( (unsigned int)++v12 >= 3 )
      {
        v15 = -1LL;
        if ( v10 + 4 >= v10 )
          v15 = v10 + 4;
        v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
        if ( v10 + 4 >= v10 )
        {
          v9 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 )
            v8 = (__int64 *)v15;
        }
        break;
      }
    }
  }
  else
  {
    v7 = -1073741811;
    v11 = -1LL;
  }
  if ( v7 >= 0 )
  {
    if ( v9 == 8 )
      v6 = *v8;
    else
      v7 = -1073741789;
    if ( v7 >= 0 )
    {
      KeReleaseMutex(&stru_140C13EA0, 0);
      v16 = *(_DWORD *)(a2 + 32);
      v17 = *(_DWORD *)(a2 + 16) + 48;
      v18 = -1;
      v19 = -1;
      if ( v17 >= 0x30 )
        v19 = v17;
      v7 = v17 < 0x30 ? 0xC0000095 : 0;
      if ( v17 >= 0x30 )
      {
        v20 = v19 + 4;
        v21 = -1;
        if ( v19 + 4 >= v19 )
          v21 = v19 + 4;
        v7 = v20 < v19 ? 0xC0000095 : 0;
        if ( v20 >= v19 )
          v7 = v21 + v16 < v21 ? 0xC0000095 : 0;
      }
      if ( v7 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v7 = -1073741801;
        }
        if ( v7 >= 0 )
        {
          v23 = 0;
          v24 = *(_QWORD *)(a4 + 8);
          if ( !v24 )
          {
            v25 = *(_DWORD *)(a4 + 4);
            v26 = v25 + 8;
            v27 = -1;
            if ( v25 + 8 >= v25 )
              v27 = v25 + 8;
            *(_DWORD *)(a4 + 4) = v27;
            v7 = v26 < v25 ? 0xC0000095 : 0;
            if ( v26 >= v25 )
            {
              ++*(_DWORD *)a4;
              v7 = 0;
            }
            goto LABEL_58;
          }
          v28 = *(char **)(a4 + 8);
          v29 = 0;
          if ( !*(_DWORD *)a4 )
          {
LABEL_52:
            v33 = -1LL;
            if ( v28 + 4 >= v28 )
              v33 = (__int64)(v28 + 4);
            v7 = v28 + 4 < v28 ? 0xC0000095 : 0;
            if ( v28 + 4 >= v28 )
            {
              if ( (unsigned __int64)(v28 + 8) <= v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v28 = 4;
                *(_DWORD *)v33 = 0;
                ++*(_DWORD *)a4;
              }
              else
              {
                v7 = -1073741789;
              }
            }
LABEL_58:
            if ( v7 >= 0 )
            {
              v34 = 0;
              v35 = *(_QWORD *)(a4 + 8);
              if ( v35 )
              {
                v38 = *(char **)(a4 + 8);
                v39 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v40 = v38;
                    v41 = v38;
                    if ( *(_DWORD *)v38 >= 0xFFFFFFFC )
                    {
                      v7 = -1073741675;
                    }
                    else
                    {
                      v34 = *(_DWORD *)v38 + 4;
                      v7 = 0;
                    }
                    if ( v7 < 0 )
                      break;
                    v42 = &v38[v34];
                    v43 = -1LL;
                    if ( v42 >= v38 )
                      v43 = (__int64)&v38[v34];
                    v38 = (char *)v43;
                    v7 = v42 < v41 ? 0xC0000095 : 0;
                    if ( v42 < v40 )
                      break;
                    if ( (unsigned int)++v39 >= *(_DWORD *)a4 )
                      goto LABEL_73;
                  }
                }
                else
                {
LABEL_73:
                  if ( v38 + 4 >= v38 )
                    v11 = (__int64)(v38 + 4);
                  v7 = v38 + 4 < v38 ? 0xC0000095 : 0;
                  if ( v38 + 4 >= v38 )
                  {
                    if ( (unsigned __int64)(v38 + 12) <= v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)v38 = 8;
                      *(_QWORD *)v11 = v6;
                      ++*(_DWORD *)a4;
                    }
                    else
                    {
                      return (unsigned int)-1073741789;
                    }
                  }
                }
              }
              else
              {
                v36 = *(_DWORD *)(a4 + 4);
                v37 = v36 + 12;
                if ( v36 + 12 >= v36 )
                  v18 = v36 + 12;
                *(_DWORD *)(a4 + 4) = v18;
                v7 = v37 < v36 ? 0xC0000095 : 0;
                if ( v37 >= v36 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
              }
            }
            return (unsigned int)v7;
          }
          while ( 1 )
          {
            v30 = v28;
            if ( *(_DWORD *)v28 >= 0xFFFFFFFC )
            {
              v7 = -1073741675;
            }
            else
            {
              v23 = *(_DWORD *)v28 + 4;
              v7 = 0;
            }
            if ( v7 < 0 )
              break;
            v31 = &v28[v23];
            v32 = -1LL;
            if ( v31 >= v28 )
              v32 = (__int64)&v28[v23];
            v28 = (char *)v32;
            v7 = v31 < v30 ? 0xC0000095 : 0;
            if ( v31 < v30 )
              goto LABEL_58;
            if ( (unsigned int)++v29 >= *(_DWORD *)a4 )
              goto LABEL_52;
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
