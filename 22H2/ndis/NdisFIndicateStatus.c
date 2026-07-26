/*
 * XREFs of NdisFIndicateStatus @ 0x1C0018C90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0040494 (-ndisReferenceRefNoCheck@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0069F8C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisIsStatusIndicationCloneable @ 0x1C006B7F0 (NdisIsStatusIndicationCloneable.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFIndicateStatus(NDIS_HANDLE NdisFilterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v3; // rax
  char *i; // rsi
  KIRQL v6; // r14
  int v7; // edx
  _OWORD *PoolWithTag; // rax
  int v9; // edx
  __int64 v10; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-9h] BYREF
  _QWORD Parameter[4]; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+88h] [rbp+3Fh]
  KIRQL NewIrql; // [rsp+B0h] [rbp+67h] BYREF

  v14 = 0LL;
  v3 = *((unsigned __int8 *)NdisFilterHandle + 288);
  Parameter[0] = 0LL;
  Parameter[1] = NdisFilterHandle;
  Parameter[2] = 0LL;
  Parameter[3] = StatusIndication;
  v13 = 0LL;
  if ( (_BYTE)v3 || KeExpandKernelStackAndCalloutEx(ndisFIndicateStatusWrapper, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    for ( i = (char *)NdisFilterHandle + 248; *(_QWORD *)i; i = (char *)(*(_QWORD *)i + 80LL) )
      ;
    v6 = NewIrql;
    if ( NewIrql < 2u )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)i = StatusIndication;
      StatusIndication->NdisReserved[0] = 0LL;
      StatusIndication->NdisReserved[1] = &Event;
      goto LABEL_12;
    }
    if ( (unsigned __int8)NdisIsStatusIndicationCloneable((unsigned int)StatusIndication->StatusCode) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, StatusIndication->StatusBufferSize + 112LL, 0x2020444Eu);
      *(_QWORD *)i = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)&StatusIndication->Header.Type;
        PoolWithTag[1] = *(_OWORD *)&StatusIndication->PortNumber;
        PoolWithTag[2] = *(_OWORD *)&StatusIndication->DestinationHandle;
        PoolWithTag[3] = *(_OWORD *)&StatusIndication->StatusBuffer;
        PoolWithTag[4] = *(_OWORD *)&StatusIndication->Guid.Data2;
        PoolWithTag[5] = *(_OWORD *)StatusIndication->NdisReserved;
        PoolWithTag[6] = *(_OWORD *)&StatusIndication->NdisReserved[2];
        *(_QWORD *)(*(_QWORD *)i + 48LL) = *(_QWORD *)i + 112LL;
        memmove(*(void **)(*(_QWORD *)i + 48LL), StatusIndication->StatusBuffer, StatusIndication->StatusBufferSize);
        v10 = *(_QWORD *)i;
        *(_QWORD *)(v10 + 80) = 0LL;
        *(_QWORD *)(v10 + 88) = 0LL;
        ndisReferenceRefNoCheck((PKSPIN_LOCK)NdisFilterHandle + 39, 1u);
LABEL_12:
        *((_BYTE *)NdisFilterHandle + 288) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
        *((_QWORD *)NdisFilterHandle + 19) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
        if ( v6 < 2u )
          ndisWaitForKernelObject(&Event);
        return;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          24,
          43,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      }
      ++*((_DWORD *)NdisFilterHandle + 75);
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          24,
          44,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          (char)NdisFilterHandle,
          StatusIndication->StatusCode);
      }
      ++*((_DWORD *)NdisFilterHandle + 76);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
  }
}
