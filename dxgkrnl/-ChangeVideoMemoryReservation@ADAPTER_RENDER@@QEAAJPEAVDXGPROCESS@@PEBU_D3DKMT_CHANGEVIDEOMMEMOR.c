__int64 __fastcall ADAPTER_RENDER::ChangeVideoMemoryReservation(
        ADAPTER_RENDER *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a3)
{
  __int64 v3; // r10
  __int64 v5; // rdx
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  UINT64 Reservation; // r10
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // ebx
  __int64 PhysicalAdapterIndex; // r8

  v3 = *((_QWORD *)this + 2);
  v5 = 0LL;
  if ( *(_BYTE *)(v3 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v3 + 4472),
             a2,
             a3->PhysicalAdapterIndex,
             a3->MemorySegmentGroup,
             a3->Reservation);
  v7 = *((_QWORD *)this + 95);
  v8 = *((_QWORD *)this + 96);
  v9 = *((_QWORD *)a2 + 8);
  Reservation = a3->Reservation;
  MemorySegmentGroup = a3->MemorySegmentGroup;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  if ( v9 )
    v5 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1));
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, UINT64))(*(_QWORD *)(v7 + 8) + 1048LL))(
           v8,
           v5,
           PhysicalAdapterIndex,
           (unsigned int)MemorySegmentGroup,
           Reservation);
}
