__int64 __fastcall CDwmAppHost::LpcSyncFlush(CDwmAppHost *this, __int64 a2, void *a3)
{
  unsigned int v3; // ebx
  __int16 v4; // r9
  int v5; // eax
  void *v7; // [rsp+20h] [rbp-68h]
  __int16 v8; // [rsp+28h] [rbp-60h]
  _BYTE v9[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  CDwmAppHost *v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+98h] [rbp+10h] BYREF
  int v13; // [rsp+9Ch] [rbp+14h]

  v11 = this;
  v3 = 0;
  if ( *(&hInstance + 1) )
  {
    LODWORD(v11) = 0;
    CPortClient::CPortClient((CPortClient *)v9, a2, a3);
    v13 = 0;
    v10 = (__int64)*(&hInstance + 1);
    v12 = -2147483639;
    v5 = CPortClient::SendComplexSyncRequest((CPortClient *)v9, 0x80000009, &v12, v4, v7, v8, (int *)&v11);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x17Eu);
    CPortClient::~CPortClient((CPortClient *)v9);
  }
  return v3;
}
