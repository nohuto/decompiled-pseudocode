_UNKNOWN **__fastcall CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  _UNKNOWN **result; // rax
  char *v4; // r14
  unsigned int i; // ebp
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  char *v11; // rbx
  __int64 v12; // rdx
  size_t v13; // r8
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(char **)(a1 + 24);
  for ( i = 0; i < *(_DWORD *)(a1 + 12); v4 += v14 )
  {
    v8 = a3 + 16;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 32LL * i;
    if ( (unsigned __int64)(a3 + 16) > MmUserProbeAddress || v8 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a3 = *(_OWORD *)(v10 + v9);
    v11 = a3 + 20;
    v12 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)(v8 + 4) > MmUserProbeAddress || v11 <= v8 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)v8 = *(_DWORD *)(v10 + v12 + 16);
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + v10 + 16);
    if ( (unsigned __int64)&v11[v13] > MmUserProbeAddress || &v11[v13] <= v11 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11, v4, v13);
    ++i;
    result = *(_UNKNOWN ***)(a1 + 16);
    v14 = LODWORD(result[(unsigned __int64)v10 / 8 + 2]);
    a3 = &v11[v14];
  }
  return result;
}
