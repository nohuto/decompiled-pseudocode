/*
 * XREFs of HalFlushDmaBuffer @ 0x140454880
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 */

__int64 __fastcall HalFlushDmaBuffer(__int64 a1, ULONG_PTR a2, char a3)
{
  if ( !a1
    || ((HalpCoreDmaAlignment - 1) & *(_DWORD *)(a2 + 40)) != 0
    || ((HalpCoreDmaAlignment - 1) & *(_DWORD *)(a2 + 44)) != 0 )
  {
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(a1 + 445) )
    KeFlushIoBuffers(a2, a3, 1, a2);
  return 0LL;
}
