/*
 * XREFs of ?IsConstructed@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@UEBAEXZ @ 0x1C0013770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::IsConstructed(
        __int64 a1)
{
  return *(_DWORD *)(a1 + 40) == 2;
}
