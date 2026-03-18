/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C00025D8
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C000294C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x1C0047458 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C0089F70 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00032E4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00033A8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSetFlipDevice @ 0x1C0006310 (VidSchiSetFlipDevice.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A3C0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C001BEAA (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int *v6; // rsi
  unsigned int i; // r14d
  _QWORD v9[2]; // [rsp+40h] [rbp-40h] BYREF
  char v10; // [rsp+50h] [rbp-30h]
  _QWORD v11[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v12; // [rsp+78h] [rbp-8h]

  v6 = (unsigned int *)((char *)a1 + 40);
  if ( a4 != -3 )
  {
    if ( a4 < *v6 )
    {
      VidSchiSetFlipDevice(a1, a3, 0, a5);
      goto LABEL_4;
    }
    WdLogSingleEntry1(3LL, a4);
  }
  for ( i = 0; i < *v6; ++i )
    VidSchiSetFlipDevice(a1, a3, 0, a5);
LABEL_4:
  if ( *((_BYTE *)a1 + 51) )
  {
    v12 = 0;
    v11[0] = (char *)a1 + 1728;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v11);
    v10 = 0;
    v9[1] = v9;
    v9[0] = v9;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(v9, a1) )
    {
      *((_QWORD *)a1 + 153) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)((char *)a1 + 1192), 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v9);
    AcquireSpinLock::Release((AcquireSpinLock *)v11);
  }
}
