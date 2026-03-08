/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C0004FD0
 * Callers:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0004F80 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAE.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0168194 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0182038 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v3 = a1 + 16;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 != v3 )
    v4 = v5 - 8;
  while ( v4 && v4 != a2 )
  {
    v7 = *(_QWORD *)(v4 + 8);
    v4 = v7 - 8;
    if ( v7 == v3 )
      v4 = 0LL;
  }
  return v4 != 0;
}
