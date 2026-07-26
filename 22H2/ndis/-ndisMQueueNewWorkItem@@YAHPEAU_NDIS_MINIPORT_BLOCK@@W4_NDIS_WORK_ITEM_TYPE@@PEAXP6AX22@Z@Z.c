/*
 * XREFs of ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C0070A50
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x1C0071ED0 (NdisIMQueueMiniportCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0018F6C (WPP_RECORDER_SF_qLq.c)
 */

__int64 __fastcall ndisMQueueNewWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        _SINGLE_LIST_ENTRY *a3,
        _SINGLE_LIST_ENTRY *a4)
{
  _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  int v8; // edx
  _SINGLE_LIST_ENTRY *v9; // rbx
  unsigned int v10; // ebx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Du,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      a3);
  PoolWithTag = (_SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        (((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64) & 8) + 24,
                                        0x6977444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2].Next = a3;
    LODWORD(PoolWithTag[1].Next) = 6;
    if ( a4 )
      PoolWithTag[3].Next = a4;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        0xCu,
        0x2Fu,
        (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
        (char)PoolWithTag,
        6,
        a3);
    v9->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[6];
    a1->WorkQueue[6].Next = v9;
    v10 = 0;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xCu,
        0x2Eu,
        (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
        a1);
    v10 = -1073741823;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v10 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x30u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      a3);
  return v10;
}
