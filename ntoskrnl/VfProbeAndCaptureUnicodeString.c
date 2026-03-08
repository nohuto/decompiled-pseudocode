/*
 * XREFs of VfProbeAndCaptureUnicodeString @ 0x140ABF240
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADA920 (VfSetVerifierInformationEx.c)
 * Callees:
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140ABF27C (VfProbeAndCaptureUnicodeStringBuffer.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeString(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v3 = a2;
  *(_DWORD *)a1 = *(_DWORD *)v3;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 8);
  return VfProbeAndCaptureUnicodeStringBuffer(a1, (unsigned int)a3, a3, v3);
}
