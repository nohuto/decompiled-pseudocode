__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        va_list argList,
        char a6)
{
  unsigned int v7; // r12d
  __int64 result; // rax
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  const char *CurrentIrql; // rsi
  unsigned __int8 v18; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rdx
  struct _EX_RUNDOWN_REF *v21; // rbx
  unsigned int v22; // esi
  void (__fastcall *Count)(__int128 *, _QWORD, _QWORD); // r12
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  char v29[96]; // [rsp+0h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+0h]
  NTSTATUS v31; // [rsp+84h] [rbp+4h]
  NTSTRSAFE_PCSTR pszFormat; // [rsp+88h] [rbp+8h]
  __int128 v33; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp+20h]

  pszFormat = a4;
  v7 = a2;
  v30 = a2;
  v33 = 0LL;
  if ( !(unsigned int)NtQueryDebugFilterState(a2, a3) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v31 = 0;
  v12 = 0;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v29;
    v12 += 128;
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v34 = v13;
    v14 = v12 - 1;
    if ( v13 <= v14 )
      v14 = v13;
    memmove(v29, Src, v14);
    v11 = RtlStringCbVPrintfA(&v29[v14], v12 - v14, pszFormat, argList);
    v31 = v11;
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
  *((_QWORD *)&v33 + 1) = v10;
  LOWORD(v33) = v15;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v16 = 0LL;
    CurrentIrql = (const char *)KeGetCurrentIrql();
    pszFormat = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v18 == 12 )
            LODWORD(v20) = 4096;
          else
            v20 = (-1LL << (v18 + 1)) & 0x1FFC;
          SchedulerAssist[5] |= v20;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
    v21 = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      v22 = v30;
      do
      {
        if ( ExAcquireRundownProtection_0(v21 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int128 *, _QWORD, _QWORD))v21[-1].Count;
          if ( v16 )
            ExReleaseRundownProtection_0(v16 + 1);
          v16 = v21 - 3;
          Count(&v33, v22, a3);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
        }
        v21 = (struct _EX_RUNDOWN_REF *)v21->Count;
      }
      while ( v21 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      LOBYTE(CurrentIrql) = (_BYTE)pszFormat;
      v7 = v30;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v16 )
      ExReleaseRundownProtection_0(v16 + 1);
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v28 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
    }
  }
  result = DebugPrint(&v33, v7, a3);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
