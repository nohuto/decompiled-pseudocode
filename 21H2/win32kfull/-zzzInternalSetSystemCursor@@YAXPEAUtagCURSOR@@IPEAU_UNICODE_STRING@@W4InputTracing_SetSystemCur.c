/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1C0C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A19B8 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0115D4C (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CFA40 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D525C (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00A0F38 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C00A1DDC (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00A1F2C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00BC910 (RtlInitUnicodeStringOrId.c)
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1C0113208 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(
        __int64 a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3,
        unsigned int a4)
{
  unsigned __int64 v6; // rdi
  struct _UNICODE_STRING *v8; // rsi
  __int64 v10; // rdx
  PWSTR Buffer; // rdx
  ULONG v12; // r8d
  __int64 v13; // rsi
  _BOOL8 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  v6 = 552LL * a2;
  v8 = (struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2];
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v8, (PCWSTR)&gasyscur[v6 / 8 + 4]);
      v8->MaximumLength = 520;
      RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2], a3, v12);
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
  v13 = *(_QWORD *)(v6 + gasyscur[0] + 8);
  v14 = v13 == 0;
  if ( v14 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( v13 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v6 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess(v14, v10) != gpepCSRSS
      || (v15 = *(_QWORD *)(a1 + 64)) == 0
      || (v15 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v15 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpepCSRSS);
    }
    v21[1] = a1;
    v16 = *(unsigned __int16 *)(v6 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v16;
    v21[0] = &gasyscur[v6 / 8 + 1];
    HMAssignmentLock(v21, 0LL);
  }
  InputTraceLogging::Cursor::SetSystemCursor(*(_QWORD *)(v6 + gasyscur[0] + 8), a2, a3, a4);
  v22 = 0LL;
  v23 = 0LL;
  ThreadLock(*(_QWORD *)(v6 + gasyscur[0] + 8), (__int64 *)&v22);
  xxxEnsureDpiCursorsForSysCur(a2);
  return ThreadUnlock1(v18, v17, v19);
}
