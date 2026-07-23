/*
 * XREFs of LdrEnumerateLoadedModules @ 0x18005EDC0
 * Callers:
 *     RtlLockModuleSection @ 0x18005EC80 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl LdrEnumerateLoadedModules(BOOLEAN ReservedFlag, PLDR_ENUM_CALLBACK EnumProc, PVOID Context)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+20h]

  if ( ReservedFlag || !EnumProc )
    return -1073741811;
  v11 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v12 = 1;
  }
  else
  {
    v5 = 0;
    v12 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_18016C4D0; i != &qword_18016C4D0; i = (__int64 *)*i )
  {
    ((void (__fastcall *)(__int64 *, PVOID, char *))EnumProc)(i, Context, &v11);
    if ( v11 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15, 0);
  if ( !v5 )
    LdrpDropLastInProgressCount(v9, v8);
  return 0;
}
