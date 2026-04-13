/*
 * XREFs of ?TelpGetTelemetryClientRegPath@@YGPAGXZ @ 0x100023F5
 * Callers:
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     TelpReadRegistryString @ 0x10002247 (TelpReadRegistryString.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 */

unsigned __int16 *__thiscall TelpGetTelemetryClientRegPath(wil::details::in1diag3 *this)
{
  int v1; // eax
  bool v2; // sf
  HANDLE ProcessHeap; // eax
  wil::details::in1diag3 *v4; // ecx
  void *v5; // esi
  HANDLE v7; // eax
  HANDLE v8; // eax
  HANDLE v9; // eax
  SIZE_T v10; // [esp-4h] [ebp-14h]
  unsigned int v11; // [esp+0h] [ebp-10h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-Ch]
  DWORD v13; // [esp+Ch] [ebp-4h] BYREF

  v13 = 0;
  v1 = TelpReadRegistryString(
         this,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
         L"RedirectedRegistryRoot",
         0,
         &v13);
  v2 = v1 < 0;
  if ( v1 > 0 )
  {
    v1 = (unsigned __int16)v1 | 0x80070000;
    v2 = v1 < 0;
  }
  if ( v2 && v1 == -2147024662 )
  {
    v10 = 2 * v13;
    ProcessHeap = GetProcessHeap();
    v5 = HeapAlloc(ProcessHeap, 8u, v10);
    if ( !v5 )
    {
LABEL_10:
      SetLastError(0xEu);
      return 0;
    }
    if ( TelpReadRegistryString(
           v4,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
           L"RedirectedRegistryRoot",
           v5,
           &v13) >= 0 )
      return (unsigned __int16 *)v5;
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v5);
  }
  v8 = GetProcessHeap();
  v5 = HeapAlloc(v8, 8u, 0x80u);
  if ( !v5 )
    goto LABEL_10;
  if ( StringCchCopyW((size_t)L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack", v11, v12) >= 0 )
    return (unsigned __int16 *)v5;
  v9 = GetProcessHeap();
  HeapFree(v9, 0, v5);
  return 0;
}
