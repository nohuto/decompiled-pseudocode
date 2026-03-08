/*
 * XREFs of ProcessWait @ 0x1C0058AC0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 */

__int64 __fastcall ProcessWait(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  v4 = a3;
  *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
  if ( a3 == 32773 )
  {
    v4 = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                             + 0xFFFFFFFF;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v5 + 8);
  HeapFree(v5);
  return v4;
}
