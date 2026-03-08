/*
 * XREFs of VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0045B64
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
const signed __int64 *__fastcall VidSchiProcessIsrHwQueuePageFaulted(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  const signed __int64 *result; // rax
  __int64 v11; // rcx
  PSLIST_ENTRY v12; // rax
  struct _SLIST_ENTRY v13; // xmm1

  v2 = *(__int64 **)(a1 + 632);
  v4 = *(unsigned int *)(a2 + 44);
  v6 = *(unsigned int *)(a2 + 40);
  v7 = (unsigned int)v6 + *(unsigned __int8 *)(v4 + a1 + 88);
  v8 = (unsigned int)v7;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 704) )
    v2 += v7;
  v9 = *v2;
  if ( (*(_DWORD *)(v9 + 12) & 2) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, 0LL, v6, v4);
    __debugbreak();
  }
  result = *(const signed __int64 **)(a1 + 592);
  if ( !_bittest64(result, v8) )
  {
    result = (const signed __int64 *)*(unsigned int *)(v9 + 16);
    if ( (_DWORD)result != 1 )
    {
      if ( *(_DWORD *)(v9 + 16) == 2 )
      {
        v11 = *(unsigned __int16 *)(v9 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, v11, 0LL);
        __debugbreak();
      }
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v9 + 6272));
      if ( v12 )
      {
        v12[2].Next = (struct _SLIST_ENTRY *)v9;
        *(PSLIST_ENTRY)((char *)v12 + 40) = *(PSLIST_ENTRY)(a2 + 8);
        *(PSLIST_ENTRY)((char *)v12 + 56) = *(PSLIST_ENTRY)(a2 + 24);
        *(PSLIST_ENTRY)((char *)v12 + 72) = *(PSLIST_ENTRY)(a2 + 40);
        v13 = *(struct _SLIST_ENTRY *)(a2 + 56);
        LODWORD(v12->Next) = 12;
        *(PSLIST_ENTRY)((char *)v12 + 88) = v13;
        return (const signed __int64 *)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1776), v12 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v9 + 4));
        return (const signed __int64 *)((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
                                         0LL,
                                         0x40000LL,
                                         0xFFFFFFFFLL,
                                         L"The list of pending HW queue page faulted interrupts is full on node %d. There "
                                          "must be severe contention on the scheduler spin lock. This interrupt will be ignored.",
                                         *(unsigned __int16 *)(v9 + 4),
                                         0LL,
                                         0LL,
                                         0LL,
                                         0LL);
      }
    }
  }
  return result;
}
