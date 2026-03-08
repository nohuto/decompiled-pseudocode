/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0248570
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceDwmProcess @ 0x1C00918D0 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0091914 (CheckOrAcquireDwmStateLock.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *v6; // rsi
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r15
  signed int v12; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v16; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v6 = 0LL;
  v16 = 0LL;
  v11 = CheckOrAcquireDwmStateLock(a1, (__int64)a2, a3, a4);
  Handle = 0LL;
  v12 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v6 = (struct _KPROCESS *)ReferenceDwmProcess();
    v16 = v6;
    if ( !v6 )
      v12 = -1073741811;
  }
  if ( v12 < 0 )
    goto LABEL_10;
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  v12 = ObDuplicateObject(CurrentProcess, a1, v6, &Handle, 0, 0, 6, 1);
  if ( v12 < 0 )
    goto LABEL_10;
  v8 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v8 > MmUserProbeAddress )
  {
    v8 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  *a2 = Handle;
  if ( v12 < 0 )
  {
LABEL_10:
    if ( Handle )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v6, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v11 )
    GreUnlockDwmState(v8);
  return (unsigned int)v12;
}
