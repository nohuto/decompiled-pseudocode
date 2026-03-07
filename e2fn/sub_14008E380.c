void __fastcall sub_14008E380(__int64 *a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rcx
  int v20; // ecx
  _BYTE v21[8]; // [rsp+48h] [rbp-19h] BYREF
  volatile signed __int32 *v22; // [rsp+50h] [rbp-11h]
  _BYTE v23[8]; // [rsp+58h] [rbp-9h] BYREF
  volatile signed __int32 *v24; // [rsp+60h] [rbp-1h]
  __int128 v25; // [rsp+68h] [rbp+7h] BYREF
  __int128 v26; // [rsp+78h] [rbp+17h]
  _OWORD v27[2]; // [rsp+88h] [rbp+27h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterLink::IndicateLinkState", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[3];
  LODWORD(v25) = 0;
  *((_QWORD *)&v25 + 1) = 0LL;
  *(_QWORD *)&v26 = 0LL;
  DWORD2(v26) = 0;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, &v25);
  v7 = v25;
  v8 = v26;
  v9 = *((_QWORD *)&v25 + 1);
  if ( *((_DWORD *)a1 + 14) == (_DWORD)v25 && a1[8] == *((_QWORD *)&v25 + 1) && *((_DWORD *)a1 + 18) == (_DWORD)v26 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 16))(a1 - 37, v23) + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*(a1 - 37) + 24))(a1 - 37, v21);
      LOBYTE(v14) = 4;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16),
        v14,
        10,
        16,
        (__int64)&unk_1400D9BD0,
        (__int64)v10,
        (__int64)v11,
        (__int64)qword_1400B7720);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v22;
      v1 &= ~2u;
      if ( v22 )
      {
        if ( !_InterlockedDecrement(v22 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 8LL))(v16, v9);
          if ( !_InterlockedDecrement(v16 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v24;
      if ( v24 )
      {
        if ( !_InterlockedDecrement(v24 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 8LL))(v17, v9);
          if ( !_InterlockedDecrement(v17 + 3) )
          {
            v18 = *(_QWORD *)v17;
            v19 = v17;
LABEL_25:
            (*(void (__fastcall **)(volatile signed __int32 *))(v18 + 16))(v19);
          }
        }
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 14) = v25;
    a1[8] = v9;
    *((_DWORD *)a1 + 18) = v8;
    v20 = v7 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
      {
        v18 = *a1;
        v19 = (volatile signed __int32 *)a1;
        goto LABEL_25;
      }
      sub_14008E988(a1 - 44);
    }
    else
    {
      v27[0] = v25;
      v27[1] = v26;
      sub_14008E608(a1 - 44, v27);
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
