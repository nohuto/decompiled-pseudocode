/*
 * XREFs of UsbhDeleteUxdSubKeys @ 0x1C005AB48
 * Callers:
 *     UsbhUxdShutdown @ 0x1C005BFA4 (UsbhUxdShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005B2B0 (UsbhGetUxdLoadKeySettings.c)
 */

__int64 __fastcall UsbhDeleteUxdSubKeys(__int64 a1, WCHAR *a2)
{
  _DWORD *v3; // r15
  char *PoolWithTag; // rbx
  ULONG v5; // edi
  ULONG v6; // edx
  ULONG v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v13[20]; // [rsp+40h] [rbp-88h] BYREF

  ResultLength[0] = 0;
  v3 = FdoExt(a1);
  memset(v13, 0, 0x44uLL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x2AuLL, 0x42554855u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = 0LL;
  v5 = 0;
  v6 = 0;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_WORD *)PoolWithTag + 20) = 0;
  while ( ZwEnumerateValueKey(a2, v6, KeyValueBasicInformation, PoolWithTag, 0x2Au, ResultLength) >= 0 )
  {
    v7 = v5++;
    if ( *((_DWORD *)PoolWithTag + 1) == 3
      && (int)UsbhGetUxdLoadKeySettings(v10, a2, PoolWithTag + 12, v13) >= 0
      && (v13[9] || v3[1294]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v8,
          v9,
          0x22u,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          (const wchar_t *)PoolWithTag + 6);
      if ( RtlDeleteRegistryValue(0x40000000u, a2, (PCWSTR)PoolWithTag + 6) >= 0 )
        v5 = v7;
    }
    v6 = v5;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
