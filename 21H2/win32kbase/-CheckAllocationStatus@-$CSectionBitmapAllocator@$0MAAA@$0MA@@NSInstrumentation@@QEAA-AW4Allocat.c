/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C009B668
 * Callers:
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C009B4C8 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // rax

  v2 = a1[2];
  v3 = v2 ^ a1[1];
  if ( !a2 || a2 < v3 || a2 >= v3 + 49152 )
    return 0LL;
  if ( (a2 & 0xFFF) % 0xC0 )
    return 3LL;
  return 2
       - (unsigned int)(RtlTestBit(
                          (PRTL_BITMAP)(v2 ^ a1[3]),
                          (a2 & 0xFFF) / 0xC0
                        + 21 * (((unsigned int)a2 - ((unsigned int)v2 ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
}
