/*
 * XREFs of ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00BF314
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0017C74 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00748F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BF024 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memcmp @ 0x1C0040730 (memcmp.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00BF51C (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 */

__int64 __fastcall ndisCaptureStackTrace()
{
  USHORT v1; // ax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  PVOID *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  KIRQL v7; // r13
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rax
  struct _NDIS_STACK_TRACE *v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  _DWORD *PoolWithTag; // rax
  struct _NDIS_STACK_TRACE *v13; // [rsp+20h] [rbp-50h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-48h] BYREF
  PVOID BackTrace[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h]

  Context.Signature = 0LL;
  if ( !LOBYTE(WPP_MAIN_CB.Dpc.SystemArgument2) )
    return 0LL;
  *(_OWORD *)&Context.ChainHead = 0LL;
  v1 = RtlCaptureStackBackTrace(3u, 4u, BackTrace, 0LL);
  v2 = 0;
  v3 = 1;
  if ( !v1 )
    goto LABEL_7;
  v4 = BackTrace;
  v5 = v1;
  do
  {
    v2 ^= *(_DWORD *)v4++;
    --v5;
  }
  while ( v5 );
  if ( v2 <= 1 )
LABEL_7:
    v2 = 2;
  v6 = v2 & 0x3FFFFFF;
  if ( v1 < 4u )
    memset(&BackTrace[v1], 0, 8LL * (4 - (unsigned int)v1));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1);
  v8 = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData, v6, &Context);
  v13 = (struct _NDIS_STACK_TRACE *)v8;
  v9 = (struct _NDIS_STACK_TRACE *)v8;
  if ( !v8 )
    goto LABEL_19;
  v10 = 0;
  v11 = (LODWORD(v8[1].Linkage.Flink) >> 30) + 1;
  if ( LODWORD(v8[1].Linkage.Flink) >> 30 != -1 )
  {
    while ( memcmp((char *)v9 + 32 * v10 + 32, BackTrace, 0x20uLL) )
    {
      if ( ++v10 >= v11 )
        goto LABEL_14;
    }
LABEL_17:
    if ( v9 )
    {
      *((_DWORD *)v9 + 6) ^= (*((_DWORD *)v9 + 6) ^ (*((_DWORD *)v9 + 6) + 1)) & 0x3FFFFFFF;
LABEL_22:
      v3 = v6;
      goto LABEL_23;
    }
LABEL_19:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6B73444Eu);
    if ( PoolWithTag )
    {
      PoolWithTag[6] = 1;
      *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)BackTrace;
      *((_OWORD *)PoolWithTag + 3) = v16;
      RtlInsertEntryHashTable(
        (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.DpcData,
        (PRTL_DYNAMIC_HASH_TABLE_ENTRY)PoolWithTag,
        v6,
        &Context);
    }
    else
    {
      ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
      v6 = 1;
    }
    goto LABEL_22;
  }
LABEL_14:
  if ( ndisExpandStackTrace(&v13, &Context, (unsigned __int64 *)BackTrace) )
  {
    v9 = v13;
    goto LABEL_17;
  }
  ++LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
LABEL_23:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.SystemArgument1, v7);
  return v3;
}
