void __fastcall VIDMM_GLOBAL::WaitForAllPagingEngines(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::xWaitForAllPagingEngines(
    this,
    (struct _VIDSCH_SYNC_OBJECT **)this + (*((_DWORD *)a2 + 17) & 0x3F) + 749,
    (const unsigned __int64 *)a2 + 20,
    1u,
    (const unsigned __int64 *)this + (*((_DWORD *)a2 + 17) & 0x3F) + 685,
    *((_DWORD *)a2 + 17) & 0x3F);
}
