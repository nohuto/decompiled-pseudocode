/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x1406E825C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rax
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // edx
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r8
  unsigned int *v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  NTSTATUS v19; // eax
  _DWORD *Pool2; // rax
  int v21; // edi
  unsigned int v22; // r8d
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 j; // rdx
  unsigned int v27; // eax
  __int64 v28; // r9
  int v29; // r11d
  unsigned int v30; // eax
  unsigned int v31; // ecx
  _DWORD *k; // r8
  unsigned int v33; // eax
  LARGE_INTEGER v34; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v36; // [rsp+70h] [rbp+8h] BYREF
  int v37; // [rsp+80h] [rbp+18h] BYREF

  v37 = a3;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v12 = *(unsigned int **)(a1 + 8);
        if ( v12 )
        {
          if ( *(_DWORD *)a1 > 3u )
          {
            for ( i = 0; i < 3; ++i )
            {
              v14 = *v12;
              v15 = v12 + 1;
              if ( v12 + 1 < v12 )
                return (unsigned int)-1073741675;
              v12 = (unsigned int *)((char *)v15 + v14);
              if ( (unsigned int *)((char *)v15 + v14) < v15 )
                return (unsigned int)-1073741675;
            }
            v16 = *v12;
            v17 = v12 + 1;
            if ( v12 + 1 < v12 )
              return (unsigned int)-1073741675;
            v6 = 0LL;
            if ( v16 )
              v6 = v17;
            if ( v16 != 8 )
              return (unsigned int)-1073741789;
            v7 = *(_QWORD *)v6;
            v37 = 0;
            v36 = 0;
            v34.LowPart = 0;
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
            v8 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, LARGE_INTEGER *))qword_140D3B468)(
                   &DestinationString,
                   &v37,
                   &v36,
                   4LL,
                   &v34);
            v9 = v8;
            if ( v8 != -1073741772 )
            {
              if ( v8 < 0 )
                return v9;
              if ( v37 == 4 && v36 )
                KeResetEvent(&stru_140C0E900);
            }
            dword_140D3B1B8 = 1;
            do
            {
              v10 = KeWaitForSingleObject(&stru_140C0E900, UserRequest, 1, 1u, 0LL);
              v11 = v10;
            }
            while ( v10 == 257 );
            if ( v10 >= 0 && v10 != 192 )
            {
              do
              {
                v19 = KeWaitForSingleObject(&stru_140C0E920, UserRequest, 1, 1u, 0LL);
                v11 = v19;
              }
              while ( v19 == 257 );
              if ( v19 >= 0 && v19 != 192 && v19 != 258 )
                KeReleaseMutex(&stru_140C0E920, 0);
            }
            if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC8
              || *(_DWORD *)(a2 + 16) + 60 < (unsigned int)(*(_DWORD *)(a2 + 16) + 56)
              || *(_DWORD *)(a2 + 16) + 60 + *(_DWORD *)(a2 + 32) < (unsigned int)(*(_DWORD *)(a2 + 16) + 60) )
            {
              return (unsigned int)-1073741675;
            }
            *(_DWORD *)(a4 + 4) = 28;
            Pool2 = (_DWORD *)ExAllocatePool2(256LL, 28LL, 542329939LL);
            if ( !Pool2 )
              return (unsigned int)-1073741801;
            *(_QWORD *)(a4 + 8) = Pool2;
            *(_DWORD *)a4 = 0;
            v21 = v11 | 0x10000000;
            if ( Pool2 + 1 < Pool2 )
              return (unsigned int)-1073741675;
            if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
              return (unsigned int)-1073741789;
            *Pool2 = 4;
            Pool2[1] = v21;
            v22 = ++*(_DWORD *)a4;
            v23 = *(_QWORD *)(a4 + 8);
            if ( v23 )
            {
              v25 = 0;
              for ( j = *(_QWORD *)(a4 + 8); v25 < v22; j += v27 )
              {
                v27 = *(_DWORD *)j + 4;
                if ( *(_DWORD *)j >= 0xFFFFFFFC || j + v27 < j )
                  return (unsigned int)-1073741675;
                ++v25;
              }
              if ( j + 4 < j )
                return (unsigned int)-1073741675;
              if ( j + 12 > v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *(_DWORD *)j = 8;
              *(_QWORD *)(j + 4) = v7;
              ++*(_DWORD *)a4;
            }
            else
            {
              v24 = *(_DWORD *)(a4 + 4);
              if ( v24 + 12 < v24 )
                goto LABEL_44;
              *(_DWORD *)(a4 + 4) = v24 + 12;
              *(_DWORD *)a4 = v22 + 1;
            }
            v28 = *(_QWORD *)(a4 + 8);
            v29 = dword_140D3B054;
            if ( !v28 )
            {
              v30 = *(_DWORD *)(a4 + 4);
              if ( v30 + 8 >= v30 )
              {
                ++*(_DWORD *)a4;
                v9 = 0;
                *(_DWORD *)(a4 + 4) = v30 + 8;
                return v9;
              }
LABEL_44:
              *(_DWORD *)(a4 + 4) = -1;
              return (unsigned int)-1073741675;
            }
            v31 = 0;
            for ( k = *(_DWORD **)(a4 + 8); v31 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v33) )
            {
              v33 = *k + 4;
              if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v33) < k )
                return (unsigned int)-1073741675;
              ++v31;
            }
            if ( k + 1 >= k )
            {
              v9 = 0;
              if ( (unsigned __int64)(k + 2) <= v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *k = 4;
                k[1] = v29;
                ++*(_DWORD *)a4;
                return v9;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
