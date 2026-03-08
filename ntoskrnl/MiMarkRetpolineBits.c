/*
 * XREFs of MiMarkRetpolineBits @ 0x140A317C0
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140A31774 (MiMarkKernelImageRetpolineBits.c)
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B9685C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     RtlAreBitsClearEx @ 0x1402E4560 (RtlAreBitsClearEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     MiSplitBitmapPages @ 0x14036C1A8 (MiSplitBitmapPages.c)
 *     MiAddressToRetpolineBit @ 0x140411694 (MiAddressToRetpolineBit.c)
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
  if ( v7 || RtlAreBitsClearEx((unsigned __int64 *)&qword_140C654D0, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C654D8 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C654D0, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C654D0, v2, v6);
  }
  return 0LL;
}
