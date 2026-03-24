/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F5EC0
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _wcsnicmp_0 @ 0x1C0024962 (_wcsnicmp_0.c)
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0028854 (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 *     DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139___ @ 0x1C005E05C (DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139___.c)
 */

__int64 __fastcall DXGMONITOR::_ReadDisplayHdrSupportFromPnpRegistry(
        DXGMONITOR *this,
        bool *a2,
        NTSTATUS (__stdcall *a3)(HANDLE Handle),
        bool *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // r14
  NTSTATUS (__stdcall *v23)(HANDLE); // rbx
  int v24; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  const wchar_t *v27; // [rsp+38h] [rbp-51h] BYREF
  void *DeviceRegKey; // [rsp+40h] [rbp-49h] BYREF
  NTSTATUS (__stdcall *v29)(HANDLE); // [rsp+48h] [rbp-41h] BYREF
  bool *v30; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31; // [rsp+58h] [rbp-31h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  void **v33; // [rsp+70h] [rbp-19h] BYREF
  char v34; // [rsp+78h] [rbp-11h]
  __int128 KeyValueInformation; // [rsp+80h] [rbp-9h] BYREF

  *((_DWORD *)this + 191) = 0;
  DeviceRegKey = 0LL;
  *a2 = 0;
  *(_BYTE *)a3 = 0;
  *a4 = 0;
  v6 = *((_DWORD *)this + 10);
  v30 = a4;
  v29 = a3;
  if ( (v6 & 0x10) == 0 )
  {
    LODWORD(v7) = -1073741661;
    goto LABEL_48;
  }
  v8 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdTrace(v10, v9);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = v7;
    goto LABEL_48;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  ResultLength = 0;
  v27 = 0LL;
  KeyValueInformation = 0LL;
  DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139_((__int64)&v33, (__int64)&v27);
  LODWORD(v7) = ZwQueryValueKey(
                  DeviceRegKey,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &ResultLength);
  v31 = (unsigned int)v7;
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = -1073741772;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = this;
    goto LABEL_45;
  }
  if ( (_DWORD)v7 == -1073741789 || (_DWORD)v7 == -2147483643 )
  {
    v27 = (const wchar_t *)operator new[](ResultLength, 0x4D677844u, PagedPool);
    if ( !v27 )
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      WdLogEvent5_WdError(v16);
      LODWORD(v7) = -1073741801;
      goto LABEL_45;
    }
    LODWORD(v7) = ZwQueryValueKey(
                    DeviceRegKey,
                    &DestinationString,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    0x10u,
                    &ResultLength);
    v31 = (unsigned int)v7;
  }
  if ( (int)v7 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 32) = (int)v7;
    goto LABEL_44;
  }
  v18 = v27;
  if ( *((_DWORD *)v27 + 1) != 7 )
  {
    v19 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = *((unsigned int *)v27 + 1);
    WdLogEvent5_WdError(v19);
    LODWORD(v7) = -1073741788;
    goto LABEL_45;
  }
  v20 = *((_DWORD *)v27 + 2) >> 1;
  v21 = v20 - 37;
  if ( (unsigned int)(v20 - 37) <= 0x4B )
  {
    v20 = (unsigned int)(v20 - 1);
    LODWORD(v12) = (3134165325u * (unsigned __int64)(unsigned int)v20) >> 32;
    if ( (_DWORD)v20 == 37 * ((unsigned int)v20 / 0x25) )
    {
      v22 = 0LL;
      if ( !v21 )
        goto LABEL_45;
      v23 = v29;
      while ( 1 )
      {
        if ( wcsnicmp_0(&v18[v22 + 6], L"20C5A9AF-CD1A-42B1-AA71-4C96A273DEF1", 0x25uLL) )
        {
          if ( wcsnicmp_0(&v18[v22 + 6], L"8B48F401-A136-402F-B24C-A4ABCD2685CA", 0x25uLL) )
          {
            if ( wcsnicmp_0(&v18[v22 + 6], L"D4C5928E-9488-46AF-8DA8-4F996EE4177F", 0x25uLL) )
            {
              if ( wcsnicmp_0(&v18[v22 + 6], L"78137DFC-3400-412E-B0AF-08120754623A", 0x25uLL) )
              {
                if ( wcsnicmp_0(&v18[v22 + 6], L"1A6CBAFB-15FF-4CF0-AD75-12360E9B9F4A", 0x25uLL) )
                {
                  if ( wcsnicmp_0(&v18[v22 + 6], L"86413F8C-0CDB-4D49-81F7-06BB64A8FED1", 0x25uLL) )
                  {
                    if ( wcsnicmp_0(&v18[v22 + 6], L"F838B10E-FD7B-41E0-B6DC-3DE029FA0F87", 0x25uLL) )
                    {
                      if ( wcsnicmp_0(&v18[v22 + 6], L"0C3F29D1-6BD6-456E-AEA2-19D5AC357632", 0x25uLL) )
                      {
                        if ( !wcsnicmp_0(&v18[v22 + 6], L"476D0CA8-A5F2-41E9-977D-E6FE84F985B1", 0x25uLL) )
                          *v30 = 1;
                      }
                      else
                      {
                        *(_BYTE *)v23 = 1;
                      }
                    }
                    else
                    {
                      *a2 = 1;
                    }
                    goto LABEL_41;
                  }
                  v24 = 6;
                }
                else
                {
                  v24 = 5;
                }
              }
              else
              {
                v24 = 4;
              }
            }
            else
            {
              v24 = 3;
            }
          }
          else
          {
            v24 = 2;
          }
        }
        else
        {
          v24 = 1;
        }
        if ( *((_DWORD *)this + 191) > v24 )
          v24 = *((_DWORD *)this + 191);
        *((_DWORD *)this + 191) = v24;
LABEL_41:
        v22 = (unsigned int)(v22 + 74);
        if ( (unsigned int)v22 >= v21 )
        {
          LODWORD(v7) = v31;
          goto LABEL_45;
        }
      }
    }
  }
  v17 = WdLogNewEntry5_WdError(v20, v12);
  LODWORD(v7) = -1073741823;
  *(_QWORD *)(v17 + 32) = -1073741823LL;
LABEL_44:
  *(_QWORD *)(v17 + 24) = this;
  WdLogEvent5_WdError(v17);
LABEL_45:
  if ( v34 && *v33 )
    operator delete[](*v33);
LABEL_48:
  if ( DeviceRegKey )
  {
    v30 = (bool *)DeviceRegKey;
    v29 = ZwClose;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&v29,
      &v30);
  }
  return (unsigned int)v7;
}
