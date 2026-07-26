/*
 * XREFs of ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0040210
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00098F0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F140 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002F0B4 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035D54 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035D70 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisNsiGetAllTimestampingInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // edi
  _LIST_ENTRY *v2; // rbp
  union _NET_LUID_LH v4; // rbx
  KIRQL v5; // r14
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  unsigned int TimestampFlags; // ebx
  KIRQL v10; // bl
  char v12[4]; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  v1 = 0;
  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_71cb36f29d0f388e109f8982bee03d4b_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 8) || *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( !*((_QWORD *)a1 + 9) && !*((_DWORD *)a1 + 20) && !*((_QWORD *)a1 + 5) && !*((_DWORD *)a1 + 12) )
  {
    if ( *((_QWORD *)a1 + 7) && *((_DWORD *)a1 + 16) >= 4u )
    {
      v4.Value = (*((union _NET_LUID_LH **)a1 + 2))->Value;
      ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v13);
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v4);
      v2 = InterfaceByNetLuid;
      if ( InterfaceByNetLuid )
      {
        if ( ndisIsCompartmentAccessibleByClient(
               (const struct _NDIS_IF_COMPARTMENT_BLOCK *)InterfaceByNetLuid[86].Flink,
               (const struct _NDIS_NSI_CLIENT_INFO *)&v13,
               0) )
        {
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2[89].Blink, 0x10u);
          ++LODWORD(v2[81].Blink);
LABEL_16:
          KeReleaseSpinLock(&ndisIfListLock, v5);
          if ( v1 >= 0 )
          {
            memset(*((void **)a1 + 7), 0, *((unsigned int *)a1 + 16));
            v7 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)v2, 0x1Cu);
            TimestampFlags = 0;
            if ( v7 )
            {
              TimestampFlags = v7->TimestampFlags;
              ndisIfDereferenceMiniport((struct _NDIS_IF_BLOCK *)v2, v8, 0x1Cu);
            }
            **((_DWORD **)a1 + 7) = TimestampFlags;
          }
          goto LABEL_20;
        }
        v2 = 0LL;
      }
      v1 = -1073741811;
      goto LABEL_16;
    }
LABEL_4:
    v1 = -1073741811;
    goto LABEL_22;
  }
  v1 = -1073741811;
LABEL_20:
  if ( v2 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v2, 0x10u);
    KeReleaseSpinLock(&ndisIfListLock, v10);
  }
LABEL_22:
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v1;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_71cb36f29d0f388e109f8982bee03d4b_Traceguids,
      (char)a1,
      *(_DWORD *)v12);
  }
  return (unsigned int)v1;
}
