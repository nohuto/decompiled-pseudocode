/*
 * XREFs of MiInsertMdlPageNeedsZero @ 0x1403A0E10
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInsertMdlPageNeedsZero(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r8
  unsigned __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 28) % *(_DWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 28);
  v6 = 5LL * v4;
  v7 = a1 + 128 + 8 * v6;
  v8 = *(_QWORD **)(v7 + 8);
  if ( *v8 != v7 )
    __fastfail(3u);
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(v7 + 8) = a2;
  *(_QWORD *)(a1 + 8 * v6 + 120) += a3;
  result = (unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6;
  *(_QWORD *)(a1 + 8 * result + 32) += a3;
  return result;
}
