/*
 * XREFs of ExInterlockedPopEntryList @ 0x1405B6E00
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402F8744 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402F8814 (ExpAcquireSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char v6; // al
  _SINGLE_LIST_ENTRY *Next; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, (__int64)Lock, v2, v3);
  Next = ListHead->Next;
  if ( ListHead->Next )
    ListHead->Next = Next->Next;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return Next;
}
