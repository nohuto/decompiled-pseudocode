__int64 __fastcall DXGCHANNELENDPOINTPROXY::Release(DXGCHANNELENDPOINTPROXY *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v1 && this )
    (*(void (__fastcall **)(DXGCHANNELENDPOINTPROXY *, __int64))(*(_QWORD *)this + 88LL))(this, 1LL);
  return v1;
}
