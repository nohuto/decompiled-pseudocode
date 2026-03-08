/*
 * XREFs of ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0068D68
 * Callers:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C00151FC (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x1C0068198 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C00683E0 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C006850C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00685A8 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 == (_QWORD *)(a1 + 16) )
    return 0LL;
  if ( (_QWORD *)v3[1] != v1 || (v5 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    __fastfail(3u);
  *v1 = v5;
  *(_QWORD *)(v5 + 8) = v1;
  result = v3 - 1;
  --*(_QWORD *)(a1 + 32);
  v3[1] = 0LL;
  *v3 = 0LL;
  return result;
}
