/*
 * XREFs of ?UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8174
 * Callers:
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C009CB34 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UncommitParavirtualizedAllocationOnHost(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  struct _MDL *v2; // rcx

  v2 = (struct _MDL *)*((_QWORD *)a1 + 69);
  if ( v2 )
  {
    MmFreePagesFromMdl(v2);
    ExFreePoolWithTag(*((PVOID *)a1 + 69), 0);
    *((_QWORD *)a1 + 69) = 0LL;
  }
}
