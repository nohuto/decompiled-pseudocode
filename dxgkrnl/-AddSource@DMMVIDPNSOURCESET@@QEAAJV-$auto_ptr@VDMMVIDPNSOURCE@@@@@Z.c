/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C0181260
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0181300 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0004A3C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0004B54 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !*a2 )
    WdLogSingleEntry0(1LL);
  v4 = IndexedSet<DMMVIDPNSOURCE>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( v4 )
  {
    if ( v4 != v5 )
    {
      WdLogSingleEntry3(2LL, *(unsigned int *)(v5 + 24), v5, a1);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
      return 3223192369LL;
    }
    goto LABEL_15;
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 != a1 + 24 )
  {
    v7 = v6 - 8;
    if ( v7 )
    {
      while ( v7 != v5 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v7 = v8 - 8;
        if ( v8 == a1 + 24 )
          v7 = 0LL;
        if ( !v7 )
          goto LABEL_10;
      }
LABEL_15:
      WdLogSingleEntry2(2LL, v5, a1);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
      return 3223192343LL;
    }
  }
LABEL_10:
  if ( DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
         (_QWORD *)(a1 + 8),
         v5) != 1 )
  {
    WdLogSingleEntry1(1LL, 108LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
  return 0LL;
}
