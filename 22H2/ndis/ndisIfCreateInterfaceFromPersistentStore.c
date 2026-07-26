/*
 * XREFs of ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0106764 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BF8C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002EED0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     WPP_RECORDER_SF_IL @ 0x1C002EFB0 (WPP_RECORDER_SF_IL.c)
 *     WPP_RECORDER_SF_I @ 0x1C002F040 (WPP_RECORDER_SF_I.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002F0B4 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1C00B2E70 (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0106818 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106F5C (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        struct _GUID *a1,
        struct NdisNetworkInterfacePersistedState *a2,
        unsigned int a3)
{
  const union _NET_LUID_LH *v5; // r14
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rbx
  KIRQL v7; // r8
  int v8; // edx
  int v9; // r8d
  KIRQL v10; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  int v12; // ecx
  int Interface; // eax
  int v14; // ecx
  unsigned int v15; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rbp
  KIRQL v18; // r8
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = a3;
  v5 = (const union _NET_LUID_LH *)((char *)a2 + 24);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, 12);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v5->Value);
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( InterfaceByNetLuid )
    goto LABEL_14;
  v21 = (v5->Value >> 24) & 0xFFFFFF;
  if ( v21 - 32512 > 0x4100 )
  {
    v15 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)a2 + 15), &v21, 0, 0);
    if ( v15 )
      goto LABEL_11;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)((char *)a2 + 36));
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( NetworkBlock )
    goto LABEL_6;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)a2 + 13));
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    *((_DWORD *)a2 + 13) = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v18);
  if ( !CompartmentBlock )
  {
LABEL_14:
    v15 = -1073741823;
    goto LABEL_11;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)*((_QWORD *)CompartmentBlock + 7);
  if ( NetworkBlock )
  {
    *(_OWORD *)((char *)a2 + 36) = *((_OWORD *)NetworkBlock + 2);
LABEL_6:
    v12 = *(_DWORD *)(*((_QWORD *)NetworkBlock + 6) + 16LL);
    if ( *((_DWORD *)a2 + 13) != v12 )
      *((_DWORD *)a2 + 13) = v12;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, v5, a1, a2, 0LL, NdisIfBlockSourcePersistedNetSetup);
    v14 = 0;
    if ( Interface < 0 )
      v14 = -1073741823;
    v15 = v14;
    ndisIfUpdateInterfaceFromPersistentStore(a2);
    goto LABEL_11;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v19);
  v15 = -1073741252;
LABEL_11:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 14, v20, v5->Value, v15);
  return v15;
}
