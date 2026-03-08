/*
 * XREFs of ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01EB418
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndSendFindMyPenWnf(LARGE_INTEGER *this, const struct CPointerInputFrame *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  LARGE_INTEGER v8; // r9
  unsigned __int128 v9; // rax
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rax

  v2 = *((_QWORD *)a2 + 32);
  if ( (*(_DWORD *)(v2 + 360) & 8) == 0 || (v4 = *(_QWORD *)(v2 + 16), v5 = 0, (*(_DWORD *)(v4 + 184) & 0x8000) != 0) )
    v5 = 1;
  if ( *((_DWORD *)a2 + 12) )
  {
    v6 = *((_QWORD *)a2 + 30);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 168) == 3 )
      {
        if ( v5 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v9 = (unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL;
          v10.QuadPart = this[16].QuadPart + 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
          if ( v10.QuadPart < (unsigned __int64)PerformanceCounter.QuadPart )
          {
            this[16] = PerformanceCounter;
            v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                    (LARGE_INTEGER)v10.QuadPart,
                    *((_QWORD *)&v9 + 1),
                    (LARGE_INTEGER)PerformanceCounter.QuadPart,
                    (LARGE_INTEGER)v8.QuadPart);
            if ( (int)ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, v11) < 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17197);
          }
        }
      }
    }
  }
}
