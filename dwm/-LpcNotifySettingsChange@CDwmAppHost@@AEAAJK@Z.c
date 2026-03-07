__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2, void *a3)
{
  int v3; // ebx
  struct _PORT_MESSAGE *v5; // rax
  struct _PORT_MESSAGE *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  void *v11; // [rsp+28h] [rbp-58h]
  void *v12; // [rsp+28h] [rbp-58h]
  _BYTE v13[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h]
  HANDLE hHeap; // [rsp+70h] [rbp-10h]
  void *v16; // [rsp+90h] [rbp+10h]

  v3 = 0;
  if ( *(&hInstance + 1) )
  {
    CPortClient::CPortClient((CPortClient *)v13, a2, a3);
    LODWORD(v16) = 1073741872;
    v14 = (__int64)*(&hInstance + 1);
    HIDWORD(v16) = a2;
    v5 = (struct _PORT_MESSAGE *)HeapAlloc(hHeap, 8u, 0x38uLL);
    v6 = v5;
    if ( v5 )
    {
      v5[1].u1.Length = 1073741872;
      v5->u1.Length = 3670032;
      LpcVerifyOutgoingPayloadSize(v5);
      v12 = 0LL;
      v6[1].ClientId.UniqueProcess = v16;
      v7 = NtAlpcSendWaitReceivePort(v14, 0x10000LL, v6, 0LL, 0LL);
      v8 = CPortClient::CheckStatus((CPortClient *)v13, v7);
      if ( v8 < 0 )
      {
        v3 = v8 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          v8 | 0x10000000,
          0x1C2u,
          0LL);
      }
      HeapFree(hHeap, 0, v6);
      v9 = v3;
      if ( v3 >= 0 )
        goto LABEL_6;
    }
    else
    {
      v3 = -2147024882;
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        -2147024882,
        0x1B1u,
        v11);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x166u, v12);
LABEL_6:
    CPortClient::~CPortClient((CPortClient *)v13);
  }
  return (unsigned int)v3;
}
