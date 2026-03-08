/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C003AAB8
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0012A7C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00167E0 (VidSchiSubmitPresentHistoryToken.c)
 */

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
