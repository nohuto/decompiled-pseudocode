__int64 __fastcall DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(
        unsigned int a1,
        ACCESS_MASK a2,
        void **a3,
        unsigned int *a4)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm0
  NTSTATUS v16; // ebx
  HANDLE v17; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v21; // [rsp+48h] [rbp-B8h] BYREF
  char v22; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v23[10]; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+110h] [rbp+10h]
  wchar_t v25; // [rsp+114h] [rbp+14h]

  *(_QWORD *)&v21.Length = 10879140LL;
  v6 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v9 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[1] = v6;
  Handle = 0LL;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  *(_QWORD *)&v20.Length = 1179648LL;
  v23[2] = v9;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers\\InternalMonEdid";
  v23[5] = v12;
  v23[6] = v13;
  v23[7] = *(_OWORD *)L"icsDrivers\\InternalMonEdid";
  v14 = *(_DWORD *)L"id";
  v15 = *(_OWORD *)L"nalMonEdid";
  v23[8] = *(_OWORD *)L"rs\\InternalMonEdid";
  v23[9] = v15;
  v24 = v14;
  v25 = aRegistryMachin_23[82];
  v21.Buffer = (wchar_t *)v23;
  v20.Buffer = (wchar_t *)&v22;
  v16 = OpenRegistrySubkey(&Handle, a2, 0LL, &v21, a4);
  if ( v16 < 0
    || (RtlUnicodeStringPrintf(&v20, L"%08x", a1), v16 = OpenRegistrySubkey(a3, a2, Handle, &v20, a4),
                                                   v16 != -1073741772)
    || a4 )
  {
    v17 = Handle;
  }
  else
  {
    v17 = 0LL;
    *a3 = Handle;
    v16 = 0;
    Handle = 0LL;
  }
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)v16;
}
