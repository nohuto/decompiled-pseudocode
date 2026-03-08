/*
 * XREFs of KeGuardDispatchICall @ 0x140B107A0
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DDB70 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1403DEA50 (KiSwInterruptDispatch.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     sub_1403EBDF0 @ 0x1403EBDF0 (sub_1403EBDF0.c)
 *     sub_1403EC00C @ 0x1403EC00C (sub_1403EC00C.c)
 *     sub_1403EC068 @ 0x1403EC068 (sub_1403EC068.c)
 *     sub_1403EC0EC @ 0x1403EC0EC (sub_1403EC0EC.c)
 *     sub_1403ED020 @ 0x1403ED020 (sub_1403ED020.c)
 *     RtlpComputeEpilogueOffset @ 0x1403ED6A8 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0A7A8 @ 0x140B0A7A8 (sub_140B0A7A8.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B0E020 @ 0x140B0E020 (sub_140B0E020.c)
 *     sub_140B0F1A0 @ 0x140B0F1A0 (sub_140B0F1A0.c)
 *     sub_140B0FCB0 @ 0x140B0FCB0 (sub_140B0FCB0.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     sub_140B310C4 @ 0x140B310C4 (sub_140B310C4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
