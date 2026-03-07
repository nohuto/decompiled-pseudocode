_QWORD *__fastcall HalpHsaCreateReservedDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int16 v4; // si
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  unsigned int v7; // r9d
  _QWORD *i; // rdx
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v4 = a1;
  v11 = 0LL;
  if ( (int)ExtEnvAllocateMemory(a1, 24 * v2 + 32, &v11) < 0 )
    return 0LL;
  v6 = (_QWORD *)v11;
  v7 = 0;
  *(_DWORD *)(v11 + 24) = *(_DWORD *)(a2 + 20);
  for ( i = *(_QWORD **)(a2 + 24); i != (_QWORD *)(a2 + 24); i = (_QWORD *)*i )
  {
    v9 = v7++;
    v5 = 3 * v9;
    v6[v5 + 4] = i[2];
    v6[v5 + 5] = i[3];
  }
  if ( (int)ExtEnvAllocateMemory(v5, 0x18u, v6) < 0 )
    return 0LL;
  result = v6;
  *(_DWORD *)*v6 = 1;
  *(_WORD *)(*v6 + 8LL) = v4;
  *(_WORD *)(*v6 + 14LL) = 0;
  *(_WORD *)(*v6 + 12LL) = *(_WORD *)(a2 + 16);
  return result;
}
