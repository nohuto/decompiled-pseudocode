/*
 * XREFs of ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0181D24
 * Callers:
 *     ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x1C0004E40 (--_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C0004E84 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C0014704 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(DXGDISPLAYMANAGEROBJECT *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  if ( !v1 )
  {
    WdLogSingleEntry1(1LL, 99LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 99LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 17) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>((_QWORD *)this + 10);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGDISPLAYMANAGEROBJECT *)((char *)this + 16));
  ReferenceCounted::~ReferenceCounted(this);
}
