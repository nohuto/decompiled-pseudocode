__int64 __fastcall CChannel::RedirectVisualSetRedirectedVisual(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle(this, a2, 141LL);
  if ( a3 )
    CChannel::CheckHandle(this, a3, 196LL);
  v8[0] = 325;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
