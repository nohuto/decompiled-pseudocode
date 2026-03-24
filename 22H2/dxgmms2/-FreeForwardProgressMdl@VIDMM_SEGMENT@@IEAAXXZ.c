/*
 * XREFs of ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00C576C
 * Callers:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00C4A20 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001668 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FreeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  void *v2; // rcx
  PMDL *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    MmUnmapLockedPages(v2, *(PMDL *)(*((_QWORD *)this + 33) + 8LL));
    *((_QWORD *)this + 32) = 0LL;
  }
  v3 = (PMDL *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    if ( v3[1] )
    {
      MmFreePagesFromMdl(v3[1]);
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)this + 33) + 8LL), 0);
      v3 = (PMDL *)*((_QWORD *)this + 33);
    }
    operator delete(v3);
    *((_QWORD *)this + 33) = 0LL;
  }
}
