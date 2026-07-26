/*
 * XREFs of ?ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z @ 0x1C0081FB8
 * Callers:
 *     ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CC20 (-ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisEnumeratePorts(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PORT_ARRAY *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v10; // ecx
  unsigned int NumberOfActivePorts; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // edx
  _NDIS_PORT_CHARACTERISTICS *Ports; // rdi
  _LIST_ENTRY *i; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x22u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  *a4 = 0;
  v10 = a1->Flags & 0x10000;
  NumberOfActivePorts = a1->NumberOfActivePorts + 1;
  if ( !v10 )
    NumberOfActivePorts = a1->NumberOfActivePorts;
  v12 = (NumberOfActivePorts << 6) + 16;
  *a5 = v12;
  if ( v12 <= a3 )
  {
    a2->Header = (_NDIS_OBJECT_HEADER)5243264;
    a2->ElementSize = 64;
    v13 = 0;
    a2->NumberOfPorts = NumberOfActivePorts;
    a2->OffsetFirstPort = 16;
    Ports = a2->Ports;
    if ( v10 )
    {
      memset(Ports, 0, sizeof(_NDIS_PORT_CHARACTERISTICS));
      Ports->PortNumber = 0;
      v13 = 1;
      Ports->Flags = 0;
      Ports->Header = (_NDIS_OBJECT_HEADER)4194688;
      Ports->MediaConnectState = a1->MediaConnectState;
      Ports->XmitLinkSpeed = a1->XmitLinkSpeed;
      Ports->RcvLinkSpeed = a1->RcvLinkSpeed;
      Ports->Direction = a1->IfBlock->DirectionType;
      Ports->SendControlState = a1->DefaultPortSendControlState;
      Ports->RcvControlState = a1->DefaultPortRcvControlState;
      Ports->SendAuthorizationState = a1->DefaultPortSendAuthorizationState;
      Ports->RcvAuthorizationState = a1->DefaultPortRcvAuthorizationState;
      ++Ports;
    }
    for ( i = a1->PortList.Flink; i != &a1->PortList && v13 < NumberOfActivePorts; i = i->Flink )
    {
      if ( LODWORD(i[1].Flink) == 4 )
      {
        *(_LIST_ENTRY *)&Ports->Header.Type = *(_LIST_ENTRY *)((char *)i + 24);
        *(_LIST_ENTRY *)&Ports->MediaConnectState = *(_LIST_ENTRY *)((char *)i + 40);
        *(_LIST_ENTRY *)&Ports->RcvLinkSpeed = *(_LIST_ENTRY *)((char *)i + 56);
        *(_LIST_ENTRY *)&Ports->RcvControlState = *(_LIST_ENTRY *)((char *)i + 72);
        ++Ports;
        ++v13;
      }
    }
    *a4 = v12;
  }
  else
  {
    v5 = -1073676266;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x23u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)a1,
      v5);
  return v5;
}
