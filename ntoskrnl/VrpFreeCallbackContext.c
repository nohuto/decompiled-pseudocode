/*
 * XREFs of VrpFreeCallbackContext @ 0x1406C30F0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeCallbackContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67655256u);
  v3 = (void *)P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
