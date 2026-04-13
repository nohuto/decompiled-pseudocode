/*
 * XREFs of _TelGetRegionalSettingsValue@12 @ 0x10003210
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHeapPointer@@YGXPAX@Z @ 0x100021F6 (-CloseHeapPointer@@YGXPAX@Z.c)
 *     TelpReadRegistryString @ 0x10002247 (TelpReadRegistryString.c)
 *     ?TelpGetTelemetryClientRegPath@@YGPAGXZ @ 0x100023F5 (-TelpGetTelemetryClientRegPath@@YGPAGXZ.c)
 *     ?StringCchCatW@@YGJPAGIPBG@Z @ 0x10003317 (-StringCchCatW@@YGJPAGIPBG@Z.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 *     _memset @ 0x10004BC6 (_memset.c)
 */

int __userpurge TelGetRegionalSettingsValue@<eax>(
        unsigned int a1@<edi>,
        const WCHAR *a2,
        wil::details::in1diag3 *a3,
        DWORD *a4)
{
  wil::details::in1diag3 *v4; // ecx
  unsigned __int16 *TelemetryClientRegPath; // eax
  wil::details::in1diag3 *v6; // ecx
  unsigned __int16 *v7; // esi
  LSTATUS RegistryString; // edi
  unsigned int v10; // [esp-4h] [ebp-220h]
  const char *v11; // [esp+0h] [ebp-21Ch]
  const char *v12; // [esp+4h] [ebp-218h]
  WCHAR v13[260]; // [esp+10h] [ebp-20Ch] BYREF

  if ( !a2 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(a3, (void *)0x80070057, (unsigned int)v11, v12, (int)a2);
    return -2147024809;
  }
  v10 = a1;
  memset(v13, 0, sizeof(v13));
  TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v4);
  v7 = TelemetryClientRegPath;
  if ( !TelemetryClientRegPath )
  {
    RegistryString = -2147467259;
LABEL_8:
    wil::details::in1diag3::Return_Hr(v6, (void *)RegistryString, v10, v11, (int)v12);
    goto LABEL_9;
  }
  RegistryString = StringCchCopyW((size_t)TelemetryClientRegPath, a1, (const unsigned __int16 *)v11);
  if ( RegistryString < 0 )
    goto LABEL_8;
  RegistryString = StringCchCatW(L"\\RegionalSettings", v10, (const unsigned __int16 *)v11);
  if ( RegistryString < 0 )
    goto LABEL_8;
  RegistryString = TelpReadRegistryString(v6, v13, a2, a3, a4);
  if ( RegistryString < 0 )
    goto LABEL_8;
LABEL_9:
  if ( v7 )
    CloseHeapPointer(v7);
  return RegistryString;
}
