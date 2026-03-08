/*
 * XREFs of sub_140A49A48 @ 0x140A49A48
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeQueryTimeIncrement @ 0x140351FF0 (KeQueryTimeIncrement.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A49A48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rsi
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  ULONG TimeIncrement; // eax
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 Pool2; // rax
  unsigned __int64 *v21; // r8
  __int64 v22; // r10
  unsigned int v23; // ecx
  _DWORD *j; // rdx
  unsigned int v25; // eax
  unsigned __int64 v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned __int64 v29; // r8
  unsigned int v30; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

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
              Timeout.QuadPart = -270000000LL;
              v14 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
              if ( v14 >= 0 && v14 != 192 && v14 != 258 )
              {
                if ( stru_140C0ED20.Header.SignalState || !dword_140D53124 )
                {
                  v15 = MEMORY[0xFFFFF78000000320];
                  TimeIncrement = KeQueryTimeIncrement();
                  dword_140D53124 = 1;
                  qword_140D53130 = v15 * TimeIncrement / 10000;
                  KeResetEvent(&stru_140C0ED20);
                }
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
                  v22 = Pool2;
                  v23 = 0;
                  for ( j = (_DWORD *)Pool2; v23 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v25) )
                  {
                    v25 = *j + 4;
                    if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v25) < j )
                      return (unsigned int)-1073741675;
                    ++v23;
                  }
                  if ( j + 1 >= j )
                  {
                    if ( (unsigned __int64)(j + 2) > v22 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *j = 4;
                    j[1] = 0x10000000;
                    ++*(_DWORD *)a4;
                    v26 = *v21;
                    if ( *v21 )
                    {
                      v28 = 0;
                      v29 = *v21;
                      if ( *(_DWORD *)a4 )
                      {
                        while ( 1 )
                        {
                          v30 = *(_DWORD *)v29 + 4;
                          if ( *(_DWORD *)v29 >= 0xFFFFFFFC || v29 + v30 < v29 )
                            break;
                          ++v28;
                          v29 += v30;
                          if ( v28 >= *(_DWORD *)a4 )
                            goto LABEL_44;
                        }
                      }
                      else
                      {
LABEL_44:
                        if ( v29 + 4 >= v29 )
                        {
                          v6 = 0;
                          if ( v29 + 12 <= v26 + *(unsigned int *)(a4 + 4) )
                          {
                            *(_DWORD *)v29 = 8;
                            *(_QWORD *)(v29 + 4) = v13;
                            ++*(_DWORD *)a4;
                            return v6;
                          }
                          return (unsigned int)-1073741789;
                        }
                      }
                    }
                    else
                    {
                      v27 = *(_DWORD *)(a4 + 4);
                      if ( v27 + 12 >= v27 )
                      {
                        *(_DWORD *)(a4 + 4) = v27 + 12;
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
