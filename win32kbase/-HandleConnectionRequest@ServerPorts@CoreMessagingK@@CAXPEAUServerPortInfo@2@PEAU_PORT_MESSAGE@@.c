void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  char v2; // di
  __int64 v3; // rbx
  int DoNotUseThisField_low; // r15d
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  char v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+64h] [rbp-9Ch]
  __int64 v16; // [rsp+68h] [rbp-98h]
  char *v17; // [rsp+70h] [rbp-90h]
  _DWORD v18[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+94h] [rbp-6Ch]
  __int128 v23; // [rsp+98h] [rbp-68h]
  _QWORD v24[10]; // [rsp+B0h] [rbp-50h] BYREF

  v18[1] = 0;
  v2 = 0;
  v22 = 0;
  v3 = 0LL;
  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v7 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  if ( a2->u1.s1.DataLength == 24 )
  {
    v13 = 0LL;
    v8 = CoreMessagingK::Runtime::Alloc(32LL, 1229147459LL, &v13);
    if ( v8 < 0 || (v3 = v13, v2 = 1, *(_DWORD *)(v13 + 16) = 1, v8) )
      v2 = 0;
  }
  v19 = 0LL;
  v20 = 0LL;
  v18[0] = 48;
  v21 = 512;
  v23 = 0LL;
  memset(v24, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v12 = v2;
  LODWORD(v24[0]) = 0x100000;
  v24[2] = 0xFFFFLL;
  v11 = ZwAlpcAcceptConnectPort(v3 & -(__int64)(v2 != 0), v9, 0LL, v18, v24, v3 & -(__int64)(v2 != 0), a2, 0LL, v12);
  if ( v11 >= 0 && v2 )
  {
    *(_DWORD *)(v3 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v3 + 12) = v7;
    v10 = *((_QWORD *)a1 + 5);
    *(_QWORD *)(v3 + 24) = v10;
    *((_QWORD *)a1 + 5) = v3;
  }
  else if ( v3 )
  {
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v3);
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v16 = *((_QWORD *)a1 + 4);
    v17 = (char *)a1 + 16;
    v14 = v7;
    v15 = DoNotUseThisField_low;
    LODWORD(v13) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      &unk_1C029FBF7);
  }
}
