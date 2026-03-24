/*
 * XREFs of ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003F96C
 * Callers:
 *     ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D80E0 (-VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D98C0 (-VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_EXPORT::VidMmGetDevicePagingQueue(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        struct VIDMM_PAGING_QUEUE **a4,
        struct _VIDSCH_SYNC_OBJECT **a5)
{
  (*(void (__fastcall **)(struct VIDMM_DEVICE *, _QWORD, struct VIDMM_PAGING_QUEUE **, struct _VIDSCH_SYNC_OBJECT **))(*((_QWORD *)this + 1) + 984LL))(
    a2,
    a3,
    a4,
    a5);
}
