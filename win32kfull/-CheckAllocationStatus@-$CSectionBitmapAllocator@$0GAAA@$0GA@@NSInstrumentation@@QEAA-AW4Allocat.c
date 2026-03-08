/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C02015C0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0201914 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 24576 )
    return 0LL;
  if ( (a2 & 0xFFF) == 96 * ((a2 & 0xFFF) / 0x60) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            42 * (((unsigned int)a2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12)
                          + (a2 & 0xFFF) / 0x60) != 0);
  return 3LL;
}
