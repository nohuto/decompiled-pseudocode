/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x14000D53C
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x14000B7A4 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x14000D434 (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x14000D6C8 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x14000D784 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  const wchar_t *v12; // rax
  const wchar_t *v13; // rdx
  int v14; // ecx
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v20);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 113;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v4, v3, v5, v7, v2);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v20 + 56LL))(v20, &v19);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 116;
    goto LABEL_4;
  }
  v8 = SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v6 = v8 | 0x10000000;
  if ( v8 >= 0 )
  {
    v12 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v13 = L"Input\\Core.AlpcPort\\Server";
      v18 = L"Input\\Core.AlpcPort\\Server";
      v14 = 0;
      while ( *v12 )
      {
        ++v12;
        ++v14;
      }
      v17 = v14 | 0x80000000;
    }
    else
    {
      v13 = 0LL;
      v18 = 0LL;
    }
    v2 = (*(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, __int64))(*(_QWORD *)v19 + 24LL))(
           v19,
           (unsigned __int64)&v17 & -(__int64)(v13 != 0LL),
           hMem,
           (__int64)a1 + 8);
    v6 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v19);
      goto LABEL_22;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v7 = 124;
    goto LABEL_4;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(v10, v9, v11, 119, v8);
LABEL_22:
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  LocalFree(hMem);
  return v6;
}
