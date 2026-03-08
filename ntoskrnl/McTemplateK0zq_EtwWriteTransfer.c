/*
 * XREFs of McTemplateK0zq_EtwWriteTransfer @ 0x1403D07E8
 * Callers:
 *     PiProcessDeviceResetAction @ 0x14055DCD8 (PiProcessDeviceResetAction.c)
 *     PiLogSurpriseRemoveEvent @ 0x14087FF28 (PiLogSurpriseRemoveEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 4LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, a3, 3u, &v8);
}
