/*
 * XREFs of ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C00151FC
 * Callers:
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0015088 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0012888 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C001527C (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0068D68 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

char __fastcall Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rax

  v3 = a1 + 3;
  if ( (_QWORD *)*v3 == v3 || (v4 = *v3 - 8LL, *v3 == 8LL) )
  {
LABEL_7:
    if ( (unsigned __int8)DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(a1 + 1) != 1 )
      WdLogSingleEntry0(1LL);
    v6 = a1[7];
    if ( v6 )
    {
      if ( a1[5] > v6 )
      {
        v8 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1 + 1);
        NonReferenceCounted::Release((NonReferenceCounted *)(v8 + 24));
      }
    }
    return 1;
  }
  else
  {
    while ( v4 != a2 )
    {
      v5 = *(_QWORD **)(v4 + 8);
      v4 = (__int64)(v5 - 1);
      if ( v5 == v3 )
        v4 = 0LL;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
}
