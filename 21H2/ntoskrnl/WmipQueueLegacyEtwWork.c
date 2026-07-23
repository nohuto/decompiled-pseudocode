/*
 * XREFs of WmipQueueLegacyEtwWork @ 0x1407C7B68
 * Callers:
 *     WmipUnregisterEtwProvider @ 0x1407C7A80 (WmipUnregisterEtwProvider.c)
 *     WmipRegisterEtwProvider @ 0x1407C7AD8 (WmipRegisterEtwProvider.c)
 *     WmipLegacyEtwCallback @ 0x1409337A0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     WmipReferenceEntry @ 0x1406339F4 (WmipReferenceEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall WmipQueueLegacyEtwWork(_QWORD *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  int v8; // eax
  struct _WORK_QUEUE_ITEM *v9; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  char *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx

  WmipReferenceEntry(a2);
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x70696D57u);
      if ( PoolWithTag )
      {
        PoolWithTag[2] = a2;
        PoolWithTag[4] = PoolWithTag + 3;
        PoolWithTag[3] = PoolWithTag + 3;
        PoolWithTag[6] = PoolWithTag + 5;
        PoolWithTag[5] = PoolWithTag + 5;
        v11 = *(_QWORD **)(a3 + 8);
        if ( *v11 != a3 )
          goto LABEL_17;
        *PoolWithTag = a3;
        PoolWithTag[1] = v11;
        *v11 = PoolWithTag;
        *(_QWORD *)(a3 + 8) = PoolWithTag;
        *(_DWORD *)(a2 + 16) |= 0x10u;
        *(_QWORD *)(a2 + 128) = PoolWithTag;
      }
    }
  }
  v6 = *(_QWORD *)(a2 + 128);
  if ( !v6 )
  {
    v7 = *(_QWORD **)(a2 + 144);
    if ( *v7 == a2 + 136 )
    {
      *a1 = a2 + 136;
      a1[1] = v7;
      *v7 = a1;
      *(_QWORD *)(a2 + 144) = a1;
      v8 = *(_DWORD *)(a2 + 16);
      if ( (v8 & 0x10) == 0 )
      {
        v9 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)(a2 + 96) + 24LL);
        *(_DWORD *)(a2 + 16) = v8 | 0x10;
        ExQueueWorkItem(v9, DelayedWorkQueue);
      }
      return;
    }
LABEL_17:
    __fastfail(3u);
  }
  v12 = *(_QWORD **)(v6 + 32);
  if ( *v12 != v6 + 24 )
    goto LABEL_17;
  *a1 = v6 + 24;
  a1[1] = v12;
  *v12 = a1;
  *(_QWORD *)(v6 + 32) = a1;
  if ( a3 )
  {
    v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
    v14 = v13;
    if ( v13 )
    {
      KeInitializeEvent((PRKEVENT)(v13 + 32), NotificationEvent, 0);
      v15 = *(_QWORD **)(a3 + 24);
      if ( *v15 == a3 + 16 )
      {
        *v14 = a3 + 16;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(a3 + 24) = v14;
        v16 = *(_QWORD **)(v6 + 48);
        v17 = v14 + 2;
        if ( *v16 == v6 + 40 )
        {
          *v17 = v6 + 40;
          v17[1] = v16;
          *v16 = v17;
          *(_QWORD *)(v6 + 48) = v17;
          return;
        }
      }
      goto LABEL_17;
    }
  }
}
