/*
 * XREFs of ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C006850C
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0067FD4 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB6E0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEDC4 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03B2444 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4AFC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0012888 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z @ 0x1C0068B50 (-InsertTail@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0068D68 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

char __fastcall Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v3 = a1 + 3;
  if ( (_QWORD *)*v3 == v3 || (v4 = *v3 - 8LL, *v3 == 8LL) )
  {
LABEL_7:
    if ( (unsigned __int8)DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::InsertTail(a1 + 1) != 1 )
      WdLogSingleEntry0(1LL);
    v6 = a1[7];
    if ( v6 )
    {
      if ( a1[5] > v6 )
      {
        v7 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1 + 1);
        NonReferenceCounted::Release((NonReferenceCounted *)(v7 + 24));
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
