/*
 * XREFs of KiAltReturnWorkerRoutine @ 0x14057DEA0
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x1402C3C20 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PLIST_ENTRY __fastcall KiAltReturnWorkerRoutine(PLIST_ENTRY ListHead)
{
  PLIST_ENTRY v1; // rbx
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY result; // rax

  v1 = ListHead;
  v2 = (KSPIN_LOCK *)&ListHead[1];
  while ( 1 )
  {
    result = ExInterlockedRemoveHeadList(ListHead, v2);
    if ( !result )
      break;
    ((void (__fastcall *)(PLIST_ENTRY, PLIST_ENTRY))v1[7].Blink)(v1, result);
    v2 = (KSPIN_LOCK *)&v1[1];
    ListHead = v1;
  }
  return result;
}
