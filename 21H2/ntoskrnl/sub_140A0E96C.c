/*
 * XREFs of sub_140A0E96C @ 0x140A0E96C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0E96C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  __int64 v14; // r14
  NTSTATUS v15; // eax
  NTSTATUS v16; // esi
  NTSTATUS v17; // eax
  _DWORD *Pool2; // rax
  int v19; // esi
  unsigned int v20; // r8d
  __int64 v21; // r10
  unsigned int v22; // eax
  unsigned __int64 v24; // rdx
  unsigned int j; // ecx
  unsigned int v26; // eax
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
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
            v12 = v7 + 1;
            if ( v7 + 1 >= v7 )
            {
              v13 = 0LL;
              if ( v11 )
                v13 = v12;
              if ( v11 != 8 )
                return (unsigned int)-1073741789;
              v14 = *(_QWORD *)v13;
              Interval.QuadPart = -35000000LL;
              do
              {
                v15 = KeDelayExecutionThread(1, 1u, &Interval);
                v16 = v15;
              }
              while ( v15 == 257 );
              if ( v15 >= 0 && v15 != 192 )
              {
                Interval.QuadPart = -270000000LL;
                do
                {
                  v17 = KeWaitForSingleObject(&stru_140C0E920, UserRequest, 1, 1u, &Interval);
                  v16 = v17;
                }
                while ( v17 == 257 );
                if ( v17 >= 0 && v17 != 192 && v17 != 258 )
                  KeReleaseMutex(&stru_140C0E920, 0);
              }
              if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0
                && *(_DWORD *)(a2 + 16) + 52 >= (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
                && *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) >= (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
              {
                *(_DWORD *)(a4 + 4) = 20;
                Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
                if ( !Pool2 )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(a4 + 8) = Pool2;
                *(_DWORD *)a4 = 0;
                v19 = v16 | 0x10000000;
                if ( Pool2 + 1 >= Pool2 )
                {
                  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
                    return (unsigned int)-1073741789;
                  *Pool2 = 4;
                  Pool2[1] = v19;
                  v20 = ++*(_DWORD *)a4;
                  v21 = *(_QWORD *)(a4 + 8);
                  if ( !v21 )
                  {
                    v22 = *(_DWORD *)(a4 + 4);
                    if ( v22 + 12 >= v22 )
                    {
                      *(_DWORD *)(a4 + 4) = v22 + 12;
                      *(_DWORD *)a4 = v20 + 1;
                      return v4;
                    }
                    *(_DWORD *)(a4 + 4) = -1;
                    return (unsigned int)-1073741675;
                  }
                  v24 = *(_QWORD *)(a4 + 8);
                  for ( j = 0; j < v20; v24 += v26 )
                  {
                    v26 = *(_DWORD *)v24 + 4;
                    if ( *(_DWORD *)v24 >= 0xFFFFFFFC || v24 + v26 < v24 )
                      return (unsigned int)-1073741675;
                    ++j;
                  }
                  if ( v24 + 4 >= v24 )
                  {
                    if ( v24 + 12 <= v21 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)v24 = 8;
                      *(_QWORD *)(v24 + 4) = v14;
                      ++*(_DWORD *)a4;
                      return v4;
                    }
                    return (unsigned int)-1073741789;
                  }
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
