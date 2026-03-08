/*
 * XREFs of PfpLogEventRequest @ 0x14097ADD8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x14028D0D0 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x14035B470 (MmGetDefaultPagePriority.c)
 *     PfGenerateTrace @ 0x14073A870 (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x14085E358 (MmIssueMemoryListCommand.c)
 *     PfTSetTracingPriority @ 0x140A9D61C (PfTSetTracingPriority.c)
 */

__int64 __fastcall PfpLogEventRequest(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DefaultPagePriority; // rcx
  int v4; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x1Fu) - 2 <= 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_OWORD *)v2 = xmmword_140C650D0;
    *(_QWORD *)(v2 + 16) = unk_140C650E0;
    if ( (*(_DWORD *)a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v2 + 24) >> 5) & 7;
    else
      DefaultPagePriority = (unsigned int)MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_140D0BE94, 0xFFFFFFFE);
  v4 = dword_140C64C2C
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v6 = (*(_DWORD *)a1 >> 6) & 1;
    MmIssueMemoryListCommand((unsigned int *)&v6, 4u, 0);
    PfGenerateTrace((__int64)&Thread, 0);
  }
  return PfLogEvent(*(_DWORD *)a1 & 0x1F, v4, *(const void **)(a1 + 8), *(_DWORD *)a1 >> 7);
}
