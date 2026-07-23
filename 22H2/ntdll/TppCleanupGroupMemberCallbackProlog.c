/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x180020450
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180080780 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlSetThreadSubProcessTag @ 0x180020570 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180070F70 (TpCallbackMayRunLong.c)
 */

__int64 __fastcall TppCleanupGroupMemberCallbackProlog(_DWORD *Instance, __int64 a2)
{
  void *v4; // rcx

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 96));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *((_QWORD *)Instance + 10) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
  return RtlSetThreadWorkOnBehalfTicket((PVOID)(a2 + 128));
}
