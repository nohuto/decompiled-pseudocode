/*
 * XREFs of ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDB80
 * Callers:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDBD0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF3C0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::IsMovableResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rax
  int v3; // eax

  v1 = (_DWORD *)*((_QWORD *)a1 + 67);
  if ( (*v1 & 0x300) != 0 )
    return 0;
  if ( (*((_DWORD *)a1 + 17) & 0x10000100) != 0 )
    return 0;
  v2 = *((_QWORD *)a1 + 11);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
      return 0;
  }
  v3 = *((_DWORD *)a1 + 18);
  if ( (v3 & 0x400) != 0 )
    return 0;
  if ( (v3 & 0x200000) != 0 )
    return v1[3] == 0;
  return 1;
}
