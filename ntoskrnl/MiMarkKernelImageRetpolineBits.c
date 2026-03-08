/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140A31774
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14036905C (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x140A315C8 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140A317C0 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined(v5)) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
