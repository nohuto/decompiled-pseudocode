void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_1803E2BE9 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_1803E2BE9 = 0;
    dword_1803E6EC8 = 0;
    xmmword_1803E2C10 = xmmword_1803E2C00;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_1803E2BD8;
  qword_1803E2BD8 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  if ( v3 > 0x2A )
  {
    ++dword_1803E29FC;
    byte_1803E2B89 = 1;
  }
  else
  {
    byte_1803E2B89 = 0;
  }
  if ( !dword_1803E2A18 )
  {
    *(_QWORD *)&xmmword_1803E2B60 = a1;
    v7 = *((_QWORD *)qword_1803E2C80 + 5);
    if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) >> 5) )
      dword_1803E2A2C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_1803E2BE0 | dword_1803E2A10;
  dword_1803E2A10 |= dword_1803E2BE0;
  byte_1803E2B8A = byte_1803E2BE8;
  if ( byte_1803E2BE8 )
  {
    byte_1803E2BE8 = 0;
    dword_1803E2A10 = v4 | 0x100;
  }
  dword_1803E2BE0 = 0;
  v5 = _InterlockedExchange(&dword_1803E3350, 0);
  dword_1803E2A14 |= v5;
  ++dword_1803E2A18;
  dword_1803E2BE4 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_1803E2A10 |= 1u;
  dword_1803E3358 = dword_1803E2A98;
  dword_1803E3360 = dword_1803E2AA0;
  dword_1803E335C = dword_1803E2A9C;
  dword_1803E3364 = dword_1803E2AA4;
}
