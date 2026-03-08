/*
 * XREFs of MdlInvariantInsertMdlInfo @ 0x1405CCF50
 * Callers:
 *     MdlInvariantPreProcessing1 @ 0x1405CD258 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall MdlInvariantInsertMdlInfo(__int64 a1, _OWORD *a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // xmm1

  Pool2 = *(_QWORD *)(a1 + 224);
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1835297878LL);
    if ( !Pool2 )
      return 0LL;
    *(_DWORD *)Pool2 = 2;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
    *(_QWORD *)(a1 + 224) = Pool2;
  }
  v5 = *(_DWORD *)Pool2;
  v6 = 0;
  if ( !*(_DWORD *)Pool2 )
    return 0LL;
  v7 = *(_QWORD *)(Pool2 + 8);
  while ( 1 )
  {
    v8 = 32LL * v6;
    if ( !*(_QWORD *)(v8 + v7) )
      break;
    if ( ++v6 >= v5 )
      return 0LL;
  }
  v10 = a2[1];
  *(_OWORD *)(v8 + v7) = *a2;
  *(_OWORD *)(v8 + v7 + 16) = v10;
  return 1LL;
}
