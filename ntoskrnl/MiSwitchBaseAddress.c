/*
 * XREFs of MiSwitchBaseAddress @ 0x14069F7C4
 * Callers:
 *     MiRelocateImageAgain @ 0x1406A160C (MiRelocateImageAgain.c)
 * Callees:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiApplyBytestreamFixup @ 0x140302E3C (MiApplyBytestreamFixup.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036CBB4 (DbgUnLoadImageSymbolsUnicode.c)
 */

__int64 __fastcall MiSwitchBaseAddress(_QWORD *a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 v4; // rdi
  ULONG_PTR v6; // r10
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  __int64 i; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax

  v4 = *a1;
  v6 = a3;
  v7 = *(_QWORD *)(a1[12] + 32LL);
  v8 = a2 - *(_QWORD *)(*a1 + 32LL);
  v9 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v8;
  v10 = *(_QWORD **)(v4 + 56);
  *(_QWORD *)(v4 + 32) = a2;
  *v10 += *(_QWORD *)(v7 + 40);
  for ( i = *(_QWORD *)(v7 + 16); i; i = *v14 )
    MiApplyBytestreamFixup((__int64)v10, (_QWORD *)(i + 24), v9);
  MiWalkEntireImage((ULONG_PTR)a1, v6, 2u, a4);
  *(_QWORD *)(v7 + 40) = v8 + v9;
  result = *(_QWORD *)(v7 + 16);
  if ( result )
  {
    v15 = -v9;
    do
    {
      MiApplyBytestreamFixup(v12, (_QWORD *)(result + 24), v15);
      result = *v16;
    }
    while ( result );
  }
  if ( _bittest16((const signed __int16 *)(v4 + 12), 0xDu) )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v4 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 57343LL;
    *(_WORD *)(v4 + 12) &= ~0x2000u;
  }
  return result;
}
