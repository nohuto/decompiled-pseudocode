/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140272800
 * Callers:
 *     PopPrintEx @ 0x140272730 (PopPrintEx.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     vDbgPrintEx @ 0x1402727D0 (vDbgPrintEx.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     IopDebugPrint @ 0x14050D9D4 (IopDebugPrint.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x140585750 (DbgPrintReturnControlC.c)
 *     vDbgPrintExWithPrefix @ 0x140585BD0 (vDbgPrintExWithPrefix.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     NtQueryDebugFilterState @ 0x140272960 (NtQueryDebugFilterState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlStringCbVPrintfA @ 0x14037141C (RtlStringCbVPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     DbgBreakPointWithStatus @ 0x140407A90 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x140407AA0 (DebugPrint.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        ULONG ComponentId,
        ULONG Level,
        const char *a4,
        va_list argList,
        char a6)
{
  __int64 result; // rax
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v18; // cl
  _DWORD *SchedulerAssist; // r9
  struct _EX_RUNDOWN_REF *v20; // rbx
  struct _EX_RUNDOWN_REF *v21; // r14
  void (__fastcall *Count)(__int128 *, _QWORD, _QWORD); // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  char v27[96]; // [rsp+0h] [rbp-80h] BYREF
  NTSTATUS v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+88h] [rbp+8h] BYREF
  NTSTRSAFE_PCSTR pszFormat; // [rsp+98h] [rbp+18h]
  unsigned __int64 v31; // [rsp+A0h] [rbp+20h]

  pszFormat = a4;
  v29 = 0LL;
  if ( !NtQueryDebugFilterState(ComponentId, Level) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v28 = 0;
  v12 = 0;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v27;
    v12 += 128;
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v31 = v13;
    v14 = v12 - 1;
    if ( v13 <= v14 )
      v14 = v13;
    memmove(v27, Src, v14);
    v11 = RtlStringCbVPrintfA(&v27[v14], v12 - v14, pszFormat, argList);
    v28 = v11;
    if ( v11 >= 0 )
      break;
  }
  while ( v11 == -2147483643 );
  if ( v11 == -2147483643 )
  {
    v10[v12 - 2] = 10;
    LOWORD(v15) = v12 - 1;
    v10[v12 - 1] = 0;
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v10[v15] );
  }
  *((_QWORD *)&v29 + 1) = v10;
  LOWORD(v29) = v15;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xCu )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v18 + 1)) & 0x1FFC;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
    v20 = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      do
      {
        v21 = v20 - 3;
        if ( ExAcquireRundownProtection(v20 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int128 *, _QWORD, _QWORD))v21[2].Count;
          if ( v16 )
            ExReleaseRundownProtection(v16 + 1);
          v16 = v21;
          Count(&v29, ComponentId, Level);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
          v20 = (struct _EX_RUNDOWN_REF *)v21[3].Count;
        }
        else
        {
          v20 = (struct _EX_RUNDOWN_REF *)v20->Count;
        }
      }
      while ( v20 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v16 )
      ExReleaseRundownProtection(v16 + 1);
    if ( CurrentIrql < 0xCu )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  result = DebugPrint(&v29, ComponentId, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
