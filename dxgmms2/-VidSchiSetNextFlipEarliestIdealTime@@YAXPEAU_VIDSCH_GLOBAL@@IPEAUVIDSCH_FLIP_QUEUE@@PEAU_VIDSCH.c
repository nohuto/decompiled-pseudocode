void __fastcall VidSchiSetNextFlipEarliestIdealTime(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  int CurrentVSyncPeriodQpc; // eax

  v4 = *((_QWORD *)a4 + 162);
  v7 = *((_QWORD *)a1 + a2 + 400);
  if ( *(_DWORD *)(v7 + 3032) == -1 )
  {
    if ( *((_DWORD *)a4 + 285) == -1 )
      CurrentVSyncPeriodQpc = 0;
    else
      CurrentVSyncPeriodQpc = *(_DWORD *)(v7 + 82952);
  }
  else
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a2, 1);
  }
  *((_QWORD *)a3 + 13) = v4 + (unsigned int)(*((_DWORD *)a4 + 268) * CurrentVSyncPeriodQpc);
}
