__int64 __fastcall sub_140161000(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-71h]
  __int64 (__fastcall **v9)(PVOID); // [rsp+40h] [rbp-59h] BYREF
  __int16 v10; // [rsp+48h] [rbp-51h]
  PVOID P; // [rsp+50h] [rbp-49h]
  __int64 v12; // [rsp+58h] [rbp-41h]
  __int64 v13; // [rsp+60h] [rbp-39h]
  __int128 v14; // [rsp+68h] [rbp-31h] BYREF
  __int128 v15; // [rsp+78h] [rbp-21h]
  __int128 v16; // [rsp+88h] [rbp-11h]
  __int64 v17; // [rsp+98h] [rbp-1h]
  _DWORD v18[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 (__fastcall *v19)(__int64, __int64); // [rsp+A8h] [rbp+Fh]
  __int128 v20; // [rsp+B0h] [rbp+17h]

  sub_1400A26A0();
  stru_1400DF410.Timer = (PIO_TIMER)1;
  *(_QWORD *)&stru_1400DF410.Type = 0LL;
  stru_1400DF410.DriverObject = (struct _DRIVER_OBJECT *)&unk_1400D41B0;
  stru_1400DF410.NextDevice = 0LL;
  stru_1400DF410.CurrentIrp = 0LL;
  stru_1400DF410.DeviceExtension = 0LL;
  stru_1400DF410.DeviceType = 0;
  sub_1400E62D8();
  stru_1400DF410.CurrentIrp = 0LL;
  sub_1400E6210();
  LOBYTE(v10) = 0;
  v9 = &off_1400D41D0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400010F4(&v9, (__int64)"E2fn", 4uLL);
  v4 = sub_1400E6668((__int64)&v9);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  if ( v4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A1E6C(*(_QWORD *)(*((_QWORD *)::P + 1) + 16LL), 2u, 0xEu, 0xAu, (__int64)&unk_1400D41C0, v4);
    return v4;
  }
  v6 = sub_140003B44();
  v4 = v6;
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A1CFC(
        *(_QWORD *)(*((_QWORD *)::P + 1) + 16LL),
        2u,
        0xEu,
        0xBu,
        (__int64)&unk_1400D41C0,
        L"StringsFactory::CreateInstance()",
        v6);
    return v4;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    sub_1400A1C34(*(_QWORD *)(*((_QWORD *)::P + 1) + 16LL), 4u, 0xEu, 0xCu, (__int64)&unk_1400D41C0);
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      LODWORD(v14) = -1;
    else
      LODWORD(v14) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    LODWORD(v14) = 56;
  }
  v18[1] = 0;
  *((_QWORD *)&v15 + 1) = 0x100000001LL;
  *((_QWORD *)&v14 + 1) = sub_1400E60F0;
  v20 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x18 )
      v18[0] = -1;
    else
      v18[0] = stru_1400DF410.Queue.ListEntry.Flink[12].Flink;
  }
  else
  {
    v18[0] = 32;
  }
  v19 = sub_1400E6000;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, _DWORD *, _QWORD))(qword_1400DF678 + 928))(
         qword_1400DF6A8,
         a1,
         a2,
         &v14,
         v18,
         0LL);
  v4 = v7;
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LODWORD(v8) = v7;
      sub_1400A1E6C(*(_QWORD *)(*((_QWORD *)::P + 1) + 16LL), 2u, 0xEu, 0xDu, (__int64)&unk_1400D41C0, v8);
    }
    sub_1400E6170();
    return v4;
  }
  v10 = 0;
  v9 = &off_1400D41D0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"E2fn", 4uLL);
  sub_140002D28(&v9);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    sub_1400A1C34(*(_QWORD *)(*((_QWORD *)::P + 1) + 16LL), 4u, 0xEu, 0xEu, (__int64)&unk_1400D41C0);
  return 0LL;
}
