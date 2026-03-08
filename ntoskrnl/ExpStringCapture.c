/*
 * XREFs of ExpStringCapture @ 0x1409F4BAC
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1409F34C8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  size_t v5; // rsi
  void *Pool2; // rbx
  size_t v8; // rax

  v4 = *a2;
  if ( (v4 & 1) != 0 || !(_WORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *a2;
    Pool2 = (void *)ExAllocatePool2(257LL, v4 + 2, 1347639365LL);
    if ( Pool2 )
    {
      v8 = *((_QWORD *)a2 + 1);
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v5 > 0x7FFFFFFF0000LL || v8 + v5 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
      memmove(Pool2, *((const void **)a2 + 1), v5);
      *((_WORD *)Pool2 + (v5 >> 1)) = 0;
      *a1 = Pool2;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
