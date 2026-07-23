/*
 * XREFs of CmpBounceContextCleanup @ 0x1405F4E70
 * Callers:
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 && v1 != *(_SLIST_ENTRY **)a1 && v1 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_140CDB91C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB910 )
      {
        ++dword_140CDB920;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_140CDB938)(v1, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, v1);
      }
    }
    else
    {
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 8));
    }
  }
}
