__int64 __fastcall CActivationObjectManager::NotifySystemSateChanged(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 v10; // r9
  __int64 v12; // rcx
  __int128 v13; // [rsp+28h] [rbp-29h]
  __int128 v14; // [rsp+38h] [rbp-19h]
  __int64 ThreadId; // [rsp+48h] [rbp-9h]
  _OWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  __int128 v19; // [rsp+84h] [rbp+33h]
  __int64 v20; // [rsp+94h] [rbp+43h]
  unsigned int v21; // [rsp+9Ch] [rbp+4Bh]

  if ( a3 == 2 )
  {
    v12 = *(_QWORD *)(a2 + 72);
    goto LABEL_6;
  }
  if ( a3 == 3 )
  {
    v12 = 0LL;
LABEL_6:
    IVForegroundSync::ivSendForegroundUpdate(v12, *a4);
  }
  *(_QWORD *)&v13 = *(_QWORD *)(a2 + 40);
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)&v14 = *(_QWORD *)(a2 + 48);
  DWORD2(v14) = *(_DWORD *)(a2 + 56);
  HIDWORD(v14) = (unsigned int)PsGetProcessId(*(PEPROCESS *)(a2 + 24)) & 0xFFFFFFFC;
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)(a2 + 32));
  v7 = a4[6];
  v16[0] = v13;
  v17 = ThreadId;
  v8 = *(_OWORD *)a4;
  v16[1] = v14;
  v9 = *((_QWORD *)a4 + 2);
  v19 = v8;
  v18 = a3;
  v20 = v9;
  v21 = v7;
  return SendMessageTo(10LL, (__int64)v16, 72LL, v10);
}
