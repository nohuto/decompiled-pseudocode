/*
 * XREFs of ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00329A4
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00FCF70 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE564 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C00B0430 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetVPRPaging(VIDMM_GLOBAL *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // bl

  v3 = a2;
  VIDMM_SEGMENT::Defragment(this, a2, a3);
  *((_BYTE *)this + 40937) = (32 * v3) | *((_BYTE *)this + 40937) & 0xDF;
}
