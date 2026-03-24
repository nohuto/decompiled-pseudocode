/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00249F4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00247A0 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C00259E0 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01D41AC (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DAE58 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0024C2C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0024D68 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0025544 (RtlInitUnicodeStringOrId.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00E165C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1C012941C (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(
        __int64 a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3,
        unsigned int a4)
{
  unsigned __int64 v6; // rdi
  struct _UNICODE_STRING *v8; // rsi
  PWSTR Buffer; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 552LL * a2;
  v8 = (struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2];
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v8, (PCWSTR)&gasyscur[v6 / 8 + 4]);
      v8->MaximumLength = 520;
      RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2], a3);
      v8->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v8, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString(v8, 0LL);
  }
  v11 = *(_QWORD *)(v6 + gasyscur[0] + 8);
  if ( (v11 == 0) != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1593LL);
  if ( v11 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v6 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess() != gpepCSRSS
      || (v12 = *(_QWORD *)(a1 + 64)) == 0
      || (v12 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v12 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1604LL);
    }
    v18[1] = a1;
    v13 = *(unsigned __int16 *)(v6 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v13;
    v18[0] = &gasyscur[v6 / 8 + 1];
    HMAssignmentLock(v18);
  }
  InputTraceLogging::Cursor::SetSystemCursor(*(_QWORD *)(v6 + gasyscur[0] + 8), a2, a3, a4);
  v19[2] = 0LL;
  v14 = *(_QWORD *)(v6 + gasyscur[0] + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v19;
  v19[1] = v14;
  if ( v14 )
    HMLockObject(v14);
  xxxEnsureDpiCursorsForSysCur(a2);
  return ThreadUnlock1(v16);
}
