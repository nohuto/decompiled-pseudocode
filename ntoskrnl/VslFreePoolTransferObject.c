/*
 * XREFs of VslFreePoolTransferObject @ 0x140548C84
 * Callers:
 *     VslFinishSecureImageValidation @ 0x14054B900 (VslFinishSecureImageValidation.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 **P, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = v3[4] + *((unsigned int *)v3 + 11);
  if ( a2 )
    *a2 = *((unsigned int *)v3 + 10);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
