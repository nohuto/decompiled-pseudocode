__int64 __fastcall VIDMM_GLOBAL::QueueDeferredCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_DEFERRED_COMMAND *a3,
        char a4,
        unsigned __int64 *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // r13
  __int64 v7; // rbx
  struct VIDMM_PAGING_QUEUE **v11; // rbx
  struct VIDMM_PAGING_QUEUE *v12; // r15
  struct VIDMM_PAGING_QUEUE **NewPacket; // rdi
  struct VIDMM_PAGING_QUEUE *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v7 = *((_QWORD *)a2 + 10);
  v19 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 144, 0LL);
  *(_QWORD *)(v7 + 152) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
  v12 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = (char *)v12 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || (v14 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v11 = v14;
  *((_QWORD *)v14 + 1) = v11;
  v15 = *((_QWORD *)a2 + 10) + 144LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket != v11 )
  {
    memset(NewPacket, 0, 0xA0uLL);
LABEL_5:
    NewPacket[5] = v12;
    goto LABEL_6;
  }
  NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new(160LL, 0x38346956u, 256LL);
  if ( NewPacket )
    goto LABEL_5;
LABEL_6:
  if ( !*((_QWORD *)a3 + 1) )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL);
  for ( ; !NewPacket; NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a2) )
    VIDMM_GLOBAL::WaitForFence(this, v5, *((_QWORD *)a2 + 12));
  *((_WORD *)NewPacket + 12) = 257;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a3;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a3 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a3 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a3 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a3 + 4);
  NewPacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 10);
  if ( a4 )
    NewPacket[9] = (struct VIDMM_PAGING_QUEUE *)&v19;
  if ( *(_DWORD *)a3 == 206 )
  {
    v16 = MEMORY[0xFFFFF78000000320];
    NewPacket[17] = (struct VIDMM_PAGING_QUEUE *)(v16 * KeQueryTimeIncrement());
  }
  v18[0] = 0LL;
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, v18);
  if ( a4 )
  {
    VIDMM_GLOBAL::WaitForFence(this, v5, v18[0]);
  }
  else if ( a5 )
  {
    *a5 = v18[0];
    return 259LL;
  }
  return v19;
}
