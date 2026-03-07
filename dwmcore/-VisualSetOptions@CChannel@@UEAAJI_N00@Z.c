__int64 __fastcall CChannel::VisualSetOptions(CChannel *this, unsigned int a2, char a3, unsigned __int8 a4, bool a5)
{
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]
  __int16 v13; // [rsp+29h] [rbp-1Fh]
  bool v14; // [rsp+2Bh] [rbp-1Dh]
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v11[0] = 409;
  v14 = a5;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v9 = CChannel::SendCommand(this, v11, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v15);
  return v9;
}
