/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x140768AD0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     ExCreateDpcEvent @ 0x140609B00 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  struct _SLIST_ENTRY *v8; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 - 16);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( v6 )
      {
        LOBYTE(a2) = *(_BYTE *)(v5 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v6, a2, a3, a4);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *(struct _SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v8);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v8);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
