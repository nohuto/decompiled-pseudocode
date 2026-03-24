/*
 * XREFs of KeGuardDispatchICall @ 0x140A11330
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DB640 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403DC520 (KiSwInterruptDispatch.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     sub_1403E9B70 @ 0x1403E9B70 (sub_1403E9B70.c)
 *     sub_1403E9D8C @ 0x1403E9D8C (sub_1403E9D8C.c)
 *     sub_1403E9DEC @ 0x1403E9DEC (sub_1403E9DEC.c)
 *     sub_1403E9E6C @ 0x1403E9E6C (sub_1403E9E6C.c)
 *     sub_1403EADD8 @ 0x1403EADD8 (sub_1403EADD8.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB464 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0C0FC @ 0x140A0C0FC (sub_140A0C0FC.c)
 *     sub_140A0E098 @ 0x140A0E098 (sub_140A0E098.c)
 *     sub_140A0EB30 @ 0x140A0EB30 (sub_140A0EB30.c)
 *     sub_140A0FD10 @ 0x140A0FD10 (sub_140A0FD10.c)
 *     sub_140A10830 @ 0x140A10830 (sub_140A10830.c)
 *     sub_140A1BFE4 @ 0x140A1BFE4 (sub_140A1BFE4.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     sub_140A37A14 @ 0x140A37A14 (sub_140A37A14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
