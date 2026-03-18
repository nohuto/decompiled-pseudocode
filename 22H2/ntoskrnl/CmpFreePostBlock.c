/*
 * XREFs of CmpFreePostBlock @ 0x140768860
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x140766D70 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x140767A00 (CmpNotifyChangeKey.c)
 *     CmpFreeSubordinatePost @ 0x140767DEC (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1407687C4 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1407D5050 (CmpPostApc.c)
 *     CmpPostApcRunDown @ 0x140A0F7D0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
