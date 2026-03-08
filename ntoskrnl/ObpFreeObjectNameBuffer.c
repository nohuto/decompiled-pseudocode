/*
 * XREFs of ObpFreeObjectNameBuffer @ 0x140699240
 * Callers:
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObjectNameBuffer(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( *(_WORD *)(a1 + 2) == 248 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[5].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[5].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
