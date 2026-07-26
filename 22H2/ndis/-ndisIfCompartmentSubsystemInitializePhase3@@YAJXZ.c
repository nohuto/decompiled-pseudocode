/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003459C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0109810 (ndisIfInitializePhase2.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BF8C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0034708 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0106818 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106F5C (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109B28 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0128B58 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase3(void)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v0; // r14
  int Network; // esi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rdi
  unsigned __int8 v3; // r15
  KIRQL v4; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned __int16 v6; // cx
  KIRQL v7; // bl
  KIRQL v9; // bl
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  v0 = qword_1C00E5B38;
  Network = 0;
  while ( v0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E5B38 )
  {
    v2 = v0;
    v0 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v0;
    v3 = 0;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
    KeReleaseSpinLock(&ndisIfListLock, v4);
    if ( NetworkBlock )
      goto LABEL_4;
    Network = ndisIfCreateNetwork((struct _GUID *)v2 + 5, *((_DWORD *)v2 + 4));
    if ( Network >= 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
      KeReleaseSpinLock(&ndisIfListLock, v9);
      if ( !NetworkBlock )
        goto LABEL_8;
LABEL_4:
      *((_QWORD *)v2 + 7) = NetworkBlock;
      if ( !*((_QWORD *)v2 + 213) )
      {
        v6 = *((_WORD *)v2 + 39);
        if ( v6 )
        {
          v10 = (*((_QWORD *)v2 + 9) >> 24) & 0xFFFFFF;
          if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v6, &v10, 0, 0) )
          {
LABEL_7:
            Network = ndisIfCreateInterface(
                        NetworkBlock,
                        v3,
                        (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v2 + 64),
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        NdisIfBlockSourceAutomaticLoopback);
            goto LABEL_8;
          }
          *((_QWORD *)v2 + 9) = 0LL;
        }
        v3 = 1;
        goto LABEL_7;
      }
LABEL_8:
      if ( Network >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
        ndisNsiNotifyClientCompartmentChange(v2, 1LL);
        v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF(v2);
        KeReleaseSpinLock(&ndisIfListLock, v7);
      }
    }
  }
  return (unsigned int)Network;
}
