/*
 * XREFs of ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@_K@Z @ 0x1C00B4B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UpdatePendingResourceReserveCB(struct _VIDMM_GLOBAL_ALLOC *a1, __int64 a2)
{
  __int64 v2; // rax

  *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 17);
  v2 = *((_QWORD *)a1 + 15);
  *((_QWORD *)a1 + 25) = v2;
  *((_QWORD *)a1 + 24) = a2;
  *(_BYTE *)(v2 + 472) = 1;
}
