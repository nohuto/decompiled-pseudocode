void __fastcall VidSchiCompleteHwQueueSignalPacket(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // r12
  _DWORD *v8; // r14
  int v9; // r8d
  PVOID *v10; // r15
  unsigned int *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  ADAPTER_DISPLAY *v14; // rcx
  unsigned int i; // ebp
  __int64 v16; // rcx

  v2 = *((_QWORD *)a2 + 12);
  v4 = *((_QWORD *)a2 + 99);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 32LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 800) = *((_QWORD *)a2 + 100);
  }
  else if ( !*((_QWORD *)a2 + 100) )
  {
    v8 = (_DWORD *)((char *)a2 + 272);
    v9 = *((_DWORD *)a2 + 68);
    v10 = (PVOID *)((char *)a2 + 536);
    v11 = (unsigned int *)((char *)a2 + 276);
    if ( (((unsigned __int8)byte_1C00769C3 >> 5) & ((v9 & 0x10) != 0)) != 0 )
    {
      v12 = *((_QWORD *)a2 + 11);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 56);
        if ( !v13 || (*(_DWORD *)(v12 + 112) & 0x40) != 0 )
          v13 = *((_QWORD *)a2 + 11);
      }
      else
      {
        v13 = *(_QWORD *)(v2 + 48);
        if ( !v13 )
          LODWORD(v13) = v2;
      }
      McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
        v13,
        v12,
        v9,
        1,
        v13,
        *((_DWORD *)a2 + 28),
        v9,
        *v11,
        (__int64)a2 + 280,
        (__int64)a2 + 536,
        (char)a2);
    }
    if ( (*v8 & 2) != 0 )
    {
      v14 = (ADAPTER_DISPLAY *)*v10;
      if ( (*v8 & 8) != 0 )
      {
        DxgCoreInterface[69](v14, 0LL);
      }
      else
      {
        KeSetEvent((PRKEVENT)v14, 0, 0);
        ObfDereferenceObject(*v10);
      }
      *v10 = 0LL;
    }
    else
    {
      for ( i = 0; i < *v11; ++i )
        VidSchiCompleteSignalSyncObject(
          (__int64)a1,
          *((_QWORD *)a2 + i + 35),
          (*v8 & 4) != 0,
          (unsigned __int64 *)a2 + i + 67,
          1);
      if ( *(_DWORD *)(v7 + 804) )
        VidSchUnwaitFlipQueue(a1, v7);
    }
    goto LABEL_25;
  }
  v16 = *((_QWORD *)a2 + 100);
  if ( v16 )
    *(_QWORD *)(v16 + 792) = *((_QWORD *)a2 + 99);
  *((_QWORD *)a2 + 99) = 0LL;
  v8 = (_DWORD *)((char *)a2 + 272);
  *((_QWORD *)a2 + 100) = 0LL;
  v11 = (unsigned int *)((char *)a2 + 276);
LABEL_25:
  *((_DWORD *)a2 + 20) |= 4u;
  if ( (*v8 & 2) == 0 && *v11 )
  {
    do
      VidSchiReleaseSyncObjectReference(
        *((char **)a2 + v5++ + 35),
        (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v4);
    while ( v5 < *v11 );
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}
