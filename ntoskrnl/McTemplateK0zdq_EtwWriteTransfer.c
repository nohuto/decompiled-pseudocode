/*
 * XREFs of McTemplateK0zdq_EtwWriteTransfer @ 0x14056015C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14020368C (PnpLogActionQueueEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zdq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6)
{
  __int64 v6; // rax
  int v7; // ecx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  char *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v12 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = a4;
  v13 = &a5;
  v14 = 4LL;
  v15 = &a6;
  v16 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 4u, &v9);
}
