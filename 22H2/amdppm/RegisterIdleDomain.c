/*
 * XREFs of RegisterIdleDomain @ 0x1C002F4AC
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C002FB7C (RegisterKernelIdleDomains.c)
 * Callees:
 *     memset @ 0x1C000EDC0 (memset.c)
 */

bool __fastcall RegisterIdleDomain(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  char v3; // di
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx

  v2 = *(_QWORD *)(a1 + 520);
  v3 = 0;
  v5 = 3LL * a2;
  if ( *(_DWORD *)(v2 + 24LL * a2 + 24) >= **(_DWORD **)(a1 + 712) )
    return v3;
  v6 = qword_1C0013440;
  if ( (__int64 *)qword_1C0013440 == &qword_1C0013440 )
    goto LABEL_6;
  do
  {
    v7 = v6;
    if ( *(_DWORD *)(v6 + 36) == *(_DWORD *)(v2 + 24LL * a2 + 12) )
      break;
    v6 = *(_QWORD *)v6;
    v7 = 0LL;
  }
  while ( (__int64 *)v6 != &qword_1C0013440 );
  if ( !v7 )
  {
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x72637250u);
    v7 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return v3;
    memset(PoolWithTag, 0, 0xD8uLL);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    v9 = (__int64 *)qword_1C0013448;
    if ( *(__int64 **)qword_1C0013448 != &qword_1C0013440 )
LABEL_14:
      __fastfail(3u);
    *(_QWORD *)v7 = &qword_1C0013440;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    qword_1C0013448 = v7;
    KeInitializeAffinityEx(v7 + 48);
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(v2 + 8 * v5 + 12);
    *(_DWORD *)(v7 + 40) = *(_DWORD *)(v2 + 8 * v5 + 16);
    *(_DWORD *)(v7 + 44) = *(_DWORD *)(v2 + 8 * v5 + 20);
  }
  v10 = *(_QWORD *)(a1 + 712);
  v11 = 32LL * *(unsigned int *)(v2 + 8 * v5 + 24);
  v12 = (_QWORD *)(v11 + v10 + 24);
  *(_QWORD *)(v11 + v10 + 16) = v7;
  v13 = *(_QWORD **)(v7 + 24);
  if ( *v13 != v7 + 16 )
    goto LABEL_14;
  v12[1] = v13;
  *v12 = v7 + 16;
  *v13 = v12;
  *(_QWORD *)(v7 + 24) = v12;
  if ( !(unsigned int)KeCheckProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56)) )
  {
    KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    ++*(_DWORD *)(v7 + 32);
  }
  return *(_DWORD *)(v7 + 32) == *(_DWORD *)(v7 + 44);
}
