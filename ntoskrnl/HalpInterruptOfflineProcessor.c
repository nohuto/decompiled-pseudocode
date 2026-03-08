/*
 * XREFs of HalpInterruptOfflineProcessor @ 0x14051EA50
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140A94318 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn HalpInterruptOfflineProcessor(volatile signed __int32 *a1)
{
  ULONG_PTR v1; // r10
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int128 *); // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v1 = HalpInterruptController;
  v8 = 0LL;
  LODWORD(v9) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v5) = 0x8000;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v5;
  }
  v6 = *(void (__fastcall **)(__int64, __int128 *))(v1 + 80);
  if ( v6 )
  {
    v9 = 0LL;
    v7 = *(_QWORD *)(v1 + 16);
    v8 = 0LL;
    LODWORD(v8) = 4;
    v6(v7, &v8);
  }
  _InterlockedDecrement(&HalpInterruptProcessorsStarted);
  _InterlockedIncrement(a1);
  __halt();
}
