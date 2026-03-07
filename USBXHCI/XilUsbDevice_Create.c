__int64 __fastcall XilUsbDevice_Create(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 v5; // rsi
  char v6; // dl
  int v7; // r9d
  __int64 v8; // r8
  int SecureObject; // edi
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v15; // ecx

  v2 = (_BYTE *)(a1 + 608);
  *(_QWORD *)(a1 + 664) = a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(v5 + 601);
  *(_BYTE *)(a1 + 657) = v6;
  if ( v6 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 608, a2);
    if ( SecureObject < 0 )
      goto LABEL_18;
    v14 = *(_DWORD *)(v5 + 604);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v7 = 3 - (v2[48] != 0);
          v2[50] = v2[48] == 0;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
          v7 = 1;
        }
      }
      else
      {
        v2[50] = 0;
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
      v2[50] = 1;
    }
    v6 = v2[49];
    v8 = (__int64)(v2 + 8);
  }
  else
  {
    v7 = 1;
    v8 = a1 + 608;
    *(_BYTE *)(a1 + 658) = 1;
  }
  SecureObject = XilCoreUsbDevice_Create(a1, v6, v8, v7);
  if ( SecureObject < 0 )
LABEL_18:
    XilUsbDevice_FreeResources(v2);
  return (unsigned int)SecureObject;
}
