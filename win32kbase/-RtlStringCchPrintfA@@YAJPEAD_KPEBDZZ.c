/*
 * XREFs of ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01DF408
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C01DF7B8 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01DFB6C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0232450 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 * Callees:
 *     _vsnprintf @ 0x1C00DA954 (_vsnprintf.c)
 */

__int64 RtlStringCchPrintfA(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      a1[v5] = 0;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  return v4;
}
