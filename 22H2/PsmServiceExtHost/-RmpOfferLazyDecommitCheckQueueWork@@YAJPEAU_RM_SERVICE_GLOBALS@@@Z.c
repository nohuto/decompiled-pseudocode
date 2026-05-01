/*
 * XREFs of ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180073850
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18007591C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180031DC0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(struct _RM_SERVICE_GLOBALS *a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-30h] BYREF

  v1 = (_QWORD *)((char *)a1 + 216);
  if ( (*((_BYTE *)a1 + 240) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v7);
    v4 = v7 - v1[4];
    if ( v4 > 10000 * (unsigned __int64)*((unsigned int *)v1 + 10) )
    {
      if ( (*((_BYTE *)a1 + 2712) & 1) != 0 )
      {
        return (unsigned int)-1073741058;
      }
      else
      {
        RmpPartitionTableActOnActivePartitions(
          (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
          v4,
          (int (*)(struct _RM_PARTITION *, void *))RmpOfferLazyDecommitQueuePartitionHosts,
          v1);
        if ( (_QWORD *)v1[1] == v1 + 1 )
        {
          return (unsigned int)-1073740704;
        }
        else
        {
          v3 = 0;
          if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
            tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18009D7FD, 0LL, 0LL, 2u, &v8);
          TpPostWork(*v1);
          *((_DWORD *)v1 + 6) |= 1u;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741199;
    }
  }
  return v3;
}
