/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C010A118
 * Callers:
 *     NtUserLoadCursorsAndIcons @ 0x1C00F5D90 (NtUserLoadCursorsAndIcons.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LoadCursorsAndIcons(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 i; // rbx
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    v3 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_WORD *)(i + 74) == 1 )
      {
        if ( *(_QWORD *)(i + 48) == i )
        {
          v5 = *(unsigned __int16 *)(i + 64);
          v6 = v5 - 100;
          if ( (unsigned int)(v5 - 100) > 0x12 || gasyscur[69 * v5 - 6899] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 487LL);
          zzzInternalSetSystemCursor(i, v6, (const struct _UNICODE_STRING *)(i + 56), 0);
        }
      }
      else if ( *(_WORD *)(i + 74) == 3 )
      {
        v8 = 552 * (*(unsigned __int16 *)(i + 64) - 100LL);
        *(_QWORD *)(i + 64) = *(unsigned __int16 *)((char *)&gasysico + v8);
        if ( (*(_DWORD *)(i + 80) & 4) != 0 )
        {
          v9[1] = i;
          v9[0] = (char *)&gasysico + v8 + 8;
          HMAssignmentLock(v9, 0LL);
        }
        else
        {
          *(_QWORD *)(gpsi + 6968LL) = *(_QWORD *)i;
        }
      }
    }
    if ( qword_1C035CCF0 )
      v3 = *(_QWORD *)qword_1C035CCF0;
    *(_QWORD *)(gpsi + 6976LL) = v3;
  }
  return 1LL;
}
