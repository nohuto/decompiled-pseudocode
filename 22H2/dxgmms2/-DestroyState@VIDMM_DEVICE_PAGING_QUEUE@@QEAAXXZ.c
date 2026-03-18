/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C008A684
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C008A340 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0003210 (VidSchDestroyDeviceSyncObject.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C008A654 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     VidSchDestroySyncObject @ 0x1C008CB20 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v2; // rdx

  if ( *((_QWORD *)this + 19) )
  {
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(this);
    v2 = *(_QWORD *)(*((_QWORD *)this + 17) + 32LL);
    if ( v2 )
      VidSchDestroyDeviceSyncObject(*((_QWORD *)this + 19), v2, 1, 0LL);
    VidSchDestroySyncObject(*((PVOID *)this + 19));
  }
}
