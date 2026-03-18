/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0211930
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0090A30 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0090A74 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2)
{
  struct _KPROCESS *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r15
  signed int v10; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v14; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v9 = CheckOrAcquireDwmStateLock();
  Handle = 0LL;
  v10 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = (struct _KPROCESS *)ReferenceDwmProcess();
    v14 = v4;
    if ( !v4 )
      v10 = -1073741811;
  }
  if ( v10 < 0
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8),
        v10 = ObDuplicateObject(CurrentProcess, a1, v4, &Handle, 0, 0, 6, 1),
        v10 < 0) )
  {
    if ( Handle )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v4, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v9 )
    GreUnlockDwmState();
  return (unsigned int)v10;
}
