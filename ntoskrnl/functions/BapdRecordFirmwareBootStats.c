void BapdRecordFirmwareBootStats()
{
  REGHANDLE v0; // rdi
  _QWORD *Pool2; // rbx
  unsigned __int64 v2; // kr00_8
  ULONG Tag[2]; // [rsp+38h] [rbp-D0h] BYREF
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 Data; // [rsp+48h] [rbp-C0h] BYREF
  REGHANDLE v6; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 *v16; // [rsp+B8h] [rbp-50h]
  __int64 v17; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *p_Data; // [rsp+C8h] [rbp-40h]
  __int64 v19; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  unsigned __int64 *v22; // [rsp+E8h] [rbp-20h]
  __int64 v23; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+F8h] [rbp-10h] BYREF
  REGHANDLE *p_RegHandle; // [rsp+118h] [rbp+10h]
  __int64 v26; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v27; // [rsp+128h] [rbp+20h]
  __int64 v28; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v29; // [rsp+138h] [rbp+30h]
  __int64 v30; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v31; // [rsp+148h] [rbp+40h]
  __int64 v32; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v33; // [rsp+158h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+58h]

  v8 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  v0 = 0LL;
  RegHandle = 0LL;
  Pool2 = 0LL;
  Tag[0] = 0;
  Data = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06728, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle) >= 0
      && ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140C020E8[0])(34LL, 0LL, 0LL, Tag) == -1073741820
      && Tag[0]
      && (Pool2 = (_QWORD *)ExAllocatePool2(256LL, Tag[0], 1935832902LL)) != 0LL
      && ((int (__fastcall *)(__int64, _QWORD, _QWORD *, ULONG *))off_140C020E8[0])(34LL, Tag[0], Pool2, Tag) >= 0 )
    {
      v0 = RegHandle;
      v6 = Pool2[2] / 0xF4240uLL;
      v7 = Pool2[3] / 0xF4240uLL;
      Data = Pool2[4] / 0xF4240uLL;
      v8 = Pool2[5] / 0xF4240uLL;
      v2 = Pool2[6];
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v6;
      v16 = &v7;
      p_Data = &Data;
      v20 = &v8;
      v22 = &v9;
      v9 = v2 / 0xF4240;
      v17 = 8LL;
      v19 = 8LL;
      v21 = 8LL;
      v23 = 8LL;
      EtwWrite(RegHandle, &BOOT_FW_BOOT_PERF_DATA, 0LL, 5u, &UserData);
      if ( (unsigned int)dword_140C06728 > 4 && tlgKeywordOn((__int64)&dword_140C06728, 0x400000000000LL) )
      {
        RegHandle = v6;
        v26 = 8LL;
        p_RegHandle = &RegHandle;
        v10 = v7;
        v27 = &v10;
        v11 = Data;
        v29 = &v11;
        v12 = v8;
        v31 = &v12;
        v13 = v9;
        v33 = &v13;
        v28 = 8LL;
        v30 = 8LL;
        v32 = 8LL;
        v34 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06728,
          (unsigned __int8 *)&unk_140035B18,
          0LL,
          0LL,
          7u,
          &v24);
      }
    }
    else
    {
      v0 = RegHandle;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(&Data);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, Tag[0]);
  if ( v0 )
    EtwUnregister(v0);
}
