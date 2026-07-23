/*
 * XREFs of MiIsImageFullyRetpolined @ 0x1408D0B04
 * Callers:
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0CB8 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x140372608 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
}
