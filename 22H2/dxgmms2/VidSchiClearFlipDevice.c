/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0011B88
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0016DFC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x1C003D024 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C0080320 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00CFF30 (VidSchFlushAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000B000 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiSetFlipDevice @ 0x1C0011C0C (VidSchiSetFlipDevice.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011E50 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00128EC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00300AC (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _KEVENT *a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  _QWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  char v7; // [rsp+50h] [rbp-30h]
  _QWORD v8[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v9; // [rsp+78h] [rbp-8h]

  for ( i = 0; i < LODWORD(a1[1].Header.WaitListHead.Blink); ++i )
    VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, a3, 0, 0);
  if ( a1[2].Header.Reserved1 )
  {
    v9 = 0;
    v8[0] = (char *)a1 + 1712;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v8);
    v7 = 0;
    v6[1] = v6;
    v6[0] = v6;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v6, a1) )
    {
      a1[50].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      KeSetEvent(a1 + 49, 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v6);
    AcquireSpinLock::Release((AcquireSpinLock *)v8);
  }
}
