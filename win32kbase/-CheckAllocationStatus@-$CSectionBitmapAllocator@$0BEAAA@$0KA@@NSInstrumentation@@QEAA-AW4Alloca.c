/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00A88E8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A881C (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 81920 )
    return 0LL;
  if ( (a2 & 0xFFF) == 160 * ((a2 & 0xFFF) / 0xA0) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            25 * (((unsigned int)a2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12)
                          + (a2 & 0xFFF) / 0xA0) != 0);
  return 3LL;
}
