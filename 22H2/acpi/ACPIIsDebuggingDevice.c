/*
 * XREFs of ACPIIsDebuggingDevice @ 0x1C0098DCC
 * Callers:
 *     ACPIBuildPdo @ 0x1C0011198 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIQueryDeviceBiosName @ 0x1C0099CE0 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIIsDebuggingDevice(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  String2 = 0LL;
  v1 = ACPIQueryDeviceBiosName(a1, &String2);
  if ( v1 >= 0 )
  {
    v1 = -1073741823;
    v2 = (_QWORD *)gDebuggingDevicesInUse + 1;
    v3 = 0;
    while ( !*v2 || RtlCompareUnicodeString((PCUNICODE_STRING)&gDebuggingDevicesInUse[v3], &String2, 0) )
    {
      ++v3;
      v2 += 2;
      if ( v3 >= 2 )
        goto LABEL_5;
    }
    v1 = 0;
  }
LABEL_5:
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0x53706341u);
  return (unsigned int)v1;
}
