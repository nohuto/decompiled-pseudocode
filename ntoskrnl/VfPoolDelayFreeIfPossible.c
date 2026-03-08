/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x1403031F8
 * Callers:
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x1405CBF00 (VfUtilFreePoolDispatchLevel.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  char *v2; // rbx
  unsigned __int16 v3; // di

  if ( a2 > 1
    || (v2 = (char *)&VfPoolDelayFreeData + 64 * (__int64)(int)a2, ++*((_DWORD *)v2 + 13), !*((_DWORD *)v2 + 12)) )
  {
    ExFreePoolWithTag(ListEntry, 0);
    return;
  }
  v3 = *(_WORD *)v2;
  if ( *(_WORD *)v2 >= 0x200u )
  {
    ++*((_DWORD *)v2 + 14);
    ExFreePoolWithTag(ListEntry, 0);
LABEL_7:
    KeSetEvent((PRKEVENT)(v2 + 16), 1, 0);
    return;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
  if ( v3 >= 0x40u )
    goto LABEL_7;
}
