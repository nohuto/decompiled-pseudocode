/*
 * XREFs of ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C0005604
 * Callers:
 *     rimSignalReadComplete @ 0x1C0005120 (rimSignalReadComplete.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::ReadComplete(__int64 a1)
{
  const int *v2; // rdx
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-18h]
  int v6; // [rsp+60h] [rbp-10h]
  int v7; // [rsp+64h] [rbp-Ch]

  if ( (unsigned __int8)isChildPartition() )
  {
    if ( (unsigned int)dword_1C0289810 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 0x10000LL) )
    {
      v2 = &dword_1C025A08E;
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)dword_1C0289810 > 7 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 0x10000LL) )
  {
    v2 = (const int *)&unk_1C025A0E4;
LABEL_9:
    v5 = &v3;
    v7 = 0;
    v3 = a1;
    v6 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0289810, (int)v2, 0, 0, 3u, &v4);
  }
}
