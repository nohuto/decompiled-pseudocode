/*
 * XREFs of MiMarkRetpolineBits @ 0x140A344F0
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140A344A4 (MiMarkKernelImageRetpolineBits.c)
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B9AA6C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14020B208 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x14028B2A0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14028BA00 (RtlClearBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140350DE0 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x140419A84 (MiAddressToRetpolineBit.c)
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
  if ( v7 || RtlAreBitsClearEx((unsigned __int64 *)&qword_140C65950, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C65958 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C65950, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C65950, v2, v6);
  }
  return 0LL;
}
