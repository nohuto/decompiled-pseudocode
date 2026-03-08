/*
 * XREFs of PfFbLogEntryComplete @ 0x14028D2D0
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 *     PfLogEvent @ 0x14028D0D0 (PfLogEvent.c)
 *     PfLogDeleteHelper @ 0x1402F5B50 (PfLogDeleteHelper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbLogEntryComplete(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v4; // rdx
  char *v5; // rdx

  Next = ListEntry[1].Next;
  if ( (_DWORD)a3
    && (++*((_DWORD *)&ListEntry[2].Next + 2),
        v4 = ListEntry[2].Next,
        *((_QWORD *)&ListEntry[1].Next + 1) += (unsigned int)a3,
        v5 = (char *)v4 - *((_QWORD *)&ListEntry[1].Next + 1),
        (__int64)v5 < SHIDWORD(Next[5].Next)) )
  {
    (*((void (__fastcall **)(PSLIST_ENTRY, char *, __int64, PSLIST_ENTRY))&Next[6].Next + 1))(
      ListEntry,
      v5,
      a3,
      ListEntry);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], ListEntry);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
  }
}
