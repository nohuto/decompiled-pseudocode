/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BF024
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006110 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0008180 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00085C0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00093E0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00098F0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00099E0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B3B0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C870 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E8C0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000EAC0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000ECC0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     NdisDereferenceWithTag @ 0x1C000F0A0 (NdisDereferenceWithTag.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F830 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00106E0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00BF314 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00BF63C (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // r8d
  unsigned int *v3; // rsi
  int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r10
  unsigned __int64 v10; // r8
  char *v11; // r11
  __int64 v12; // rdx
  int *v13; // r14
  int v14; // ecx
  int v15; // r9d
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  if ( a2 )
  {
    if ( (v2 & 0xFFFE) == 0x7FFE )
    {
      v6 = v2 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v6;
      return;
    }
    v7 = v2 ^ (v2 ^ (v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v2 | 0x10000;
      goto LABEL_4;
    }
    v7 = v2 + 0x20000;
  }
  *((_DWORD *)a1 + 14) = v7;
  v8 = ndisCaptureStackTrace(v7);
  Next = a1;
  if ( a1 )
  {
    v10 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
    while ( 2 )
    {
      v11 = (char *)Next + v10;
      v12 = 0LL;
      v13 = (int *)((char *)Next + v10);
      do
      {
        v14 = *v13;
        v15 = *v13 & 0x3FFFFFF;
        if ( v15 == v8 && (v14 & 0xFC000000) < 0xFC000000 )
        {
          *(_DWORD *)&v11[4 * v12] = v15 | (v14 + 0x4000000) & 0xFC000000;
          goto LABEL_23;
        }
        if ( !v3 && !v15 )
          v3 = (unsigned int *)&v11[4 * v12];
        v12 = (unsigned int)(v12 + 1);
        ++v13;
      }
      while ( (unsigned int)v12 < 6 );
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      if ( Next )
        continue;
      break;
    }
    if ( v3 )
      goto LABEL_25;
  }
  PoolWithTag = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7872444Eu);
  if ( PoolWithTag )
  {
    *(_OWORD *)&PoolWithTag->Next = 0LL;
    *(_OWORD *)&PoolWithTag->References[2] = 0LL;
    *(_OWORD *)PoolWithTag->Dereferences = 0LL;
    *(_QWORD *)&PoolWithTag->Dereferences[4] = 0LL;
    PoolWithTag->Next = a1->Block.Next;
    v3 = (unsigned int *)((char *)PoolWithTag->Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
    a1->Block.Next = PoolWithTag;
LABEL_25:
    *v3 = v8 & 0x3FFFFFF | 0x4000000;
    return;
  }
  *((_DWORD *)a1 + 14) |= a2 != 0 ? 1 : 0x10000;
LABEL_23:
  ndisReleaseStackTrace(v8);
}
