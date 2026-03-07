void __fastcall IoGetDumpHiberRanges(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v4; // rsi
  __int64 *i; // rbx
  PVOID *v6; // r14
  __int64 v7; // rbp
  void *v8; // r8
  ULONG_PTR v9; // r9
  __int64 v10; // rax
  __int64 ***v11; // rdi
  __int64 **j; // rbx

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a2 + 272);
  if ( !v2 )
    return;
  if ( *(_BYTE *)(a2 + 280) )
  {
    v4 = (__int64 *)(v2 + 40);
    for ( i = *(__int64 **)(v2 + 40); i != v4; i = (__int64 *)*i )
    {
      v6 = (PVOID *)(i + 9);
      v7 = 2LL;
      do
      {
        if ( *v6 )
          PoSetHiberRange(0LL, 0x10000u, *v6, *((unsigned int *)i + 16), 0x66756263u);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    goto LABEL_19;
  }
  if ( (unsigned int)(*(_DWORD *)v2 - 2) > 2 || (unsigned int)(*(_DWORD *)(v2 + 4) - 48) > 0x38 )
  {
    v8 = *(void **)(v2 + 24);
    if ( v8 )
    {
      v9 = *(unsigned int *)(v2 + 40);
      goto LABEL_18;
    }
  }
  else
  {
    v8 = *(void **)(v2 + 16);
    if ( v8 )
    {
      v9 = *(unsigned int *)(v2 + 24);
LABEL_18:
      PoSetHiberRange(0LL, 0x10000u, v8, v9, 0x66756263u);
    }
  }
LABEL_19:
  if ( CrashdmpImageBase )
  {
    v10 = RtlImageNtHeader((__int64)CrashdmpImageBase);
    PoSetHiberRange(0LL, 0x10000u, CrashdmpImageBase, *(unsigned int *)(v10 + 80), 0x676D4944u);
  }
  v11 = (__int64 ***)(a2 + 296);
  for ( j = *v11; j != (__int64 **)v11; j = (__int64 **)*j )
    PoSetHiberRange(0LL, 0x10000u, j[3], *((unsigned int *)j + 8), 0x676D4944u);
}
