__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v6; // rbp
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // edx
  NTSTATUS v10; // eax
  NTSTATUS v11; // esi
  unsigned int v12; // eax
  unsigned int *v13; // rax
  unsigned int i; // ecx
  __int64 v15; // r8
  unsigned int *v16; // rdx
  unsigned int v17; // edx
  NTSTATUS v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  __int64 Pool2; // rax
  unsigned __int64 *v23; // rdx
  int v24; // esi
  __int64 v25; // r11
  unsigned int v26; // ecx
  _DWORD *j; // r8
  unsigned int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // r9
  int v31; // r11d
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned __int64 m; // r8
  unsigned int v35; // eax
  unsigned int v36; // ecx
  _DWORD *k; // r8
  unsigned int v38; // eax
  LARGE_INTEGER v39; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v41; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+80h] [rbp+18h] BYREF

  v42 = a3;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v13 = *(unsigned int **)(a1 + 8);
        if ( v13 )
        {
          if ( *(_DWORD *)a1 > 3u )
          {
            for ( i = 0; i < 3; ++i )
            {
              v15 = *v13;
              v16 = v13 + 1;
              if ( v13 + 1 < v13 )
                return (unsigned int)-1073741675;
              v13 = (unsigned int *)((char *)v16 + v15);
              if ( (unsigned int *)((char *)v16 + v15) < v16 )
                return (unsigned int)-1073741675;
            }
            v17 = *v13;
            if ( v13 + 1 < v13 )
              return (unsigned int)-1073741675;
            v6 = 0LL;
            if ( v17 )
              v6 = (__int64 *)(v13 + 1);
            if ( v17 == 8 )
            {
              v7 = *v6;
              v42 = 0;
              v41 = 0;
              v39.LowPart = 0;
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
              v8 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, LARGE_INTEGER *))qword_140D534A8)(
                     &DestinationString,
                     &v42,
                     &v41,
                     4LL,
                     &v39);
              v9 = v8;
              if ( v8 != -1073741772 )
              {
                if ( v8 < 0 )
                  return v9;
                if ( v42 == 4 && v41 )
                  KeResetEvent(&stru_140C0ED20);
              }
              dword_140D53188 = 1;
              do
              {
                v10 = KeWaitForSingleObject(&stru_140C0ED20, UserRequest, 1, 1u, 0LL);
                v11 = v10;
              }
              while ( v10 == 257 );
              if ( v10 >= 0 && v10 != 192 )
              {
                do
                {
                  v19 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, 0LL);
                  v11 = v19;
                }
                while ( v19 == 257 );
                if ( v19 >= 0 && v19 != 192 && v19 != 258 )
                  KeReleaseMutex(&Mutex, 0);
              }
              v20 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC8 )
                return (unsigned int)-1073741675;
              v21 = *(_DWORD *)(a2 + 16) + 60;
              if ( v21 < *(_DWORD *)(a2 + 16) + 56 )
                return (unsigned int)-1073741675;
              v12 = v20 + v21;
              v9 = v20 + v21 < v21 ? 0xC0000095 : 0;
              if ( v12 < v21 )
                return v9;
              *(_DWORD *)(a4 + 4) = 28;
              Pool2 = ExAllocatePool2(256LL, 28LL, 542329939LL);
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              v23 = (unsigned __int64 *)(a4 + 8);
              *(_QWORD *)(a4 + 8) = Pool2;
              *(_DWORD *)a4 = 0;
              v24 = v11 | 0x10000000;
              v25 = Pool2;
              v26 = 0;
              for ( j = (_DWORD *)Pool2; v26 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v28) )
              {
                v28 = *j + 4;
                if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v28) < j )
                  return (unsigned int)-1073741675;
                ++v26;
              }
              if ( j + 1 < j )
                return (unsigned int)-1073741675;
              if ( (unsigned __int64)(j + 2) <= v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *j = 4;
                j[1] = v24;
                ++*(_DWORD *)a4;
                if ( !*v23 )
                {
                  v29 = *(_DWORD *)(a4 + 4);
                  if ( v29 + 12 < v29 )
                  {
LABEL_52:
                    *(_DWORD *)(a4 + 4) = -1;
                    return (unsigned int)-1073741675;
                  }
                  *(_DWORD *)(a4 + 4) = v29 + 12;
LABEL_49:
                  ++*(_DWORD *)a4;
                  v30 = (_DWORD *)*v23;
                  v31 = dword_140D53054;
                  if ( !*v23 )
                  {
                    v32 = *(_DWORD *)(a4 + 4);
                    if ( v32 + 8 >= v32 )
                    {
                      *(_DWORD *)(a4 + 4) = v32 + 8;
                      ++*(_DWORD *)a4;
                      return 0;
                    }
                    goto LABEL_52;
                  }
                  v36 = 0;
                  for ( k = (_DWORD *)*v23; v36 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v38) )
                  {
                    v38 = *k + 4;
                    if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v38) < k )
                      return (unsigned int)-1073741675;
                    ++v36;
                  }
                  if ( k + 1 >= k )
                  {
                    v9 = 0;
                    if ( k + 2 <= (_DWORD *)((char *)v30 + *(unsigned int *)(a4 + 4)) )
                    {
                      *k = 4;
                      k[1] = v31;
                      ++*(_DWORD *)a4;
                      return v9;
                    }
                    return (unsigned int)-1073741789;
                  }
                  return (unsigned int)-1073741675;
                }
                v33 = 0;
                for ( m = *v23; v33 < *(_DWORD *)a4; m += v35 )
                {
                  v35 = *(_DWORD *)m + 4;
                  if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v35 < m )
                    return (unsigned int)-1073741675;
                  ++v33;
                }
                if ( m + 4 < m )
                  return (unsigned int)-1073741675;
                if ( m + 12 <= *v23 + *(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)m = 8;
                  *(_QWORD *)(m + 4) = v7;
                  goto LABEL_49;
                }
              }
            }
            return (unsigned int)-1073741789;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
