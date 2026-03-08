/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x14075D26C
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x14075D1E0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409F8BC0 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  Pool2 = (_WORD *)ExAllocatePool2(64LL, v1 + 2, 1920364101LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
