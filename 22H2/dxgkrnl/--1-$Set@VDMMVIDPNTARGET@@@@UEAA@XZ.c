/*
 * XREFs of ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000685C
 * Callers:
 *     ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x1C0006540 (--1DMMVIDPNTARGETSET@@UEAA@XZ.c)
 *     ??_G?$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C006AD30 (--_G-$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C006AE20 (--_E-$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAAXXZ @ 0x1C0012F00 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@.c)
 */

__int64 __fastcall Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPNTARGET>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
  return DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear();
}
