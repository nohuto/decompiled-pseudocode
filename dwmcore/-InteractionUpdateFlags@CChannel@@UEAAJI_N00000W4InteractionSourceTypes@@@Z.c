__int64 __fastcall CChannel::InteractionUpdateFlags(
        struct CChannel *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9)
{
  unsigned int v13; // ebx
  _BYTE v15[16]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+39h] [rbp-17h]
  char v19; // [rsp+3Ah] [rbp-16h]
  char v20; // [rsp+3Bh] [rbp-15h]
  char v21; // [rsp+3Ch] [rbp-14h]
  char v22; // [rsp+3Dh] [rbp-13h]
  __int16 v23; // [rsp+3Eh] [rbp-12h]
  int v24; // [rsp+40h] [rbp-10h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, a1);
  CChannel::CheckHandle((__int64)a1, a2, 89);
  v16[0] = 196;
  v23 = 0;
  v19 = a5;
  v20 = a6;
  v21 = a7;
  v22 = a8;
  v24 = a9;
  v16[1] = a2;
  v17 = a3;
  v18 = a4;
  v13 = CChannel::SendCommand(a1, v16, 0x14u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v15);
  return v13;
}
