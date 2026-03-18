/*
 * XREFs of VrpOriginalKeyNameParameterCleanup @ 0x14036A1D0
 * Callers:
 *     <none>
 * Callees:
 *     VrpDereferenceJobContext @ 0x1407E6CCC (VrpDereferenceJobContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall VrpOriginalKeyNameParameterCleanup(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx

  if ( *a2 )
    VrpDereferenceJobContext();
  v3 = (void *)a2[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
}
