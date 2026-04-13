/*
 * XREFs of _TelIsOsInProcessorMode@4 @ 0x10003070
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHeapPointer@@YGXPAX@Z @ 0x100021F6 (-CloseHeapPointer@@YGXPAX@Z.c)
 *     TelpIsDeviceAzureADJoined @ 0x100022A6 (TelpIsDeviceAzureADJoined.c)
 *     ?TelpGetTelemetryClientRegPath@@YGPAGXZ @ 0x100023F5 (-TelpGetTelemetryClientRegPath@@YGPAGXZ.c)
 *     _TelIsProcessorModeAllowed@0 @ 0x10003030 (_TelIsProcessorModeAllowed@0.c)
 *     ?StringCchCatW@@YGJPAGIPBG@Z @ 0x10003317 (-StringCchCatW@@YGJPAGIPBG@Z.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 *     _memset @ 0x10004BC6 (_memset.c)
 */

int __userpurge TelIsOsInProcessorMode@<eax>(wil::details::in1diag3 *this@<ecx>, unsigned int a2@<ebx>, int *a3)
{
  void *v4; // esi
  void *v5; // eax
  wil::details::in1diag3 *v6; // ecx
  wil::details::in1diag3 *v7; // ecx
  unsigned __int16 *TelemetryClientRegPath; // eax
  wil::details::in1diag3 *v9; // ecx
  unsigned __int16 *v10; // esi
  signed int v11; // edi
  LSTATUS ValueW; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // [esp-4h] [ebp-22Ch]
  const char *v16; // [esp+0h] [ebp-228h]
  const char *v17; // [esp+4h] [ebp-224h]
  DWORD pcbData; // [esp+Ch] [ebp-21Ch] BYREF
  int pvData; // [esp+10h] [ebp-218h] BYREF
  int v20; // [esp+14h] [ebp-214h]
  char v21; // [esp+1Bh] [ebp-20Dh] BYREF
  WCHAR SubKey[260]; // [esp+1Ch] [ebp-20Ch] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(this, (void *)0x80070057, (unsigned int)v16, v17, 0);
    return -2147024809;
  }
  v15 = a2;
  if ( !TelIsProcessorModeAllowed() )
  {
    v4 = 0;
    goto LABEL_8;
  }
  v21 = 0;
  v5 = TelpIsDeviceAzureADJoined(&v21);
  v4 = v5;
  if ( (int)v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(v6, v5, a2, v16, (int)v17);
    return (int)v4;
  }
  if ( !v21 )
  {
LABEL_8:
    *a3 = 0;
    return (int)v4;
  }
  v20 = 0;
  *a3 = 1;
  pvData = 1;
  memset(SubKey, 0, sizeof(SubKey));
  TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v7);
  v10 = TelemetryClientRegPath;
  if ( TelemetryClientRegPath )
  {
    v11 = StringCchCopyW((size_t)TelemetryClientRegPath, a2, (const unsigned __int16 *)v16);
    if ( v11 >= 0 )
    {
      v11 = StringCchCatW(L"\\RegionalSettings", v15, (const unsigned __int16 *)v16);
      if ( v11 >= 0 )
      {
        pcbData = 8;
        ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"IsProcessorMode", 0x10040u, 0, &pvData, &pcbData);
        v11 = ValueW;
        v13 = ValueW < 0;
        if ( ValueW > 0 )
        {
          v11 = (unsigned __int16)ValueW | 0x80070000;
          v13 = 1;
        }
        if ( v13 || (v14 = 1, pvData != 1) || v20 )
          v14 = 0;
        v9 = (wil::details::in1diag3 *)a3;
        *a3 = v14;
        if ( v11 >= 0 )
          goto LABEL_22;
      }
    }
  }
  else
  {
    v11 = -2147467259;
  }
  wil::details::in1diag3::Return_Hr(v9, (void *)v11, v15, v16, (int)v17);
LABEL_22:
  if ( v10 )
    CloseHeapPointer(v10);
  return v11;
}
