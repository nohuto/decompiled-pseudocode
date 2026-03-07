__int64 __fastcall DXGVMBUSCHANNEL::ProxyFromSubscriberTag(
        DXGVMBUSCHANNEL *this,
        int a2,
        struct DXGCHANNELENDPOINTPROXY **a3)
{
  unsigned int v6; // edi
  _QWORD **v7; // rbx
  _QWORD *i; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = -1073741275;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v7 = (_QWORD **)((char *)this + 48);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(((unsigned __int64)(i - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64)) + 0x24) == a2 )
    {
      *a3 = (struct DXGCHANNELENDPOINTPROXY *)((unsigned __int64)(i - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64));
      v6 = 0;
      break;
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
