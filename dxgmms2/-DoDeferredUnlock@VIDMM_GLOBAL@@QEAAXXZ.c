/*
 * XREFs of ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5980
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C008A90C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  PMDL **v4; // rbx
  PMDL *v5; // rax
  PMDL *v6; // rcx

  v3 = (char *)this + 40008;
  while ( 1 )
  {
    v4 = *(PMDL ***)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, (*v4)[1] != (PMDL)v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    v5[1] = (PMDL)v3;
    if ( v4 == (PMDL **)v3 )
      break;
    VidMmiUnlockAllocation(v4[2], a2, a3);
    v6 = v4[3];
    v4[2] = 0LL;
    ObfDereferenceObject(v6);
    operator delete(v4);
  }
}
