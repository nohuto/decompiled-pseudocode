/*
 * XREFs of HalpGetChipHacks @ 0x140B354FC
 * Callers:
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpGetChipHacks(__int16 a1, __int16 a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v5; // rcx
  _WORD *i; // rax
  unsigned int v8; // edx
  int v9; // edx

  if ( !HalpErrataChipHacksInitialized )
    KeBugCheckEx(
      0x5Cu,
      0x8000uLL,
      (ULONG_PTR)"HalpGetChipHacks",
      (ULONG_PTR)"minkernel\\hals\\lib\\errata\\chiphacks.c",
      0x127uLL);
  v5 = 0LL;
  if ( !HalpChipHackCount )
    return 3221226021LL;
  for ( i = (_WORD *)HalpChipHacksTable; *i != a1 || i[1] != a2; i += 4 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= HalpChipHackCount )
      return 3221226021LL;
  }
  v8 = *(_DWORD *)(HalpChipHacksTable + 8 * v5 + 4);
  if ( a3 && HIBYTE(v8) && a3 >= HIBYTE(v8) )
    v8 >>= 12;
  v9 = v8 & 0xFFF;
  *a4 = v9;
  if ( (HalpWAETDeviceFlags & 2) != 0 )
    *a4 = v9 & 0xFFFFFFFE;
  return 0LL;
}
