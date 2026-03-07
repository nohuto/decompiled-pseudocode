char __fastcall TtmpInitializeWatchdogTimeouts(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = &unk_140C09220;
  v4 = 0;
  v2 = 6LL;
  do
  {
    if ( TtmpGetConfigOverride(a1, *((const WCHAR **)v1 - 1), &v4) == 1 )
      *v1 = v4;
    v1 += 6;
    --v2;
  }
  while ( v2 );
  if ( TtmpGetConfigOverride(a1, L"TtmDeviceCalloutCrashEnabled", &v5) == 1 && v5 )
    TtmpDeviceCalloutCrashDumpEnabled = 1;
  return 1;
}
