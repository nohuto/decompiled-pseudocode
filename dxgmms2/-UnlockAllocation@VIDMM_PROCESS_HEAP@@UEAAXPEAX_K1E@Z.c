/*
 * XREFs of ?UnlockAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX_K1E@Z @ 0x1C0105BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C008A90C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnlockAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  PMDL *v5; // rcx

  if ( a5 )
  {
    v5 = (PMDL *)a2[13];
    a2[13] = 0LL;
  }
  else
  {
    v5 = (PMDL *)a2[12];
    a2[12] = 0LL;
  }
  VidMmiUnlockAllocation(v5, (__int64)a2, a3);
}
