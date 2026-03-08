/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C00683E0
 * Callers:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0067114 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z @ 0x1C0067B80 (--_G-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C00684B0 (-Clear@-$Queue@VDMMVIDPN@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0068D68 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1);
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry1(1LL, 394LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0LL,
          2,
          -1,
          L"this->GetNumElements() == 0",
          394LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
