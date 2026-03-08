/*
 * XREFs of ?VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001BF48
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00430EC (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0039B2C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateVSyncMultiplier(
        struct _VIDSCH_GLOBAL *a1,
        int a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4)
{
  int v6; // r8d
  int v7; // r9d

  v6 = *((_DWORD *)a3 + 20733);
  v7 = *((_DWORD *)a4 + 38);
  if ( v6 != v7 && !*(_BYTE *)(*((_QWORD *)a1 + 2) + 2890LL) )
  {
    if ( (byte_1C00769C4 & 1) != 0 )
      McTemplateK0qqqqq_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&EventBoostUnboostRefreshRate,
        v6,
        a2,
        *((_DWORD *)a3 + 758),
        v6,
        *((_DWORD *)a4 + 36),
        v7);
    *((_DWORD *)a3 + 20733) = *((_DWORD *)a4 + 38);
  }
}
