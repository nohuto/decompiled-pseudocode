__int64 __fastcall sub_14010B1BC(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  unsigned int v7; // edi
  __int128 v9; // [rsp+48h] [rbp-49h] BYREF
  __int128 v10; // [rsp+58h] [rbp-39h]
  __int128 v11; // [rsp+68h] [rbp-29h]
  void *v12; // [rsp+78h] [rbp-19h]
  _DWORD v13[3]; // [rsp+88h] [rbp-9h] BYREF
  char v14; // [rsp+95h] [rbp+4h]
  __int64 (__fastcall *v15)(__int64, int, int, int, int); // [rsp+B0h] [rbp+1Fh]
  int v16; // [rsp+D8h] [rbp+47h]
  __int64 v17; // [rsp+108h] [rbp+77h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::RegisterAsDefaultQueue", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  sub_1400B6C40((char *)v13, 0, 0x60uLL);
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x21 )
      v13[0] = -1;
    else
      v13[0] = stru_1400DF410.Queue.ListEntry.Flink[16].Blink;
  }
  else
  {
    v13[0] = 96;
  }
  v13[2] = 0;
  v15 = sub_14005CE70;
  v13[1] = 2;
  v16 = -1;
  v14 = 1;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      LODWORD(v9) = -1;
    else
      LODWORD(v9) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    LODWORD(v9) = 56;
  }
  v17 = 0LL;
  v12 = off_1400DF2C8;
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int128 *, __int64 *))(qword_1400DF678 + 1216))(
         qword_1400DF6A8,
         a2,
         v13,
         &v9,
         &v17);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A1CFC(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        2u,
        6u,
        0xCu,
        (__int64)&unk_1400D7CC0,
        L"WdfIoQueueCreate(device, &queueConfig, &queueAttributes, &queue)",
        v7);
  }
  else
  {
    v7 = 0;
    *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                 qword_1400DF6A8,
                 v17,
                 off_1400DF2C8) = a1;
  }
  if ( v2 )
  {
    sub_14005C8D0(v2);
    ExFreePool(v2);
  }
  return v7;
}
