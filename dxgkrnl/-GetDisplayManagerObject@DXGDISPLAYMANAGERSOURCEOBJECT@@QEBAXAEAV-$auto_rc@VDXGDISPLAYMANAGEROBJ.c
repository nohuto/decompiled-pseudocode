void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(__int64 a1, ReferenceCounted **a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)(a1 + 64), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(a2, *(ReferenceCounted **)(a1 + 48));
  if ( *a2 )
    _InterlockedIncrement((volatile signed __int32 *)*a2 + 2);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
