/*
 * XREFs of PnpLookupArbitersNewResources @ 0x1408039D4
 * Callers:
 *     IopRetestConfiguration @ 0x1408035A0 (IopRetestConfiguration.c)
 *     IopTestConfiguration @ 0x1408038E0 (IopTestConfiguration.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpLookupArbitersNewResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned int v11; // edi
  __int64 *v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  __int64 Pool2; // rdx
  __int64 v19; // rax
  char v20; // cl

  v6 = 0;
  v8 = 0;
  if ( !a2 )
    return 3221225473LL;
  v9 = *(_QWORD *)(a3 + 32);
  do
  {
    if ( *(_QWORD *)(((unsigned __int64)v8 << 6) + a1) == v9 )
      break;
    ++v8;
  }
  while ( v8 < a2 );
  if ( v8 >= a2 )
    return 3221225473LL;
  _mm_lfence();
  v11 = 0;
  v12 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)v8 << 6) + a1 + 32) + 16LL);
  v13 = *v12;
  v14 = *(_DWORD *)(*v12 + 20);
  if ( v14 )
  {
    v15 = v13 + 24;
    v16 = v14;
    do
    {
      v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 32LL) + 136LL);
      if ( v17 == a4 || v17 == 7 && a4 == 3 )
        ++v11;
      v15 += 8LL;
      --v16;
    }
    while ( v16 );
    if ( v11 )
    {
      Pool2 = ExAllocatePool2(256LL, 20LL * v11, 538996816LL);
      if ( !Pool2 )
        return 3221225626LL;
      *a6 = v11;
      *a5 = Pool2;
      if ( *(_DWORD *)(v13 + 20) )
      {
        do
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v13 + 8LL * v6 + 24) + 32LL);
          v20 = *(_BYTE *)(v19 + 136);
          if ( v20 == a4 || v20 == 7 && a4 == 3 )
          {
            *(_OWORD *)Pool2 = *(_OWORD *)(v19 + 136);
            *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(v19 + 152);
            Pool2 += 20LL;
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(v13 + 20) );
      }
    }
  }
  return 0LL;
}
