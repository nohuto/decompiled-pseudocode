__int64 MiInitializePageFaultResources()
{
  int v0; // edi
  __int64 i; // rsi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  char *v4; // rax
  unsigned __int64 v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // ecx
  ULONG_PTR v8; // rax

  v0 = 0;
  for ( i = 0LL; ; ++i )
  {
    v2 = 2LL * v0;
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 2108]);
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 2112]);
    v3 = v0 != 0 ? 16 : 8;
    *((_BYTE *)&MiState[2116] + i) = v0 != 0 ? 16 : 8;
    v4 = (char *)MiAllocateInPageSupportBlock(v0, v3);
    if ( !v4 )
      break;
    MiState[i + 2117] = (__int64)v4;
    v5 = (-(__int64)(v0 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    MiState[i + 2119] = (__int64)&v4[v5 * v3];
    v6 = (unsigned int *)(v4 + 192);
    do
    {
      v7 = *v6 | 0x40;
      if ( i )
        v7 = *v6 & 0xFFFFFFBF;
      *v6 = v7;
      MiInsertInPageBlock((PSLIST_ENTRY)v6 - 12);
      v6 = (unsigned int *)((char *)v6 + v5);
      --v3;
    }
    while ( v3 );
    if ( ++v0 >= 2 )
    {
      v8 = MiReservePtes((__int64)&qword_140C695C0, 0x10u);
      if ( v8 )
      {
        qword_140C69350 = 0LL;
        qword_140C69348 = v8;
        return 1LL;
      }
      return 0LL;
    }
  }
  return 0LL;
}
