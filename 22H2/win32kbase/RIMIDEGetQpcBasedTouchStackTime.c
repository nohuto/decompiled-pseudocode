/*
 * XREFs of RIMIDEGetQpcBasedTouchStackTime @ 0x1C0168624
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C01686AC (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEGetQpcBasedTouchStackTime(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( !*(_QWORD *)(a1 + 520) )
    return 10 * (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return 10000 * (unsigned int)(PerformanceCounter.QuadPart / *(__int64 *)(a1 + 520))
       + (unsigned int)((unsigned __int64)(10000 * (PerformanceCounter.QuadPart % *(_QWORD *)(a1 + 520)))
                      / *(_QWORD *)(a1 + 520));
}
