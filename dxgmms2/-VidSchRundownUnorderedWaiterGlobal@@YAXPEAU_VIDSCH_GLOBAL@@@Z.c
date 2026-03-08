/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DB1C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C003C3E8 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // r8
  char v3; // cl
  bool v4; // zf
  struct _VIDSCH_GLOBAL *v5; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  char v7; // [rsp+30h] [rbp-30h]
  _QWORD v8[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v9; // [rsp+58h] [rbp-8h]

  v9 = 0;
  v8[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v8);
  *((_BYTE *)a1 + 3036) |= 1u;
  v3 = 0;
  v6[1] = v6;
  v4 = *((_DWORD *)a1 + 204) == 0;
  v6[0] = v6;
  v7 = 0;
  if ( !v4 || *((_DWORD *)a1 + 205) )
  {
    v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 37);
    if ( v5 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 296) )
    {
      do
      {
        VidSchiRundownUnorderedWaiterDevice((struct HwQueueStagingList *)v6, (__int64)v5 - 104, v2);
        v5 = *(struct _VIDSCH_GLOBAL **)v5;
      }
      while ( v5 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 296) );
      v3 = v7;
    }
  }
  *((_BYTE *)a1 + 3036) &= ~1u;
  if ( !v3 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v6);
  AcquireSpinLock::Release((AcquireSpinLock *)v8);
}
