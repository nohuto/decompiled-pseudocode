__int64 __fastcall CPortClient::SendComplexSyncRequest(
        HANDLE *this,
        ULONG a2,
        HANDLE *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  unsigned int v7; // ebx
  struct _PORT_MESSAGE *v11; // rax
  struct _PORT_MESSAGE *v12; // rdi
  unsigned int v13; // eax
  int v14; // eax

  v7 = 0;
  v11 = (struct _PORT_MESSAGE *)HeapAlloc(this[6], 8u, 0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    v11[1].u1.Length = a2;
    v11->u1.Length = 3670032;
    LpcVerifyOutgoingPayloadSize(v11);
    v12[1].ClientId.UniqueProcess = *a3;
    v13 = NtAlpcSendWaitReceivePort(this[2], 0x20000LL, v12, 0LL, v12);
    v14 = CPortClient::CheckStatus((CPortClient *)this, v13);
    if ( v14 < 0 )
    {
      v7 = v14 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v14 | 0x10000000,
        0x216u);
    }
    else
    {
      *a7 = v12[1].u2.ZeroInit;
    }
    HeapFree(this[6], 0, v12);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0x204u);
  }
  return v7;
}
