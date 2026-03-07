void __fastcall VidSchiFlushQueuePacket(struct HwQueueStagingList *a1, __int64 a2, __int64 a3, int a4)
{
  if ( !a4 && (*(_DWORD *)(a3 + 72) & 0x40080) != 0 )
  {
    if ( *(_QWORD *)(a3 + 152) )
    {
      VidSchiSubmitPresentHistoryToken(a1, (_QWORD *)a3, 0LL, 0LL, 0LL);
      *(_QWORD *)(a3 + 152) = 0LL;
    }
  }
}
