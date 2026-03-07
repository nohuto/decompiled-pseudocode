__int64 __fastcall DXGSESSIONDATA::CacheIddDisplayConfigRequest(__int64 a1, ReferenceCounted **a2)
{
  unsigned int v4; // ebx
  bool v5; // zf
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)(a1 + 19024), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *a2 )
    _InterlockedIncrement((volatile signed __int32 *)*a2 + 2);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)(a1 + 19080), *a2);
  v4 = *(_DWORD *)(a1 + 19072) + 1;
  v5 = v7[8] == 0;
  *(_DWORD *)(a1 + 19072) = v4;
  if ( !v5 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v4;
}
