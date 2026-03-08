/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00C03A8
 * Callers:
 *     CoreMsgCreatePort @ 0x1C00C01E8 (CoreMsgCreatePort.c)
 * Callees:
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0083760 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00C02B8 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00C0524 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C0604 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00C077C (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C00C0834 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00DAD28 (wcsncmp.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS AlpcPortName; // ebx
  struct _GUID *v9; // rdi
  const unsigned __int16 *v10; // rcx
  void *v11; // rcx
  void *v13; // [rsp+20h] [rbp-89h] BYREF
  struct CoreMessagingK::CoreMsgObject *v14; // [rsp+28h] [rbp-81h] BYREF
  struct _UNICODE_STRING v15; // [rsp+30h] [rbp-79h] BYREF
  char v16; // [rsp+40h] [rbp-69h] BYREF

  v14 = 0LL;
  *a4 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  if ( !wcsncmp(L"Kernel\\MIT\\InputPort", L"Kernel\\", 7uLL) )
  {
    AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                     0,
                     (__int64 (**)(void))&CoreMessagingK::ServerPortInfo::s_Vtbl,
                     (PVOID *)&v14,
                     &v13);
    if ( AlpcPortName >= 0 )
    {
      v9 = (struct _GUID *)((char *)v14 + 8);
      AlpcPortName = CoreMessagingK::Runtime::CopyString(v7, v6, (char *)v14 + 40);
      if ( AlpcPortName >= 0 )
      {
        v15.MaximumLength = 136;
        v15.Buffer = (PWSTR)&v16;
        AlpcPortName = ExUuidCreate(v9 + 1);
        if ( AlpcPortName >= 0 )
        {
          AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v9 + 1, &v15);
          if ( AlpcPortName >= 0 )
          {
            AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(
                             a2,
                             &v15,
                             (struct CoreMessagingK::ServerPortInfo *)v9);
            if ( AlpcPortName >= 0 )
            {
              AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v9 + 1, &v15);
              if ( AlpcPortName >= 0 )
              {
                AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v10, v9 + 1);
                if ( AlpcPortName >= 0 )
                {
                  v11 = 0LL;
                  *(_QWORD *)&v9[3].Data1 = CoreMessagingK::ServerPorts::s_PortInfos;
                  AlpcPortName = 0;
                  *a4 = v13;
                  CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)v9;
                  v13 = 0LL;
                  goto LABEL_10;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    AlpcPortName = -1073741585;
  }
  v11 = v13;
LABEL_10:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)AlpcPortName;
}
