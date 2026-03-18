/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C00C2C34
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00C2BA0 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(__int32 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  CInputThreadBase *v5; // rdi
  char *v6; // rbx
  __int64 KeyboardProcessor; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( !CInputThreadBase::IsInputThread(gpInputThread)
    || (v5 = gpInputThread,
        v6 = (char *)gpInputThread + 8,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v6, 0LL),
        LODWORD(v5) = *((_DWORD *)v5 + 6),
        ExReleasePushLockSharedEx(v6, 0LL),
        KeLeaveCriticalRegion(),
        (_DWORD)v5 != 2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  }
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 16), a1);
  return 0LL;
}
