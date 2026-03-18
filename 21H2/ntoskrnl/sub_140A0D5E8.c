/*
 * XREFs of sub_140A0D5E8 @ 0x140A0D5E8
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0D5E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  __int64 v14; // r14
  NTSTATUS v15; // eax
  __int64 v16; // rbx
  ULONG TimeIncrement; // eax
  _DWORD *Pool2; // rax
  unsigned int v19; // r8d
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned __int64 v23; // rdx
  unsigned int j; // ecx
  unsigned int v25; // eax
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

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
              Timeout.QuadPart = -270000000LL;
              v15 = KeWaitForSingleObject(&stru_140C0E920, UserRequest, 1, 0, &Timeout);
              if ( v15 >= 0 && v15 != 192 && v15 != 258 )
              {
                if ( stru_140C0E900.Header.SignalState || !dword_140D3B124 )
                {
                  v16 = MEMORY[0xFFFFF78000000320];
                  TimeIncrement = KeQueryTimeIncrement();
                  dword_140D3B124 = 1;
                  qword_140D3B130 = v16 * TimeIncrement / 10000;
                  KeResetEvent(&stru_140C0E900);
                }
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
                if ( Pool2 + 1 >= Pool2 )
                {
                  if ( Pool2 + 2 > (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
                    return (unsigned int)-1073741789;
                  *Pool2 = 4;
                  Pool2[1] = 0x10000000;
                  v19 = ++*(_DWORD *)a4;
                  v20 = *(_QWORD *)(a4 + 8);
                  if ( !v20 )
                  {
                    v21 = *(_DWORD *)(a4 + 4);
                    if ( v21 + 12 >= v21 )
                    {
                      *(_DWORD *)(a4 + 4) = v21 + 12;
                      *(_DWORD *)a4 = v19 + 1;
                      return v4;
                    }
                    *(_DWORD *)(a4 + 4) = -1;
                    return (unsigned int)-1073741675;
                  }
                  v23 = *(_QWORD *)(a4 + 8);
                  for ( j = 0; j < v19; v23 += v25 )
                  {
                    v25 = *(_DWORD *)v23 + 4;
                    if ( *(_DWORD *)v23 >= 0xFFFFFFFC || v23 + v25 < v23 )
                      return (unsigned int)-1073741675;
                    ++j;
                  }
                  if ( v23 + 4 >= v23 )
                  {
                    if ( v23 + 12 <= v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)v23 = 8;
                      *(_QWORD *)(v23 + 4) = v14;
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
