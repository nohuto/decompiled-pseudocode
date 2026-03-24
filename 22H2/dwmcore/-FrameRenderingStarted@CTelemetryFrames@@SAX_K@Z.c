/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180071B24
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180070200 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028600 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180028A44 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_180347150 )
  {
    AcquireSRWLockExclusive(&stru_180347660);
    GetCurrentThreadId();
    byte_180347150 = 0;
    dword_180347668 = 0;
    xmmword_180347158 = xmmword_180347140;
    ReleaseSRWLockExclusive(&stru_180347660);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_180347118;
  qword_180347118 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_180347401 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18034728C;
  if ( !dword_1803472A8 )
  {
    *(_QWORD *)&xmmword_1803473F0 = a1;
    v7 = *((_QWORD *)qword_180347460 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_1803472BC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_180347130 | dword_1803472A0;
  dword_1803472A0 |= dword_180347130;
  byte_180347124 = byte_180347125;
  if ( byte_180347125 )
  {
    byte_180347125 = 0;
    dword_1803472A0 = v4 | 0x100;
  }
  dword_180347130 = 0;
  v5 = _InterlockedExchange(&dword_180347620, 0);
  dword_1803472A4 |= v5;
  ++dword_1803472A8;
  dword_180347120 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_1803472A0 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180347328;
  dword_180347630 = dword_180347330;
  dword_18034762C = dword_18034732C;
  dword_180347634 = dword_180347334;
}
