/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B804
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0101580 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010BA38 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  HANDLE v4; // rdi
  __int64 v5; // r8
  NTSTATUS v6; // eax
  void **v7; // rbx
  const wchar_t *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  _UNICODE_STRING v12; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  NTSTATUS (__stdcall *v15)(HANDLE); // [rsp+B8h] [rbp+38h] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (a1->Flags & 0x80u) == 0
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    KeyHandle = 0LL;
    v12 = 0LL;
    v2 = 0x7FFFLL;
    v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
    v4 = 0LL;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    v5 = (0x7FFF - v2) & -(__int64)(v2 != 0);
    v6 = v2 == 0 ? 0xC000000D : 0;
    if ( v2 )
    {
      v12.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      v12.Length = 2 * v5;
      v12.MaximumLength = 2 * v5 + 2;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &v12;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v4 = KeyHandle;
    }
    if ( !v6 )
    {
      v7 = 0LL;
      v15 = 0LL;
      v12 = 0LL;
      v8 = L"HostName";
      v9 = 0x7FFFLL;
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v9;
      }
      while ( v9 );
      v10 = (0x7FFF - v9) & -(__int64)(v9 != 0);
      v11 = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
      {
        v12.Buffer = L"HostName";
        v12.Length = 2 * v10;
        v12.MaximumLength = 2 * v10 + 2;
        v11 = KRegKey::QueryValueString(&KeyHandle, &v12, (void **)&v15);
        v4 = KeyHandle;
        v7 = (void **)v15;
      }
      if ( !v11 )
        ndisMDoMiniportOp(a1, 0, 0x1021Au, v7[1], *(unsigned __int16 *)v7, 1, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x7274534Bu);
    }
    if ( v4 )
    {
      v15 = ZwClose;
      KeyHandle = v4;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v15, &KeyHandle);
    }
  }
}
