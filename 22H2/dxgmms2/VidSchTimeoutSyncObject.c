/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0040A30
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C008CB20 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001980 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00032E4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00033A8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A3C0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C003C8E8 (VidSchiUnblockUnorderedWaiter.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(_VIDSCH_SYNC_OBJECT *this)
{
  __int64 v1; // rax
  __int64 v3; // r8
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  char v9; // [rsp+30h] [rbp-30h]
  _QWORD v10[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v11; // [rsp+58h] [rbp-8h]

  v1 = *((_QWORD *)this + 1);
  v11 = 0;
  v10[0] = v1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v10);
  v4 = *((_DWORD *)this + 10) == 0;
  v5 = *((_DWORD *)this + 12);
  v8[1] = v8;
  v8[0] = v8;
  v9 = 0;
  if ( v4 )
  {
    if ( (unsigned int)(v5 - 4) <= 1 )
LABEL_3:
      _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(this, (struct HwQueueStagingList *)v8, 1);
  }
  else
  {
    v6 = v5 - 2;
    if ( !v6 )
    {
      LOBYTE(v3) = 1;
      VidSchiUnblockUnorderedWaiter((__int64)v8, (__int64)this, v3);
      goto LABEL_8;
    }
    if ( (unsigned int)(v6 - 2) <= 1 )
      goto LABEL_3;
  }
LABEL_8:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v8);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
  return 0LL;
}
