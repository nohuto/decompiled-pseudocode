/*
 * XREFs of IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140558B18
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x140A98980 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceMarkImportantDumpDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rcx
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  __int64 v8; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  __int64 *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF

  v17 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !v4[106] )
    {
      v3 = v4[80];
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v17;
        v5 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_MARK_IMPORTANT_DUMP_DATA;
        if ( (v4[20] & 1) == 0 )
          v5 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_MARK_IMPORTANT_DUMP_DATA;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(IopLiveDumpEtwRegHandle, v5, 0LL, 0, 0LL, 0LL, 1u, &UserData);
        if ( (unsigned int)dword_140C06280 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v13 = 0;
            v16 = 0;
            v11 = &v7;
            v8 = v17;
            v7 = 0x1000000LL;
            v14 = &v8;
            v12 = 8;
            v15 = 8;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C06280,
                           (unsigned __int8 *)&byte_14002BE3F,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v10);
          }
        }
      }
    }
  }
  return v3;
}
