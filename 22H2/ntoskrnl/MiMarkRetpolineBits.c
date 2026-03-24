/*
 * XREFs of MiMarkRetpolineBits @ 0x1408D0D04
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0CB8 (MiMarkKernelImageRetpolineBits.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A925BC (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14027E980 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140297080 (RtlSetBitsEx.c)
 *     RtlAreBitsClearEx @ 0x1402C9680 (RtlAreBitsClearEx.c)
 *     MiSplitBitmapPages @ 0x14030B840 (MiSplitBitmapPages.c)
 *     MiAddressToRetpolineBit @ 0x140543F2C (MiAddressToRetpolineBit.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r8d

  v2 = MiAddressToRetpolineBit(a1);
  v4 = MiAddressToRetpolineBit((v3 + v1 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v5 = v4;
  v6 = v4 - v2;
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140C4CC58, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C4CC60 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C4CC58, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C4CC58, v2, v6);
  }
  return 0LL;
}
