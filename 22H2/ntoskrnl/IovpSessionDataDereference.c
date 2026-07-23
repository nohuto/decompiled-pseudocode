/*
 * XREFs of IovpSessionDataDereference @ 0x1409E1940
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409C56D0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver2 @ 0x1409D0154 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x1409D0600 (IovpCompleteRequest2.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolDispatchLevel @ 0x1405A0680 (VfUtilFreePoolDispatchLevel.c)
 */

void __fastcall IovpSessionDataDereference(_SLIST_ENTRY *Entry)
{
  bool v1; // zf
  _SLIST_ENTRY *Next; // r9
  _SLIST_ENTRY *v3; // rax
  _SLIST_ENTRY *v4; // rdx
  _SLIST_ENTRY **v5; // r8

  v1 = (*((_DWORD *)&Entry->Next + 2))-- == 1;
  Next = Entry->Next;
  if ( v1 )
  {
    v3 = Entry + 1;
    v4 = Entry[1].Next;
    if ( *(&v4->Next + 1) != &Entry[1] || (v5 = (_SLIST_ENTRY **)*((_QWORD *)&Entry[1].Next + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)&v4->Next + 1) = v5;
    *((_QWORD *)&Entry[1].Next + 1) = Entry + 1;
    v3->Next = v3;
    _InterlockedDecrement((volatile signed __int32 *)&Next[1].Next + 1);
    if ( ((__int64)Entry[2].Next & 4) != 0 )
      ExFreeToNPagedLookasideList(&ViSessionDataLookaside, Entry);
    else
      VfUtilFreePoolDispatchLevel(Entry);
  }
}
