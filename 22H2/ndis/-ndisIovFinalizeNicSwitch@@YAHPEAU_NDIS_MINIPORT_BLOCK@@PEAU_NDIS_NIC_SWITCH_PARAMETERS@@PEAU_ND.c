/*
 * XREFs of ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00784E4
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033084 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079410 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C0077304 (-ndisIovAddSwitchToList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovFinalizeNicSwitch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2,
        struct _NDIS_NIC_SWITCH_BLOCK *a3,
        struct _NDIS_PF_BLOCK *a4,
        struct _NDIS_VPORT_BLOCK *a5)
{
  _OWORD *v5; // r10
  __int64 v6; // rax
  __int128 v10; // xmm1
  __int64 result; // rax
  struct _NDIS_VPORT_BLOCK *v12; // rbx
  _LIST_ENTRY *v13; // rax
  __int64 v14; // rcx
  _LIST_ENTRY *p_SwitchLink; // rdx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *p_FunctionLink; // rax
  __int64 v18; // rdx
  _LIST_ENTRY *p_VPortList; // rax
  _LIST_ENTRY *Flink; // rcx
  KIRQL v21; // dl
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = 0;
  v5 = (_OWORD *)((char *)a3 + 100);
  v6 = 4LL;
  do
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v5[2] = *((_OWORD *)a2 + 2);
    v5[3] = *((_OWORD *)a2 + 3);
    v5[4] = *((_OWORD *)a2 + 4);
    v5[5] = *((_OWORD *)a2 + 5);
    v5[6] = *((_OWORD *)a2 + 6);
    v5 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (struct _NDIS_NIC_SWITCH_PARAMETERS *)((char *)a2 + 128);
    *(v5 - 1) = v10;
    --v6;
  }
  while ( v6 );
  *v5 = *(_OWORD *)a2;
  v5[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v5 + 4) = *((_QWORD *)a2 + 4);
  result = ndisIovAddSwitchToList(a1, (_LIST_ENTRY *)a3);
  if ( !(_DWORD)result )
  {
    v12 = a5;
    v13 = (_LIST_ENTRY *)((char *)a3 + 56);
    v14 = *((_QWORD *)a3 + 7);
    p_SwitchLink = &a5->SwitchLink;
    if ( *(struct _NDIS_NIC_SWITCH_BLOCK **)(v14 + 8) != (struct _NDIS_NIC_SWITCH_BLOCK *)((char *)a3 + 56) )
      goto LABEL_9;
    p_SwitchLink->Flink = (_LIST_ENTRY *)v14;
    p_SwitchLink->Blink = v13;
    *(_QWORD *)(v14 + 8) = p_SwitchLink;
    v16 = (_LIST_ENTRY *)((char *)a4 + 32);
    v13->Flink = p_SwitchLink;
    p_FunctionLink = &v12->FunctionLink;
    ++*((_DWORD *)a3 + 12);
    v18 = *((_QWORD *)a4 + 4);
    if ( *(struct _NDIS_PF_BLOCK **)(v18 + 8) != (struct _NDIS_PF_BLOCK *)((char *)a4 + 32) )
      goto LABEL_9;
    p_FunctionLink->Flink = (_LIST_ENTRY *)v18;
    v12->FunctionLink.Blink = v16;
    *(_QWORD *)(v18 + 8) = p_FunctionLink;
    v16->Flink = p_FunctionLink;
    ++*((_DWORD *)a4 + 7);
    a1->PFBlock = a4;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    p_VPortList = &a1->VPortList;
    Flink = a1->VPortList.Flink;
    if ( Flink->Blink != &a1->VPortList )
LABEL_9:
      __fastfail(3u);
    v21 = NewIrql;
    v12->AdapterLink.Flink = Flink;
    v12->AdapterLink.Blink = p_VPortList;
    Flink->Blink = &v12->AdapterLink;
    p_VPortList->Flink = &v12->AdapterLink;
    ++a1->NumActiveVPorts;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v21);
    return 0LL;
  }
  return result;
}
