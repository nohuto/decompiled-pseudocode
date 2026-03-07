void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(DXGDISPLAYMANAGEROBJECT *this)
{
  char *v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _BYTE v7[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object != nullptr", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 64) = 0;
  while ( 1 )
  {
    v2 = (char *)this + 80;
    if ( *((DXGDISPLAYMANAGEROBJECT **)this + 13) == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
      break;
    v3 = Set<DXGTARGETENTRY>::FindByValue((__int64)v2);
    if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
            (__int64)this + 88,
            v3) )
    {
      v3 = 0LL;
LABEL_13:
      WdLogSingleEntry1(1LL, 588LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEntry", 588LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_14;
    }
    v4 = (_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v5 + 8) != v3 + 8 || (v6 = *(_QWORD **)(v3 + 16), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    --*((_QWORD *)this + 15);
    if ( !v3 )
      goto LABEL_13;
LABEL_14:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v3, 0LL, this, 0LL, 0);
    if ( v3 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 10) + 24LL))(v2);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
