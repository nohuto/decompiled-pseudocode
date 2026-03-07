__int64 __fastcall CChannel::VisualTopLevelNode(CChannel *this, unsigned int a2, HWND a3, unsigned __int8 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  HWND v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v11[0] = 423;
  v14 = 0;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v8 = CChannel::SendCommand(this, v11, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v8;
}
