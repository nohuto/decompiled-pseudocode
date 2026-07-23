/*
 * XREFs of SymCryptParallelSha256AppendBytes_serial @ 0x1403EF18C
 * Callers:
 *     SymCryptParallelSha256Append @ 0x1403EDC90 (SymCryptParallelSha256Append.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x1403EC420 (SymCryptSha256AppendBlocks.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBytes_serial(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = 0LL;
    v8 = 0LL;
    do
    {
      SymCryptSha256AppendBlocks(
        **(_QWORD **)(a1 + 8 * v3) + 96LL,
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL),
        a3,
        (__int64)&v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * v3++);
      *(_QWORD *)(result + 40) -= a3;
    }
    while ( v3 < a2 );
  }
  return result;
}
