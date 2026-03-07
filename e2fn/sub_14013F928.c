void __fastcall sub_14013F928(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  _BYTE v16[8]; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[8]; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-8h]
  int v20; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0;
  v20 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterWolPatterns::EvtDeviceWakeFromSxTriggered",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[65];
  v20 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6) - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          sub_140140584(a1);
          HIBYTE(v20) = 1;
        }
        else
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v10 = (const wchar_t *)&unk_1400D44E0;
            v11 = (const wchar_t *)&unk_1400D44E0;
            v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(
                                                   a1 + 7,
                                                   v18)
                                    + 16LL);
            if ( v12 )
              v11 = v12;
            v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(
                                                   a1 + 7,
                                                   v16)
                                    + 16LL);
            if ( v13 )
              v10 = v13;
            sub_1400A3320(
              *(_QWORD *)(a1[22] + 16LL),
              4u,
              0xBu,
              0x40u,
              (__int64)&unk_1400D9E10,
              v10,
              v11,
              (const wchar_t *)qword_14014EC70);
            v1 = 3;
          }
          if ( (v1 & 2) != 0 )
          {
            v14 = v17;
            v1 &= ~2u;
            if ( v17 )
            {
              if ( !_InterlockedDecrement(v17 + 2) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
                if ( !_InterlockedDecrement(v14 + 3) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
              }
            }
          }
          if ( (v1 & 1) != 0 )
          {
            v15 = v19;
            if ( v19 )
            {
              if ( !_InterlockedDecrement(v19 + 2) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
                if ( !_InterlockedDecrement(v15 + 3) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
              }
            }
          }
        }
      }
      else
      {
        sub_140140FB8(a1);
        BYTE2(v20) = 1;
      }
    }
    else
    {
      sub_140140584(a1);
      BYTE1(v20) = 1;
    }
  }
  else
  {
    sub_140140C90(a1);
    LOBYTE(v20) = 1;
  }
  sub_14014C804(a1[71], &v20);
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
}
