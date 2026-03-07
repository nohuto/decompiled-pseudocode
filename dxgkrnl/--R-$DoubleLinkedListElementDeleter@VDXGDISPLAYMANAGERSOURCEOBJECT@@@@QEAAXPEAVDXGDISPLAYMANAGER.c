void __fastcall DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>::operator()(__int64 a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(a2 + 64), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  *(_BYTE *)(a2 + 56) = 0;
  auto_rc<DXGDISPLAYMANAGEROBJECT>::reset((ReferenceCounted **)(a2 + 48), 0LL);
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
