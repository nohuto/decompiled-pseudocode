/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140B603C4
 * Callers:
 *     MiInitializeSystemVa @ 0x140B60308 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140C66C00 = (unsigned __int8)ExGenRandom(1);
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C66BE0;
  xmmword_140C66BE0 = 0LL;
  xmmword_140C66BF0 = 0LL;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x100000) == 0 )
    BYTE13(xmmword_140C66BF0) &= ~0x20u;
  return 1LL;
}
