/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1406EAD40
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 */

PSLIST_ENTRY __fastcall ObDeleteCapturedInsertInfo(__int64 a1)
{
  __int64 v2; // rdx
  void *v3; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PSLIST_ENTRY result; // rax

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 - 16);
    if ( v2 )
    {
      v3 = *(void **)(v2 + 32);
      if ( v3 )
      {
        SeReleaseSecurityDescriptor(v3, *(_BYTE *)(v2 + 16), 1);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
        v2 = *(_QWORD *)(a1 - 16);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        result = RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v2);
      }
      else
      {
        ++P->FreeMisses;
        result = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64))P->FreeEx)(v2);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
  return result;
}
