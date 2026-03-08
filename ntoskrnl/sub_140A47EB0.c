/*
 * XREFs of sub_140A47EB0 @ 0x140A47EB0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A47EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v6; // ebx
  __int64 *v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  int v11; // r11d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 Pool2; // rax
  char **v20; // r8
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  char *v24; // rdx
  int v25; // r9d
  unsigned int v26; // eax
  unsigned int v27; // r13d
  char *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  char *v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // eax
  char *v34; // rdx
  int v35; // r9d
  char *v36; // r13
  unsigned int v37; // eax
  unsigned int v38; // edi
  char *v39; // rcx
  __int64 v40; // rax
  char *v42; // [rsp+38h] [rbp-50h]
  char *v44; // [rsp+40h] [rbp-48h]
  __int64 v45; // [rsp+90h] [rbp+8h]

  v45 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = -1LL;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = -1LL;
      if ( v9 + 4 >= v9 )
        v12 = v9 + 4;
      v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        break;
      v13 = v12 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v13 >= v12 )
        v9 = v13;
      v6 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        break;
      if ( (unsigned int)++v11 >= 3 )
      {
        v14 = -1LL;
        if ( v9 + 4 >= v9 )
          v14 = v9 + 4;
        v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
        if ( v9 + 4 >= v9 )
        {
          v8 = *(_DWORD *)v9;
          if ( *(_DWORD *)v9 )
            v7 = (__int64 *)v14;
        }
        break;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    if ( v8 == 8 )
      v45 = *v7;
    else
      v6 = -1073741789;
    if ( v6 >= 0 )
    {
      KeReleaseMutex(&Mutex, 0);
      v15 = -1;
      v16 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v16 = *(_DWORD *)(a2 + 16) + 48;
      v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v17 = v16 + 4;
        v18 = -1;
        if ( v16 + 4 >= v16 )
          v18 = v16 + 4;
        v6 = v17 < v16 ? 0xC0000095 : 0;
        if ( v17 >= v16 )
          v6 = v18 + *(_DWORD *)(a2 + 32) < v18 ? 0xC0000095 : 0;
      }
      if ( v6 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v6 = 0;
        Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
        if ( Pool2 )
        {
          v20 = (char **)(a4 + 8);
          *(_QWORD *)(a4 + 8) = Pool2;
        }
        else
        {
          v6 = -1073741801;
          v20 = (char **)(a4 + 8);
        }
        if ( v6 >= 0 )
        {
          *(_DWORD *)a4 = 0;
          if ( *v20 )
          {
            v24 = *v20;
            v25 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v42 = v24;
                v44 = v24;
                v26 = -1;
                if ( *(_DWORD *)v24 < 0xFFFFFFFC )
                  v26 = *(_DWORD *)v24 + 4;
                v6 = *(_DWORD *)v24 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v24 + 4) < 4 )
                  break;
                v27 = v26;
                v28 = &v24[v26];
                v29 = -1LL;
                if ( v28 >= v24 )
                  v29 = (__int64)&v24[v27];
                v24 = (char *)v29;
                v6 = v28 < v44 ? 0xC0000095 : 0;
                if ( v28 < v42 )
                  break;
                if ( (unsigned int)++v25 >= *(_DWORD *)a4 )
                  goto LABEL_51;
              }
            }
            else
            {
LABEL_51:
              v30 = -1LL;
              if ( v24 + 4 >= v24 )
                v30 = (__int64)(v24 + 4);
              v6 = v24 + 4 < v24 ? 0xC0000095 : 0;
              if ( v24 + 4 >= v24 )
              {
                if ( v24 + 8 > &(*v20)[*(unsigned int *)(a4 + 4)] )
                {
                  v6 = -1073741789;
                  goto LABEL_58;
                }
                *(_DWORD *)v24 = 4;
                *(_DWORD *)v30 = 0;
                goto LABEL_57;
              }
            }
          }
          else
          {
            v21 = *(_DWORD *)(a4 + 4);
            v22 = v21 + 8;
            v23 = -1;
            if ( v21 + 8 >= v21 )
              v23 = v21 + 8;
            v6 = v22 < v21 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v23;
            if ( v22 >= v21 )
            {
              v6 = 0;
LABEL_57:
              ++*(_DWORD *)a4;
            }
          }
LABEL_58:
          if ( v6 >= 0 )
          {
            v31 = *v20;
            if ( v31 )
            {
              v34 = v31;
              v35 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v36 = v34;
                  v37 = -1;
                  if ( *(_DWORD *)v34 < 0xFFFFFFFC )
                    v37 = *(_DWORD *)v34 + 4;
                  v6 = *(_DWORD *)v34 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v34 + 4) < 4 )
                    break;
                  v38 = v37;
                  v39 = &v34[v37];
                  v40 = -1LL;
                  if ( v39 >= v34 )
                    v40 = (__int64)&v34[v38];
                  v34 = (char *)v40;
                  v6 = v39 < v36 ? 0xC0000095 : 0;
                  if ( v39 < v36 )
                    break;
                  if ( (unsigned int)++v35 >= *(_DWORD *)a4 )
                    goto LABEL_72;
                }
              }
              else
              {
LABEL_72:
                if ( v34 + 4 >= v34 )
                  v10 = (__int64)(v34 + 4);
                v6 = v34 + 4 < v34 ? 0xC0000095 : 0;
                if ( v34 + 4 >= v34 )
                {
                  if ( v34 + 12 <= &v31[*(unsigned int *)(a4 + 4)] )
                  {
                    *(_DWORD *)v34 = 8;
                    *(_QWORD *)v10 = v45;
                    goto LABEL_78;
                  }
                  return (unsigned int)-1073741789;
                }
              }
            }
            else
            {
              v32 = *(_DWORD *)(a4 + 4);
              v33 = v32 + 12;
              if ( v32 + 12 >= v32 )
                v15 = v32 + 12;
              v6 = v33 < v32 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v15;
              if ( v33 >= v32 )
              {
                v6 = 0;
LABEL_78:
                ++*(_DWORD *)a4;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
