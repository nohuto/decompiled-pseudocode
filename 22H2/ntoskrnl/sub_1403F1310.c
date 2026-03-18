/*
 * XREFs of sub_1403F1310 @ 0x1403F1310
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140B147A0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1403F1310(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 280))(a1);
}
