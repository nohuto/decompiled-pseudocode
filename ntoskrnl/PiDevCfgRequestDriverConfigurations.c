/*
 * XREFs of PiDevCfgRequestDriverConfigurations @ 0x14095CA98
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140876268 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PiDevCfgRequestDriverConfigurations(__int64 a1, __int64 a2)
{
  int DriverConfiguration; // eax
  int appended; // ebx
  __int64 *v6; // rsi
  __int64 i; // rdi
  int v9; // [rsp+28h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a2);
  appended = DriverConfiguration;
  if ( (int)(DriverConfiguration + 0x80000000) < 0 || DriverConfiguration == -1073740653 )
  {
    appended = PiDevCfgAppendMultiSz(&UnicodeString, (const void **)(a2 + 408), 0LL, 1);
    if ( appended >= 0 )
    {
      v6 = (__int64 *)(a2 + 208);
      for ( i = *v6; (__int64 *)i != v6; i = *(_QWORD *)i )
      {
        appended = PiDevCfgQueryDriverConfiguration(i);
        if ( ((appended + 0x80000000) & 0x80000000) == 0 && appended != -1073740653 )
          goto LABEL_13;
        appended = PiDevCfgAppendMultiSz(&UnicodeString, (const void **)(i + 408), 0LL, 1);
        if ( appended < 0 )
          goto LABEL_13;
      }
      if ( UnicodeString.Buffer )
        appended = PiDevCfgSetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (_DWORD *)a1,
                     *(const WCHAR **)(a1 + 8),
                     1,
                     *(_QWORD *)(a1 + 16),
                     v9,
                     (__int64)DEVPKEY_Device_RequestConfigurationIds,
                     8210,
                     UnicodeString.Buffer,
                     UnicodeString.Length,
                     0);
      else
        appended = -1073740653;
    }
  }
LABEL_13:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
