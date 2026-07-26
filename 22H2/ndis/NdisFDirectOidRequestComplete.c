/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1C00B0660
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00097A0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0069F8C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v4; // zf
  PNDIS_OID_REQUEST v5; // rbx
  KIRQL v7; // dl
  __int128 Parameter; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-30h]
  __int128 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-10h]
  struct _NDIS_OID_REQUEST *v12; // [rsp+90h] [rbp+20h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h] BYREF

  v12 = OidRequest;
  v4 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v5 = OidRequest;
  v11 = 0LL;
  Parameter = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !v4 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, OidRequest, 0, &v12);
    v5 = v12;
  }
  *(_DWORD *)&v5->NdisReserved[8] = Status;
  *((_QWORD *)&Parameter + 1) = NdisFilterHandle;
  *((_QWORD *)&v9 + 1) = v5;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFDirectOidRequestCompleteInternal,
         &Parameter,
         0x4CCCuLL,
         0,
         0LL) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    *(_QWORD *)v5->NdisReserved = *((_QWORD *)NdisFilterHandle + 30);
    *((_QWORD *)NdisFilterHandle + 30) = v5;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v7 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
