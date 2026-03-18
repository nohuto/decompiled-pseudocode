/*
 * XREFs of KeGuardDispatchICall @ 0x140B147A0
 * Callers:
 *     KiDecodeMcaFault @ 0x1403E3090 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403E3F70 (KiSwInterruptDispatch.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     sub_1403F1310 @ 0x1403F1310 (sub_1403F1310.c)
 *     sub_1403F152C @ 0x1403F152C (sub_1403F152C.c)
 *     sub_1403F1588 @ 0x1403F1588 (sub_1403F1588.c)
 *     sub_1403F160C @ 0x1403F160C (sub_1403F160C.c)
 *     sub_1403F2540 @ 0x1403F2540 (sub_1403F2540.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F2BC8 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0E7A8 @ 0x140B0E7A8 (sub_140B0E7A8.c)
 *     sub_140B10838 @ 0x140B10838 (sub_140B10838.c)
 *     sub_140B12020 @ 0x140B12020 (sub_140B12020.c)
 *     sub_140B131A0 @ 0x140B131A0 (sub_140B131A0.c)
 *     sub_140B13CB0 @ 0x140B13CB0 (sub_140B13CB0.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     sub_140B350C4 @ 0x140B350C4 (sub_140B350C4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
