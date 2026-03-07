void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  struct _VIDSCH_GLOBAL *v5; // rdx

  if ( (*(_DWORD *)(a4 + 1136) & 0x10) != 0 )
  {
    v4 = *(_DWORD **)(a4 + 1176);
    v5 = (struct _VIDSCH_GLOBAL *)(*v4 >> 10);
    LOWORD(v5) = *(_WORD *)(a3 + 44136) & (*(_WORD *)v4 | (unsigned __int16)v5) & 0x3FF;
  }
  else
  {
    v5 = (struct _VIDSCH_GLOBAL *)*(unsigned __int16 *)(a3 + 44136);
  }
  VidSchiUnreferenceDisplayingAllocations(a1, v5, (struct _VIDSCH_PRESENT_INFO *)a3, (unsigned __int16)v5);
}
