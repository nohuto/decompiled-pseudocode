void __fastcall VidSchiFlushPendingTokenList(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // rsi
  bool v9; // bp
  char *v10; // rbx
  void **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v6 = *(int *)(*((_QWORD *)a2 + a3 + 400) + 288LL * a4 + 188);
  if ( (int)v6 <= -1 )
    v7 = 0LL;
  else
    v7 = *((_QWORD *)a2 + 416) + 160 * v6;
  v8 = (void **)(v7 + 120);
  v9 = *(_DWORD *)(v7 + 112) == 3;
  while ( 1 )
  {
    v10 = (char *)*v8;
    if ( *v8 == v8 )
      break;
    if ( *((void ***)v10 + 1) != v8 || (v11 = *(void ***)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *v8 = v11;
    v11[1] = v8;
    WdLogSingleEntry1(8LL, *((_QWORD *)v10 + 19));
    VidSchiProcessPresentHistoryToken(
      a2,
      a1,
      *((struct _VIDSCH_CONTEXT **)v10 + 3),
      *((struct VIDSCH_HW_QUEUE **)v10 + 4),
      *((struct _VIDSCH_DEVICE **)v10 + 5),
      (struct VIDSCH_SUBMIT_DATA2 *)(v10 + 48),
      *(union _ULARGE_INTEGER *)(v10 + 16),
      0,
      v9);
    --*((_DWORD *)a2 + 201);
    v12 = *((_QWORD *)v10 + 3);
    if ( v12 )
      --*(_DWORD *)(v12 + 792);
    v13 = *((_QWORD *)v10 + 5);
    if ( v13 )
    {
      --*(_DWORD *)(v13 + 1576);
      VidSchiSignalRegisteredEvent((__int64)a2, (struct _KEVENT **)(*((_QWORD *)v10 + 5) + 136LL));
    }
    VidSchiSignalRegisteredEvent((__int64)a2, (struct _KEVENT **)a2 + 209);
    ExFreePoolWithTag(v10, 0x30626956u);
  }
}
