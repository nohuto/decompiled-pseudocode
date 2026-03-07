void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  if ( KeReadStateSemaphore((PRKSEMAPHORE)((char *)a1 + 24)) )
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 80LL)
                                                   + 176LL
                                                   * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 96LL) + 6LL)));
  operator delete(a1);
}
