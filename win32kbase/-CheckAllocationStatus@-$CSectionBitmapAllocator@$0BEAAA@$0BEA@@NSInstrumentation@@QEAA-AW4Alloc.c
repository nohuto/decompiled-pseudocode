/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C0180814
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0180A14 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 81920 )
    return 0LL;
  if ( (a2 & 0xFFF) == 320 * ((a2 & 0xFFF) / 0x140) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            (a2 & 0xFFF) / 0x140
                          + 12 * (((unsigned int)a2 - ((unsigned int)a1[2] ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  return 3LL;
}
