/*
 * XREFs of ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078168
 * Callers:
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077F44 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079800 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078654 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078760 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v4; // rsi
  _DWORD *v5; // rbp
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  __int64 v7; // rdx
  struct _NDIS_VPORT_BLOCK *v8; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  KIRQL v11; // dl
  _LIST_ENTRY *v12; // rdx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // r8
  _LIST_ENTRY *v15; // rdx
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  v4 = SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    v5 = (_DWORD *)*((_QWORD *)SwitchBySwitchId + 5);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, 0);
    v8 = VPortByVPortIdInternal;
    Flink = VPortByVPortIdInternal->AdapterLink.Flink;
    if ( (struct _NDIS_VPORT_BLOCK *)VPortByVPortIdInternal->AdapterLink.Flink->Blink != VPortByVPortIdInternal )
      goto LABEL_10;
    Blink = VPortByVPortIdInternal->AdapterLink.Blink;
    if ( (struct _NDIS_VPORT_BLOCK *)Blink->Flink != v8 )
      goto LABEL_10;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a1->MiniportThread = (void *)((__int64)a1->MiniportThread & v7);
    v11 = NewIrql;
    --a1->NumActiveVPorts;
    KeReleaseSpinLock(&a1->Lock, v11);
    a1->PFBlock = 0LL;
    v12 = v8->SwitchLink.Flink;
    if ( v12->Blink != &v8->SwitchLink
      || (v13 = v8->SwitchLink.Blink, v13->Flink != &v8->SwitchLink)
      || (v13->Flink = v12,
          v12->Blink = v13,
          --*((_DWORD *)v4 + 12),
          v14 = v8->FunctionLink.Flink,
          v14->Blink != &v8->FunctionLink)
      || (v15 = v8->FunctionLink.Blink, v15->Flink != &v8->FunctionLink) )
    {
LABEL_10:
      __fastfail(3u);
    }
    v15->Flink = v14;
    v14->Blink = v15;
    --v5[7];
    ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(v5, 0);
  }
}
