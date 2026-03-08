/*
 * XREFs of ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E62C4
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::NeedsApertureForLock(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 17);
  if ( (v2 & 0x1E0000) == 0 || (v2 & 0x1E0000) == 0x40000 )
    return *(_BYTE *)(1616LL * (v2 & 0x3F) + *((_QWORD *)this + 5028) + 446) & 1;
  else
    return 0;
}
