/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140A50CF0
 * Callers:
 *     MiInitializeSystemVa @ 0x140A4F300 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  dword_140C4E278 = (unsigned __int8)ExGenRandom(1);
  xmmword_140C4E258 = 0LL;
  BitMapHeader.SizeOfBitMap = 256;
  xmmword_140C4E268 = 0LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C4E258;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x200000) == 0 )
    *((_DWORD *)&xmmword_140C4E258 + 7) &= ~0x2000u;
}
