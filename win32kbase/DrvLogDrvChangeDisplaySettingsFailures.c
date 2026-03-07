__int64 __fastcall DrvLogDrvChangeDisplaySettingsFailures(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax

  v3 = a1;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v5 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1432), 1u) + 1) & 7;
  v6 = 56 * v5;
  v7 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *(_DWORD *)(v6 + v4 + 1448) = v3;
  *(_QWORD *)(v6 + v4 + 1440) = v7 * TimeIncrement;
  *(_DWORD *)(v6 + v4 + 1452) = a2;
  *(_DWORD *)(56 * (v5 + 26) + v4) = (unsigned int)PsGetCurrentThreadId();
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)(56 * v5 + v4 + 1464), 0LL);
  return DrvDxgkLogCodePointPacket(119LL, v3, 0, 0);
}
