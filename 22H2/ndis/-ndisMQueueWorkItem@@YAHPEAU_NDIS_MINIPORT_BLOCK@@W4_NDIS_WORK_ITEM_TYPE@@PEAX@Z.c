/*
 * XREFs of ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C0070BF4
 * Callers:
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x1C005F8F0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0064630 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C0070F90 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?NdisMSendResourcesAvailable@@YAXPEAX@Z @ 0x1C00BFB40 (-NdisMSendResourcesAvailable@@YAXPEAX@Z.c)
 *     ?ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C06A0 (-ndisMSendPacketsToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMSendComplete @ 0x1C00C0AB0 (NdisMSendComplete.c)
 *     ?ndisMWanSend@@YAHPEAX00@Z @ 0x1C00C3310 (-ndisMWanSend@@YAHPEAX00@Z.c)
 *     ?ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C4470 (-ndisMSendCompleteSG@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C4E38 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMQueueWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        _SINGLE_LIST_ENTRY *a3)
{
  __int64 v4; // rdi
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Bu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  Next = a1->SingleWorkItems[v4].Next;
  if ( Next )
  {
    a1->SingleWorkItems[v4] = (_SINGLE_LIST_ENTRY)Next->Next;
    LODWORD(Next[1].Next) = v4;
    Next[2].Next = a3;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[v4];
    a1->WorkQueue[v4].Next = Next;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Cu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      v7);
  return v7;
}
