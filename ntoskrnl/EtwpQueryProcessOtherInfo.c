/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14071DD1C
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     PsGetProcessSectionBaseAddress @ 0x140299400 (PsGetProcessSectionBaseAddress.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = RtlImageNtHeader(result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
