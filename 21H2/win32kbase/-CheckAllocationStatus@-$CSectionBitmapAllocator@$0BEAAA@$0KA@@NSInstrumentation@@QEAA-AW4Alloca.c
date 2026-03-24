/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00867DC
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0113538 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // rax

  v2 = a1[2];
  v3 = v2 ^ a1[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 81920 )
    return 0LL;
  if ( (a2 & 0xFFF) % 0xA0 )
    return 3LL;
  return 2
       - (unsigned int)(RtlTestBit(
                          (PRTL_BITMAP)(v2 ^ a1[3]),
                          (a2 & 0xFFF) / 0xA0
                        + 25 * (((unsigned int)a2 - ((unsigned int)v2 ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
}
