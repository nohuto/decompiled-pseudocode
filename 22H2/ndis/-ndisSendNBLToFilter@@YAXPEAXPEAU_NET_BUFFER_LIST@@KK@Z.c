/*
 * XREFs of ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C003EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038184 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C003ED50 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0068BE0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008FC4C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008FDE4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisSendNBLToFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  _NDIS_OBJECT_HEADER *SendNetBufferListsObject; // rcx
  struct _NET_BUFFER_LIST *v8; // rbp
  struct _NDIS_MINIPORT_BLOCK *SendNetBufferListsContext; // r15
  KIRQL v10; // si
  char v11; // di
  int v12; // r9d
  char v13; // di
  _BYTE v14[12]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+3Ch] [rbp-3Ch]
  struct _NET_BUFFER_LIST *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = a2;
  SendNetBufferListsObject = a1->Next.SendNetBufferListsObject;
  v8 = a2;
  if ( SendNetBufferListsObject->Type == 5
    && (*(_DWORD *)&SendNetBufferListsObject[14] & 0x8000) != 0
    && !*(_DWORD *)&SendNetBufferListsObject[84]
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)SendNetBufferListsObject, a2, a3, a4, &v16);
    v8 = v16;
  }
  if ( v8 )
  {
    SendNetBufferListsContext = (struct _NDIS_MINIPORT_BLOCK *)a1->Next.SendNetBufferListsContext;
    v10 = 2;
    v11 = 0;
    NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v14, a1);
    if ( SendNetBufferListsContext == a1 && v15 < 0 )
    {
      v13 = v12 & a4;
      if ( (v12 & a4) == 0 )
        v10 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v14, 7u);
      v11 = v13 ^ 1;
    }
    ndisInvokeNextSendHandler(
      v8,
      a3,
      a4,
      a1->Next.SendNetBufferListsObject,
      a1->Next.SendNetBufferListsContext,
      (void (*)(void))a1->Next.SendNetBufferListsHandler);
    if ( SendNetBufferListsContext == a1 )
    {
      if ( v15 < 0 )
        ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v14, 7u, 0x14uLL);
      if ( v11 )
      {
        if ( v10 != 2 )
          KeLowerIrql(v10);
      }
    }
  }
}
