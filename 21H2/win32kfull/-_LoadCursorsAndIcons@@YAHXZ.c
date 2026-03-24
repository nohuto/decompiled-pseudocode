/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C00259E0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00249F4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 _LoadCursorsAndIcons(void)
{
  __int64 v0; // rdi
  struct tagCURSOR *i; // rbx
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcess() == gpepCSRSS )
  {
    v0 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = (struct tagCURSOR *)*((_QWORD *)i + 4) )
    {
      if ( *((_WORD *)i + 37) == 1 )
      {
        if ( *((struct tagCURSOR **)i + 6) == i )
        {
          v2 = *((unsigned __int16 *)i + 32);
          v3 = v2 - 100;
          if ( (unsigned int)(v2 - 100) > 0x12 || gasyscur[69 * v2 - 6899] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 720LL);
          zzzInternalSetSystemCursor((__int64)i, v3, (const struct _UNICODE_STRING *)((char *)i + 56), 0);
        }
      }
      else if ( *((_WORD *)i + 37) == 3 )
      {
        v5 = 552 * (*((unsigned __int16 *)i + 32) - 100LL);
        *((_QWORD *)i + 8) = *(unsigned __int16 *)((char *)&gasysico + v5);
        if ( (*((_DWORD *)i + 20) & 4) != 0 )
        {
          v6[1] = i;
          v6[0] = (char *)&gasysico + v5 + 8;
          HMAssignmentLock(v6);
        }
        else
        {
          *(_QWORD *)(gpsi + 6968LL) = *(_QWORD *)i;
        }
      }
    }
    if ( qword_1C03317D0 )
      v0 = *(_QWORD *)qword_1C03317D0;
    *(_QWORD *)(gpsi + 6976LL) = v0;
  }
  return 1LL;
}
