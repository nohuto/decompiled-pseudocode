void __fastcall VIDMM_GLOBAL::RemoveAllocationFromDecommitList(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
    *(VIDMM_GLOBAL **)(*((_QWORD *)a2 + 11) + 8LL),
    a2,
    *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 16LL)
                                          + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)));
}
