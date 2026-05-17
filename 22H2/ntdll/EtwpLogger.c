/*
 * XREFs of EtwpLogger @ 0x18004C5E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpSendSessionNotification @ 0x1800481EC (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFlushActiveBuffers @ 0x18004C7E4 (EtwpFlushActiveBuffers.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x18004F8C0 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009D680 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009D6A0 (ZwSetEvent.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 a1)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  v14 = 2;
  NtSetInformationThread(-2LL, 3LL, &v14, 4LL);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 344) )
      v2 = (LARGE_INTEGER *)(a1 + 344);
    v3 = NtWaitForSingleObject(*(HANDLE *)(a1 + 128), 0, v2);
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v6 = *(_DWORD *)(a1 + 332);
    v7 = active;
    if ( (v6 & 1) != 0 && active >= 0 && !v4 )
    {
      v10 = EtwpFlushActiveBuffers(a1, 1LL);
      v6 = *(_DWORD *)(a1 + 332);
      v7 = v10;
    }
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0);
      v11 = *(void **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v12 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0, 0);
      *(_DWORD *)(a1 + 40) = v12;
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = *(_DWORD *)(a1 + 332);
        *(_QWORD *)(a1 + 144) = v11;
        if ( (v13 & 4) != 0 )
          v7 = 0;
      }
      else
      {
        NtClose(v11);
        v13 = *(_DWORD *)(a1 + 332);
        if ( (v13 & 1) != 0 )
        {
          EtwpSendSessionNotification(a1, 1, 0);
          v13 = *(_DWORD *)(a1 + 332);
        }
      }
      v6 = v13 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 332) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      *(_DWORD *)(a1 + 332) = v6;
      if ( *(_QWORD *)(a1 + 144) )
      {
        EtwpFinalizeLogFileHeader(a1, 1);
        v6 = *(_DWORD *)(a1 + 332);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      *(_DWORD *)(a1 + 332) = v6 & 0xFFFFFFF9;
      ZwSetEvent(*(_QWORD *)(a1 + 136), 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v8 = EtwpFinalizeLogFileHeader(a1, 0);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0xC0070000;
  v9 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v8;
  ZwSetEvent(v9, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0LL);
}
