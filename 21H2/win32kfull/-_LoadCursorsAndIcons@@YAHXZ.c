/*
 * XREFs of ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0115D4C
 * Callers:
 *     NtUserLoadCursorsAndIcons @ 0x1C0115D10 (NtUserLoadCursorsAndIcons.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1C0C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LoadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct tagCURSOR *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    v2 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = (struct tagCURSOR *)*((_QWORD *)i + 4) )
    {
      v4 = (unsigned int)*((unsigned __int16 *)i + 37) - 1;
      if ( *((_WORD *)i + 37) == 1 )
      {
        if ( *((struct tagCURSOR **)i + 6) == i )
        {
          v5 = *((unsigned __int16 *)i + 32);
          v6 = v5 - 100;
          if ( (unsigned int)(v5 - 100) > 0x12 || (v4 = 552 * v5, gasyscur[69 * v5 - 6899]) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
          zzzInternalSetSystemCursor((__int64)i, v6, (const struct _UNICODE_STRING *)((char *)i + 56), 0);
        }
      }
      else if ( *((_WORD *)i + 37) == 3 )
      {
        v8 = 552 * (*((unsigned __int16 *)i + 32) - 100LL);
        *((_QWORD *)i + 8) = *(unsigned __int16 *)((char *)&gasysico + v8);
        if ( (*((_DWORD *)i + 20) & 4) != 0 )
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
    if ( qword_1C032CB00 )
      v2 = *(_QWORD *)qword_1C032CB00;
    *(_QWORD *)(gpsi + 6976LL) = v2;
  }
  return 1LL;
}
