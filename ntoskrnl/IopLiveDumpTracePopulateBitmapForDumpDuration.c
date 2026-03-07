char __fastcall IopLiveDumpTracePopulateBitmapForDumpDuration(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _DWORD *v5; // rcx
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-31h]
  int v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+74h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+A0h] [rbp+7h]
  int v17; // [rsp+A8h] [rbp+Fh]
  int v18; // [rsp+ACh] [rbp+13h]
  __int64 *v19; // [rsp+B0h] [rbp+17h]
  int v20; // [rsp+B8h] [rbp+1Fh]
  int v21; // [rsp+BCh] [rbp+23h]
  __int64 *v22; // [rsp+C0h] [rbp+27h]
  int v23; // [rsp+C8h] [rbp+2Fh]
  int v24; // [rsp+CCh] [rbp+33h]
  __int64 v25; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+110h] [rbp+77h] BYREF

  v26 = a3;
  v25 = a2;
  LOBYTE(v4) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v4 )
  {
    if ( !v5[106] )
    {
      v4 = v5[80];
      if ( (v4 & 1) != 0 )
      {
        UserData.Reserved = 0;
        v14 = 0;
        v6 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        UserData.Ptr = (ULONGLONG)&v25;
        UserData.Size = 8;
        v12 = &v26;
        if ( (v5[20] & 1) == 0 )
          v6 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        v13 = 8;
        LOBYTE(v4) = EtwWriteEx(IopLiveDumpEtwRegHandle, v6, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        if ( (unsigned int)dword_140C06280 > 5 )
        {
          LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL);
          if ( (_BYTE)v4 )
          {
            v18 = 0;
            v21 = 0;
            v24 = 0;
            v16 = &v8;
            v9 = v25;
            v19 = &v9;
            v10 = v26;
            v22 = &v10;
            v8 = 0x1000000LL;
            v17 = 8;
            v20 = 8;
            v23 = 8;
            LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C06280,
                           (unsigned __int8 *)byte_14002BDC1,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           5u,
                           &v15);
          }
        }
      }
    }
  }
  return v4;
}
