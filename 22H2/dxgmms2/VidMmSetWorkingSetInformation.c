/*
 * XREFs of VidMmSetWorkingSetInformation @ 0x1C002D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C00EF538 (-SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 */

__int64 __fastcall VidMmSetWorkingSetInformation(VIDMM_PROCESS *a1, struct _D3DKMT_WORKINGSETINFO *a2)
{
  return VIDMM_PROCESS::SetWorkingSetInformation(a1, a2);
}
