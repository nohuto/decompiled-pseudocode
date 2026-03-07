__int64 __fastcall CheckUSBFnConfiguration(_DWORD *a1, const wchar_t *a2)
{
  __int64 v4; // rax
  rsize_t v5; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v7; // rbp
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  int String; // eax
  wchar_t *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-48h]
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 146;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v5, 1430540870LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    wcscpy_s(Pool2, v5, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
    wcscat_s(v7, v5, a2);
    v8 = MyRegOpenKeyForRead(v9, v7, &Handle);
    if ( v8 >= 0 )
    {
      String = MyRegQueryString(Handle);
      v12 = (wchar_t *)P;
      v8 = String;
      if ( String >= 0 )
      {
        LODWORD(v13) = 0;
        if ( *(_WORD *)P )
        {
          do
          {
            if ( *a1 == 14 )
              break;
            if ( (*a1 & 2) != 0 || _wcsicmp(&v12[(unsigned int)v13], L"MTP") )
            {
              if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v12[(unsigned int)v13], L"IpOverUsb") )
              {
                if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v12[(unsigned int)v13], L"VidStream") )
                  *a1 |= 8u;
              }
              else
              {
                *a1 |= 4u;
              }
            }
            else
            {
              *a1 |= 2u;
            }
            v14 = -1LL;
            do
              ++v14;
            while ( v12[(unsigned int)v13 + v14] );
            v13 = (unsigned int)(v14 + v13 + 1);
          }
          while ( v12[v13] );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x1Cu,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          String);
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v10, 0x1Bu, v16, v7);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x1Au,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        -1073741670);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
