char __fastcall IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]
  __int64 v16; // [rsp+C8h] [rbp+6Fh] BYREF

  v16 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v4 + 424) )
    {
      v3 = *(_DWORD *)(v4 + 320);
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v16;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(
                       IopLiveDumpEtwRegHandle,
                       &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_GENERATE_IPT_SECONDARY_DATA,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       1u,
                       &UserData);
        if ( (unsigned int)dword_140C06280 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v12 = 0;
            v15 = 0;
            v10 = &v6;
            v7 = v16;
            v6 = 0x1000000LL;
            v13 = &v7;
            v11 = 8;
            v14 = 8;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C06280,
                           (unsigned __int8 *)byte_14002BBE1,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v9);
          }
        }
      }
    }
  }
  return v3;
}
