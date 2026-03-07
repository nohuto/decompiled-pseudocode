void __fastcall SendBDDDiagTelemetry(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // r9d
  char v7; // [rsp+80h] [rbp-29h] BYREF
  char v8; // [rsp+81h] [rbp-28h] BYREF
  char v9; // [rsp+82h] [rbp-27h] BYREF
  char v10; // [rsp+83h] [rbp-26h] BYREF
  char v11[4]; // [rsp+84h] [rbp-25h] BYREF
  int v12; // [rsp+88h] [rbp-21h] BYREF
  int v13; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v14; // [rsp+90h] [rbp-19h] BYREF
  int v15; // [rsp+94h] [rbp-15h] BYREF
  int v16; // [rsp+98h] [rbp-11h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v18; // [rsp+A8h] [rbp-1h]
  __int64 v19; // [rsp+B0h] [rbp+7h] BYREF
  int v20; // [rsp+B8h] [rbp+Fh]
  int v21; // [rsp+BCh] [rbp+13h]
  __int64 v22; // [rsp+C0h] [rbp+17h]
  int v23; // [rsp+C8h] [rbp+1Fh]
  int v24; // [rsp+CCh] [rbp+23h]
  __int64 v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  GUID ActivityId; // [rsp+E0h] [rbp+37h] BYREF

  Pool2 = ExAllocatePool2(256LL, 34536LL, 1953656900LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v21 = 0;
    v24 = 0;
    v26 = 0LL;
    v19 = 0LL;
    v20 = 0;
    v25 = 0LL;
    v22 = Pool2;
    v23 = 34536;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(v4 + 408))(v4, &v19) >= 0 )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C013A918 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000000LL) )
        {
          v12 = *(_DWORD *)(v3 + 34528);
          v7 = *(_BYTE *)(v3 + 34524);
          v8 = *(_BYTE *)(v3 + 34520);
          v9 = *(_BYTE *)(v3 + 34516);
          v10 = *(_BYTE *)(v3 + 34504);
          v13 = *(_DWORD *)(v3 + 34512);
          v14 = *(_DWORD *)(v3 + 34508);
          v15 = *(_DWORD *)(v3 + 34500);
          v16 = *(_DWORD *)(v3 + 34496);
          v17 = v3 + 34432;
          v18 = 64;
          v11[0] = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v5,
            (unsigned int)&unk_1C00A041C,
            (unsigned int)&ActivityId,
            v6,
            (__int64)v11,
            (__int64)&v17,
            (__int64)&v16,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&v7,
            (__int64)&v12);
        }
      }
    }
    ExFreePoolWithTag((PVOID)v3, 0x74727044u);
  }
}
