/*
 * XREFs of WmipQueueLegacyEtwWork @ 0x1408507E0
 * Callers:
 *     WmipRegisterEtwProvider @ 0x14085074C (WmipRegisterEtwProvider.c)
 *     WmipLegacyEtwCallback @ 0x1409DEAD0 (WmipLegacyEtwCallback.c)
 *     WmipUnregisterEtwProvider @ 0x1409DED20 (WmipUnregisterEtwProvider.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall WmipQueueLegacyEtwWork(_QWORD *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  int v8; // eax
  struct _WORK_QUEUE_ITEM *v9; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  _QWORD *v18; // rcx

  WmipReferenceEntry(a2);
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) == 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 56LL, 1885957463LL);
      if ( Pool2 )
      {
        Pool2[2] = a2;
        Pool2[4] = Pool2 + 3;
        Pool2[3] = Pool2 + 3;
        Pool2[6] = Pool2 + 5;
        Pool2[5] = Pool2 + 5;
        v11 = *(_QWORD **)(a3 + 8);
        if ( *v11 != a3 )
          goto LABEL_17;
        *Pool2 = a3;
        Pool2[1] = v11;
        *v11 = Pool2;
        *(_QWORD *)(a3 + 8) = Pool2;
        *(_DWORD *)(a2 + 16) |= 0x10u;
        *(_QWORD *)(a2 + 128) = Pool2;
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
    v13 = ExAllocatePool2(256LL, 56LL, 1885957463LL);
    v14 = (_QWORD *)v13;
    if ( v13 )
    {
      KeInitializeEvent((PRKEVENT)(v13 + 32), NotificationEvent, 0);
      v15 = *(_QWORD **)(a3 + 24);
      v16 = a3 + 16;
      if ( *v15 == v16 )
      {
        v14[1] = v15;
        *v14 = v16;
        *v15 = v14;
        *(_QWORD *)(v16 + 8) = v14;
        v17 = v14 + 2;
        v18 = *(_QWORD **)(v6 + 48);
        if ( *v18 == v6 + 40 )
        {
          *v17 = v6 + 40;
          v17[1] = v18;
          *v18 = v17;
          *(_QWORD *)(v6 + 48) = v17;
          return;
        }
      }
      goto LABEL_17;
    }
  }
}
