__int64 __fastcall MONITOR_MGR::_PersistencyRegNameFromTargetID(
        MONITOR_MGR *this,
        unsigned int a2,
        unsigned __int16 *const a3)
{
  __int64 v3; // rsi
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0;
  *(_QWORD *)&String.Length = 4063232LL;
  String.Buffer = a3;
  v5 = RtlIntegerToUnicodeString(v3, 0x10u, &String);
  v6 = v5;
  if ( v5 < 0 )
    WdLogSingleEntry2(2LL, v3, v5);
  else
    a3[String.Length] = 0;
  return v6;
}
