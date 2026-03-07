__int64 __fastcall sub_140A4AACC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  __int64 *v12; // rbp
  __int64 v13; // rbp
  NTSTATUS v14; // eax
  NTSTATUS v15; // esi
  NTSTATUS v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 Pool2; // rax
  unsigned __int64 *v21; // r8
  int v22; // esi
  __int64 v23; // r11
  unsigned int v24; // r9d
  _DWORD *j; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 v30; // r8
  unsigned int v31; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v7 = *(unsigned int **)(a1 + 8);
        if ( v7 )
        {
          if ( *(_DWORD *)a1 > 3u )
          {
            for ( i = 0; i < 3; ++i )
            {
              v9 = *v7;
              v10 = v7 + 1;
              if ( v7 + 1 < v7 )
                return (unsigned int)-1073741675;
              v7 = (unsigned int *)((char *)v10 + v9);
              if ( (unsigned int *)((char *)v10 + v9) < v10 )
                return (unsigned int)-1073741675;
            }
            v11 = *v7;
            if ( v7 + 1 >= v7 )
            {
              v12 = 0LL;
              if ( v11 )
                v12 = (__int64 *)(v7 + 1);
              if ( v11 != 8 )
                return (unsigned int)-1073741789;
              v13 = *v12;
              Interval.QuadPart = -35000000LL;
              do
              {
                v14 = KeDelayExecutionThread(1, 1u, &Interval);
                v15 = v14;
              }
              while ( v14 == 257 );
              if ( v14 >= 0 && v14 != 192 )
              {
                Interval.QuadPart = -270000000LL;
                do
                {
                  v16 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, &Interval);
                  v15 = v16;
                }
                while ( v16 == 257 );
                if ( v16 >= 0 && v16 != 192 && v16 != 258 )
                  KeReleaseMutex(&Mutex, 0);
              }
              v17 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
              {
                v18 = *(_DWORD *)(a2 + 16) + 52;
                if ( v18 >= *(_DWORD *)(a2 + 16) + 48 )
                {
                  v19 = v18 + v17;
                  v6 = v18 + v17 < v18 ? 0xC0000095 : 0;
                  if ( v19 < v18 )
                    return v6;
                  *(_DWORD *)(a4 + 4) = 20;
                  Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  v21 = (unsigned __int64 *)(a4 + 8);
                  *(_QWORD *)(a4 + 8) = Pool2;
                  *(_DWORD *)a4 = 0;
                  v22 = v15 | 0x10000000;
                  v23 = Pool2;
                  v24 = 0;
                  for ( j = (_DWORD *)Pool2; v24 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v26) )
                  {
                    v26 = *j + 4;
                    if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v26) < j )
                      return (unsigned int)-1073741675;
                    ++v24;
                  }
                  if ( j + 1 >= j )
                  {
                    if ( (unsigned __int64)(j + 2) > v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *j = 4;
                    j[1] = v22;
                    ++*(_DWORD *)a4;
                    v27 = *v21;
                    if ( *v21 )
                    {
                      v29 = 0;
                      v30 = *v21;
                      if ( *(_DWORD *)a4 )
                      {
                        while ( 1 )
                        {
                          v31 = *(_DWORD *)v30 + 4;
                          if ( *(_DWORD *)v30 >= 0xFFFFFFFC || v30 + v31 < v30 )
                            break;
                          ++v29;
                          v30 += v31;
                          if ( v29 >= *(_DWORD *)a4 )
                            goto LABEL_47;
                        }
                      }
                      else
                      {
LABEL_47:
                        if ( v30 + 4 >= v30 )
                        {
                          v6 = 0;
                          if ( v30 + 12 <= v27 + *(unsigned int *)(a4 + 4) )
                          {
                            *(_DWORD *)v30 = 8;
                            *(_QWORD *)(v30 + 4) = v13;
                            ++*(_DWORD *)a4;
                            return v6;
                          }
                          return (unsigned int)-1073741789;
                        }
                      }
                    }
                    else
                    {
                      v28 = *(_DWORD *)(a4 + 4);
                      if ( v28 + 12 >= v28 )
                      {
                        *(_DWORD *)(a4 + 4) = v28 + 12;
                        ++*(_DWORD *)a4;
                        return 0;
                      }
                      *(_DWORD *)(a4 + 4) = -1;
                    }
                  }
                  return (unsigned int)-1073741675;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
