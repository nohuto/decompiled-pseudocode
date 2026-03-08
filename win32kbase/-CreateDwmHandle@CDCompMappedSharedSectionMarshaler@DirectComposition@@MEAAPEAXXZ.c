/*
 * XREFs of ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1C00916C0
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091640 (-EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0261B4C (-PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1C00918D0 (ReferenceDwmProcess.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void *__fastcall DirectComposition::CDCompMappedSharedSectionMarshaler::CreateDwmHandle(PVOID *this)
{
  struct _KPROCESS *v2; // rax
  struct _KPROCESS *v3; // rbx
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  GreLockDwmState();
  v2 = (struct _KPROCESS *)ReferenceDwmProcess();
  v3 = v2;
  if ( v2 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v2, &ApcState);
    ObOpenObjectByPointer(this[7], 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v3);
  }
  GreUnlockDwmState();
  return Handle;
}
