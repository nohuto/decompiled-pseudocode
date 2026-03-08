/*
 * XREFs of MiInitializePartitionThreads @ 0x140A2CE10
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 *v2; // rsi
  unsigned int v4; // ebx
  void *v5; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v9[4]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+68h] [rbp-40h] BYREF

  v8 = 0LL;
  v9[0] = 0;
  v1 = v9;
  v10[0] = MiZeroPageThread;
  v2 = v10;
  v9[1] = 1;
  v10[1] = MiRebuildLargePagesThread;
  v9[2] = 2;
  v10[2] = MiPartitionWorkingSetManager;
  v4 = 0;
  v5 = *(void **)(*(_QWORD *)(a1 + 200) + 120LL);
  while ( 1 )
  {
    result = PsCreateSystemThreadEx((__int64)&v8, 0x1FFFFF, 0LL, v5, 0LL, *v2, a1, 0LL, 0LL);
    if ( (int)result < 0 )
      break;
    v7 = *v1;
    ++v4;
    ++v2;
    ++v1;
    *(_QWORD *)(a1 + 8 * v7 + 152) = v8;
    if ( v4 >= 3 )
      return 0LL;
  }
  return result;
}
