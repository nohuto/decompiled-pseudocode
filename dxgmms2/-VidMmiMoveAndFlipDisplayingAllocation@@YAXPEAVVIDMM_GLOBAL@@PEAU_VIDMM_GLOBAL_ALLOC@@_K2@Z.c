void __fastcall VidMmiMoveAndFlipDisplayingAllocation(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER a4)
{
  union _LARGE_INTEGER v6; // [rsp+80h] [rbp+18h] BYREF
  union _LARGE_INTEGER v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  VIDMM_GLOBAL::MemoryTransfer(
    this,
    a2,
    *((_QWORD *)a2 + 2),
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 15),
    &v6,
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 15),
    &v7,
    0LL,
    0);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *((_DWORD *)a2 + 17) & 0x3F);
  *((union _LARGE_INTEGER *)a2 + 16) = v7;
  if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this, a2, 1u);
  VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), a2);
}
