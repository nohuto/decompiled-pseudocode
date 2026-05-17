/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180108E80
 * Callers:
 *     RtlSetHeapInformation @ 0x180074DB0 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x180108EF4 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180108F48 (RtlpHpStackTraceEnable.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  _QWORD v4[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == -1 )
  {
    if ( (v2 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset(v4, 0, 0x60uLL);
    LODWORD(v4[3]) = 0x10000000;
    v4[10] = v2;
    return RtlpHeapPerformCrossProcessQuery(v1, (__int64)v4);
  }
}
