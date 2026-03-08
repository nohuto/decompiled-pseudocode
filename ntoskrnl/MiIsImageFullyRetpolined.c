/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140A315C8
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A31774 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402F4538 (RtlIsImageFullyRetpolined.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
}
