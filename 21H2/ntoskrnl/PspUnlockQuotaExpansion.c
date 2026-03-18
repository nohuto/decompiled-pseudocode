/*
 * XREFs of PspUnlockQuotaExpansion @ 0x140243794
 * Callers:
 *     PspReturnResourceQuota @ 0x140243648 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1402436C8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403DAB6C (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x1405E0320 (PspExpandLimit.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockQuotaExpansion(__int64 a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  char v6; // r9
  struct _KTHREAD *v7; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r8d
  bool v13; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8

  v2 = a1 + 16;
  v3 = a2;
  if ( *(_DWORD *)a1 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(a1 + 16);
    v7 = KeGetCurrentThread();
    if ( v2 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v7->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&v7[1].Process;
    v10 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v10
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v11 = (unsigned int)(v11 + 1);
      p_Process += 96;
      if ( (unsigned int)v11 >= 6 )
        goto LABEL_22;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v11, v10);
        _disable();
      }
      v12 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      result = (unsigned __int8)p_Process[16];
      v7->AbEntrySummary |= 1 << result;
      _enable();
      if ( v12 )
        result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, v2, v12);
      goto LABEL_18;
    }
LABEL_22:
    result = *((unsigned int *)&v7->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v2, SessionId, 0LL);
    _enable();
LABEL_18:
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
