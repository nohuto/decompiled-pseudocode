/*
 * XREFs of CmpFreePostBlock @ 0x1406B5600
 * Callers:
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1406B4A70 (CmpNotifyChangeKey.c)
 *     CmpFreeSubordinatePost @ 0x1406B4E5C (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpPostApc @ 0x140785260 (CmpPostApc.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140A0CAC0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
