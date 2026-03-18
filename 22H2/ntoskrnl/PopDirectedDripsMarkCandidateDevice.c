/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x140983A5C
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14099C0A0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F904 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x14099F3E8 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 824));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140C3F1F4;
    ++dword_140C3F3D8;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
