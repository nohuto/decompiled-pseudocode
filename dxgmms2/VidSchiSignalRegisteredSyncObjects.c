void __fastcall VidSchiSignalRegisteredSyncObjects(struct HwQueueStagingList *a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  _QWORD **v11; // r14
  _QWORD *v12; // rdi
  struct _VIDSCH_QUEUE_PACKET *v13; // rdx
  _QWORD *v14; // r15
  _QWORD **v15; // r15
  _QWORD *v16; // rdi
  _QWORD *v17; // rbp
  _QWORD **v18; // rbp
  _QWORD *v19; // r14
  struct _VIDSCH_QUEUE_PACKET *v20; // rdx

  v3 = a2 + 19;
  while ( 1 )
  {
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v5[1] != v3 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v5[2], a1, 1);
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  v7 = (_QWORD *)a2[9];
  while ( v7 != a2 + 9 )
  {
    v10 = v7;
    v7 = (_QWORD *)*v7;
    v11 = (_QWORD **)(v10 + 80);
    v12 = *v11;
    while ( v12 != v11 )
    {
      v13 = (struct _VIDSCH_QUEUE_PACKET *)(v12 - 4);
      v12 = (_QWORD *)*v12;
      VidSchiCompleteAllWaitsPacket(a1, v13);
    }
  }
  v8 = a2 + 11;
  v9 = (_QWORD *)a2[11];
  while ( v9 != v8 )
  {
    v14 = v9;
    v9 = (_QWORD *)*v9;
    v15 = (_QWORD **)(v14 + 4);
    v16 = *v15;
    while ( v16 != v15 )
    {
      v17 = v16;
      v16 = (_QWORD *)*v16;
      v18 = (_QWORD **)(v17 + 19);
      v19 = *v18;
      while ( v19 != v18 )
      {
        v20 = (struct _VIDSCH_QUEUE_PACKET *)(v19 - 4);
        v19 = (_QWORD *)*v19;
        VidSchiCompleteAllWaitsPacket(a1, v20);
      }
    }
  }
}
