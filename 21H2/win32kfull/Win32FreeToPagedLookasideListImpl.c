/*
 * XREFs of Win32FreeToPagedLookasideListImpl @ 0x1C00D40F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C009F668 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DEB08 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall Win32FreeToPagedLookasideListImpl(__int64 a1, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *v2; // rdi
  PDRIVER_CONTROL DeviceRoutine; // rsi
  char result; // al
  __int64 (__fastcall *v6)(struct _SLIST_ENTRY *); // rax
  NSInstrumentation::CPointerHashTable *v7; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( !*(_BYTE *)a1 )
  {
    ++*(_DWORD *)(a1 + 44);
    if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 16)) < *(_WORD *)(a1 + 32) )
      return (unsigned __int8)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v2);
LABEL_5:
    v6 = *(__int64 (__fastcall **)(struct _SLIST_ENTRY *))(a1 + 72);
    ++*(_DWORD *)(a1 + 48);
    return v6(v2);
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 6);
  v2 = a2 - 1;
  v8 = 0LL;
  result = NSInstrumentation::CPointerHashTable::Remove(v7, (unsigned __int64)&a2[-1], (void **)&v8);
  if ( result )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *((NSInstrumentation::CPrioritizedWriterLock **)DeviceRoutine + 8),
      v8);
    ++*(_DWORD *)(a1 + 44);
    if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 16)) < *(_WORD *)(a1 + 32) )
      return (unsigned __int8)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v2);
    goto LABEL_5;
  }
  return result;
}
