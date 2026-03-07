__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  __int64 v5; // rbx
  struct VIDMM_PAGING_QUEUE **v10; // rsi
  struct VIDMM_PAGING_QUEUE *v11; // r15
  struct VIDMM_PAGING_QUEUE **NewPacket; // rbx
  struct VIDMM_PAGING_QUEUE *v13; // rax
  __int64 v14; // rcx
  char v15; // si
  unsigned __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+18h] BYREF

  v5 = *((_QWORD *)a3 + 10);
  v21 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 144, 0LL);
  v10 = (struct VIDMM_PAGING_QUEUE **)((char *)a3 + 16);
  *(_QWORD *)(v5 + 152) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 13);
  *((_QWORD *)a3 + 13) = (char *)v11 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a3 + 16)
    || (v13 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v10 = v13;
  *((_QWORD *)v13 + 1) = v10;
  v14 = *((_QWORD *)a3 + 10) + 144LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket == v10 )
  {
    NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
    if ( !NewPacket )
    {
      NewPacket = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    memset(NewPacket, 0, 0xA0uLL);
  }
  NewPacket[5] = v11;
LABEL_6:
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( !NewPacket )
    {
      v17 = *((_QWORD *)a3 + 12);
      v18 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v18, &v17, 1u, 0LL);
      NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a3);
    }
  }
  *((_BYTE *)NewPacket + 24) = 0;
  *((_BYTE *)NewPacket + 25) = v15;
  v17 = 0LL;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a2;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a2 + 4);
  NewPacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 10);
  memset(&Event, 0, sizeof(Event));
  if ( !v15 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NewPacket[7] = (struct VIDMM_PAGING_QUEUE *)&Event;
  }
  if ( a5 )
  {
    v21 = -1073741776;
    NewPacket[10] = (struct VIDMM_PAGING_QUEUE *)&v21;
    VIDMM_PAGING_QUEUE::AppendReadyPacket(a3, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v17);
    if ( v15 )
    {
      v18 = (struct _VIDSCH_SYNC_OBJECT *)v17;
      Object = a4;
      VIDMM_GLOBAL::WaitForFences(this, (struct _VIDSCH_SYNC_OBJECT **)&Object, (const unsigned __int64 *)&v18, 1u, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    VIDMM_PAGING_QUEUE::AppendReadyPacket(a3, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v17);
  }
  return v21;
}
