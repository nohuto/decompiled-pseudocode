/*
 * XREFs of McTemplateK0pz_EtwWriteTransfer @ 0x14055ED64
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pz_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  va_list v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  const wchar_t *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v15; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, const wchar_t *);
  v3 = v15;
  va_copy(v8, va);
  v9 = 8LL;
  if ( v15 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v15[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v11 = v5;
  v12 = 0;
  if ( !v15 )
    v3 = L"NULL";
  v10 = v3;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_InstancePath,
           0LL,
           3u,
           &v7);
}
