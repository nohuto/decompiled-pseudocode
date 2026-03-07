__int64 __fastcall VidSchiUpdateFlipQueueHistory(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 8LL * a3 + 3200);
  v5 = *(unsigned int *)(v4 + 144);
  v6 = *(_QWORD *)(v4 + 136) + 112 * v5;
  *(_DWORD *)(v4 + 144) = (v5 + 1) & (*(_DWORD *)(v4 + 128) - 1);
  return VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v6, a1, a2);
}
