/*
 * XREFs of ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800984FC
 * Callers:
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800983B8 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BAB8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 * Callees:
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180098594 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180098E88 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveChild(CVisual *this, struct CVisual *a2)
{
  char v4; // cl
  int v5; // r8d
  int v6; // edx
  int v7; // r8d

  if ( CPtrArrayBase::Remove((CVisual *)((char *)this + 80), (unsigned __int64)a2) )
  {
    if ( (*((_BYTE *)a2 + 103) & 1) != 0 )
    {
      CVisual::DirtyForInvisibleChild(this, a2);
      v4 = *((_BYTE *)a2 + 272);
      v5 = *((_DWORD *)a2 + 67) + 1;
      if ( (v4 & 4) == 0 )
        v5 = *((_DWORD *)a2 + 67);
      v6 = *((_DWORD *)a2 + 66) + 1;
      v7 = -v5;
      if ( (v4 & 1) == 0 )
        v6 = *((_DWORD *)a2 + 66);
      CVisual::PropagateBackdropUpdates(this, -v6, v7);
    }
    *((_QWORD *)a2 + 11) = 0LL;
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
