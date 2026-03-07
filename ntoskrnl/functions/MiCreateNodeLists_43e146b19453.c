char *__fastcall MiCreateNodeLists(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  char *v6; // rsi
  _QWORD *Pool; // rax
  __int64 v8; // rdi
  PVOID *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v14; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]

  v2 = 0;
  P[1] = P;
  v16 = 0LL;
  P[0] = P;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( !(unsigned int)MiDescribePageRun(
                          (__int64)P,
                          *(_QWORD *)(a2 + 16LL * v5 + 16),
                          *(_QWORD *)(a2 + 16LL * v5 + 24)) )
      goto LABEL_13;
    ++v5;
  }
  while ( v5 != *(_DWORD *)a2 );
  Pool = MiAllocatePool(64, 24 * v16 + 32, 0x6C4D6D4Du);
  if ( !Pool )
    goto LABEL_13;
  v6 = (char *)(Pool + 2);
  Pool[1] = 1LL;
  *Pool = a1;
  *((_DWORD *)Pool + 4) = v16;
  v8 = (__int64)&Pool[2 * (unsigned int)v16 + 4];
  Pool[3] = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v9 = (PVOID *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v10 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_16:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v10 + 8) = P;
    v11 = v2;
    v12 = v2++;
    v12 *= 2LL;
    *(_QWORD *)&v6[8 * v12 + 16] = v9[2];
    *(_QWORD *)&v6[8 * v12 + 24] = v9[3];
    *(_DWORD *)(v8 + 8 * v11) = *((_DWORD *)v9 + 8);
    *(_DWORD *)(v8 + 8 * v11 + 4) = *((_DWORD *)v9 + 9);
    ExFreePoolWithTag(v9, 0);
  }
  while ( v9 != P )
  {
    if ( v9[1] != P )
      goto LABEL_16;
    v14 = *v9;
    if ( *((PVOID **)*v9 + 1) != v9 )
      goto LABEL_16;
    P[0] = *v9;
    v14[1] = P;
    ExFreePoolWithTag(v9, 0);
LABEL_13:
    v9 = (PVOID *)P[0];
  }
  return v6;
}
