/*
 * XREFs of ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18015E854
 * Callers:
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180150B44 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180151560 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18015F860 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     _IsDecendantOfKnownFolders @ 0x18015E790 (_IsDecendantOfKnownFolders.c)
 */

__int64 __fastcall CPinnedList::_IsLocalHardDisk(CPinnedList *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  int DriveNumberW; // eax

  v3 = 1;
  DriveNumberW = PathGetDriveNumberW(a2);
  if ( DriveNumberW < 0 || RealDriveType(DriveNumberW, 0) != 3 )
    return IsDecendantOfKnownFolders((__int64)a2);
  return v3;
}
