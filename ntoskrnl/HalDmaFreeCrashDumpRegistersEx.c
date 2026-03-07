__int64 __fastcall HalDmaFreeCrashDumpRegistersEx(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  signed int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // al
  _DWORD *v12; // rdx
  __int64 v13; // r8
  bool v14; // zf
  char v15; // cl
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx

  v1 = a1;
  if ( *(_DWORD *)(a1 + 16) != 1634550870 )
    v1 = 0LL;
  v2 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  v4 = v2;
  if ( v2 && (unsigned int)v3 <= 1 )
  {
    v5 = v3;
    v6 = *(_DWORD *)(v2 + 4LL * v3 + 280);
    if ( !v6 )
      return 3221225473LL;
    v8 = v6 - 1;
    *(_DWORD *)(v4 + 4LL * v3 + 280) = v8;
    if ( v8 )
      return 0LL;
    if ( *(_DWORD *)(v4 + 4LL * v3 + 272) )
    {
      v9 = *(_QWORD *)(v4 + 8LL * v3 + 256);
      if ( v9 )
        *(_QWORD *)(v9 + 56) = v9;
      if ( *(_DWORD *)(v4 + 520) == 3 )
      {
        _mm_lfence();
        v10 = *(_QWORD *)(v4 + 8LL * v3 + 256);
        (*(void (__fastcall **)(__int64))(HalpDmaIommuInterfaceFcnTable + 152))(v10 + 24);
        (*(void (__fastcall **)(_QWORD))(HalpDmaIommuInterfaceFcnTable + 136))(*(_QWORD *)(v10 + 24));
      }
      HalpDmaFreeMapRegisters(v4, *(_QWORD **)(v4 + 8 * v5 + 256), *(_DWORD *)(v4 + 4 * v5 + 272));
      *(_QWORD *)(v4 + 8 * v5 + 256) = 0LL;
      *(_DWORD *)(v4 + 4 * v5 + 272) = 0;
    }
    v11 = 1;
    v12 = (_DWORD *)(v4 + 280);
    v13 = 2LL;
    do
    {
      v14 = *v12 == 0;
      v15 = 0;
      ++v12;
      if ( v14 )
        v15 = v11;
      v11 = v15;
      --v13;
    }
    while ( v13 );
    if ( !v15 )
      return 0LL;
    v16 = (_QWORD *)(v4 + 288);
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v18 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( !v1 )
          return 0LL;
        v19 = *(_QWORD *)(v1 + 32);
        if ( *(_QWORD *)(v19 + 8) == v1 + 32 )
        {
          v20 = *(_QWORD **)(v1 + 40);
          if ( *v20 == v1 + 32 )
          {
            *v20 = v19;
            *(_QWORD *)(v19 + 8) = v20;
            return 0LL;
          }
        }
      }
    }
    __fastfail(3u);
  }
  return 3221225485LL;
}
