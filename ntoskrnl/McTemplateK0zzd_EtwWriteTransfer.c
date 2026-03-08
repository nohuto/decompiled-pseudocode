/*
 * XREFs of McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4
 * Callers:
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiSwIrpPropertySet @ 0x1407857F8 (PiSwIrpPropertySet.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x140808A64 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140808FD8 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpSetLifetime @ 0x140858894 (PiSwIrpSetLifetime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  __int64 v6; // rax
  const wchar_t *v8; // rdx
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r8d
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  char *v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]

  v6 = -1LL;
  v8 = a5;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v16 = v11;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v9 = 2 * v6 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v8 = L"NULL";
  v19 = v9;
  v18 = v8;
  v21 = &a6;
  v20 = 0;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 4u, &v14);
}
