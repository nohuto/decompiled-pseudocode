/*
 * XREFs of RtlpGetRetpolineStubsFunctionTable @ 0x1405AFE24
 * Callers:
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1405AFC40 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405AFD28 (RtlCreateRetpolineStubsFunctionTable.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlpGetRetpolineStubsFunctionTable(int a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // r9d
  unsigned __int64 v12; // rbp
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  unsigned int *v19; // rdx
  int v20; // r9d
  int v21; // r8d
  unsigned int *v22; // rdx
  unsigned int v23; // [rsp+20h] [rbp-18h] BYREF

  v23 = 0;
  v6 = a4;
  v7 = a2;
  LOBYTE(a2) = 1;
  v8 = RtlImageDirectoryEntryToData(a1, a2, 3, (int)&v23);
  if ( !v8 )
    return 0LL;
  if ( !v23 )
    return 0LL;
  if ( v23 != 12 * (v23 / 0xCuLL) )
    return 0LL;
  v9 = a3 - v7;
  v10 = v9 + v6;
  v11 = 0;
  v12 = v23 / 0xCuLL;
  v13 = v12 - 1;
  if ( (int)v12 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = (v11 + v13) >> 1;
    v15 = v14;
    v16 = *(unsigned int *)(v8 + 12LL * v14);
    if ( v10 > v16 )
      break;
    v13 = v14 - 1;
LABEL_9:
    if ( v13 < v11 )
      return 0LL;
  }
  v17 = *(unsigned int *)(v8 + 12LL * v14 + 4);
  if ( v9 >= v17 )
  {
    v11 = v14 + 1;
    goto LABEL_9;
  }
  if ( v9 > v16 || v10 < v17 )
    return 0LL;
  if ( v14 > 0 )
  {
    v19 = (unsigned int *)(v8 - 12 + 12LL * v14);
    do
    {
      if ( *v19 < v9 )
        break;
      --v14;
      --v15;
      v19 -= 3;
    }
    while ( v15 > 0 );
  }
  v20 = v14 + 1;
  v21 = 1;
  if ( v14 + 1 < v12 )
  {
    v22 = (unsigned int *)(v8 + 12LL * v14 + 16);
    do
    {
      if ( *v22 > v10 )
        break;
      ++v20;
      ++v21;
      v22 += 3;
    }
    while ( v20 < v12 );
  }
  result = v8 + 12LL * v14;
  *a5 = v21;
  return result;
}
