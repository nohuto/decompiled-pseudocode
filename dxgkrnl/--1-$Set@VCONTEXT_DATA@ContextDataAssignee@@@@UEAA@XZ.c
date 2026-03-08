/*
 * XREFs of ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C006A4F8
 * Callers:
 *     ??1DMMVIDEOPRESENTSOURCE@@UEAA@XZ @ 0x1C006A528 (--1DMMVIDEOPRESENTSOURCE@@UEAA@XZ.c)
 *     ??_G?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C006A620 (--_G-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x1C006A6B4 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@V.c)
 */

__int64 __fastcall Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>(_QWORD *a1)
{
  *a1 = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  a1[1] = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::`vftable';
  return DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear();
}
