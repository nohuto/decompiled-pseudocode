__int64 __fastcall ADAPTER_RENDER::QueryVideoMemoryInfo(
        ADAPTER_RENDER *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a3)
{
  __int64 v3; // r9
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = *((_QWORD *)this + 95);
  v4 = *((_QWORD *)this + 96);
  v5 = *((_QWORD *)a2 + 8);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)v3 - 1));
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, UINT64 *, UINT64 *, UINT64 *, UINT64 *))(*(_QWORD *)(v3 + 8) + 1040LL))(
           v4,
           v6,
           a3->PhysicalAdapterIndex,
           (unsigned int)a3->MemorySegmentGroup,
           &a3->Budget,
           &a3->CurrentUsage,
           &a3->AvailableForReservation,
           &a3->CurrentReservation);
}
