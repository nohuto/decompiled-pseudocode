/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18004FACC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18004E9C8 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180036054 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800376EC (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_1803E5C28 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_1803E5C28 = 0;
    dword_1803E9FB8 = 0;
    xmmword_1803E5C18 = xmmword_1803E5C08;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_1803E5BD8;
  qword_1803E5BD8 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  if ( v3 > 0x2A )
  {
    ++dword_1803E59FC;
    byte_1803E5BE9 = 1;
  }
  else
  {
    byte_1803E5BE9 = 0;
  }
  if ( !dword_1803E5A18 )
  {
    *(_QWORD *)&xmmword_1803E5B60 = a1;
    v7 = *((_QWORD *)qword_1803E5C88 + 5);
    if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) >> 5) )
      dword_1803E5A2C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_1803E5C00 | dword_1803E5A10;
  dword_1803E5A10 |= dword_1803E5C00;
  byte_1803E5BEA = byte_1803E5BE4;
  if ( byte_1803E5BE4 )
  {
    byte_1803E5BE4 = 0;
    dword_1803E5A10 = v4 | 0x100;
  }
  dword_1803E5C00 = 0;
  v5 = _InterlockedExchange(&dword_1803E65D0, 0);
  dword_1803E5A14 |= v5;
  ++dword_1803E5A18;
  dword_1803E5BE0 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_1803E5A10 |= 1u;
  dword_1803E65D8 = dword_1803E5A98;
  dword_1803E65E0 = dword_1803E5AA0;
  dword_1803E65DC = dword_1803E5A9C;
  dword_1803E65E4 = dword_1803E5AA4;
}
