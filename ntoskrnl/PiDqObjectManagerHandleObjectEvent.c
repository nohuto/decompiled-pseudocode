/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x140778E48
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x1406CCCB0 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140778F34 (PiDqObjectActionQueueEntryCreate.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x1409593D4 (PiDqDeleteUserObjectFromLoadedHives.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v10 = 0LL;
  v4 = 0;
  if ( (v2 & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  if ( (*(_DWORD *)(a1 + 228) & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v3 = PiDqObjectActionQueueEntryCreate(a2, &v10);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 216);
      if ( *v7 != a1 + 208 )
        __fastfail(3u);
      v8 = v10;
      *v10 = a1 + 208;
      v8[1] = v7;
      *v7 = v8;
      *(_QWORD *)(a1 + 216) = v8;
    }
  }
  v9 = *(_DWORD *)(a1 + 228);
  if ( (v9 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v3 < 0) )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 228) = v9 | 1;
  }
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 104));
  if ( v4 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
