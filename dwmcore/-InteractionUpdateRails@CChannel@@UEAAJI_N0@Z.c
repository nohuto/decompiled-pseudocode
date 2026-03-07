__int64 __fastcall CChannel::InteractionUpdateRails(CChannel *this, unsigned int a2, char a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+29h] [rbp-1Fh]
  __int16 v13; // [rsp+2Ah] [rbp-1Eh]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 89);
  v10[0] = 197;
  v13 = 0;
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  v8 = CChannel::SendCommand(this, v10, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
  return v8;
}
