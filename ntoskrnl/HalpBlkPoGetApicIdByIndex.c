/*
 * XREFs of HalpBlkPoGetApicIdByIndex @ 0x140528320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpBlkPoGetApicIdByIndex(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( a1 < (unsigned int)HalpBlkNumberProcessors )
  {
    _mm_lfence();
    *a2 = *(_DWORD *)(*(_QWORD *)(HalpBlkPcr + 8LL * a1) + 12LL);
    return 0LL;
  }
  return result;
}
