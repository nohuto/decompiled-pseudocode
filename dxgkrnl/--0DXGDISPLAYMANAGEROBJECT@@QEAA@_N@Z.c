DXGDISPLAYMANAGEROBJECT *__fastcall DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(
        DXGDISPLAYMANAGEROBJECT *this,
        char a2)
{
  DXGDISPLAYMANAGEROBJECT *result; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 14) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 79;
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = &Set<DXGTARGETENTRY>::`vftable';
  *((_QWORD *)this + 11) = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 2;
  *((_QWORD *)this + 17) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  result = this;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 2;
  *((_BYTE *)this + 184) = a2;
  return result;
}
