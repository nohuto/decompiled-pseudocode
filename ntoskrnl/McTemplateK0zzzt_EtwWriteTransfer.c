/*
 * XREFs of McTemplateK0zzzt_EtwWriteTransfer @ 0x140561C60
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x140807AF0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x140808E84 (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzzt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  const wchar_t *v7; // r11
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-11h]
  int v19; // [rsp+48h] [rbp-9h]
  int v20; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v21; // [rsp+50h] [rbp-1h]
  int v22; // [rsp+58h] [rbp+7h]
  int v23; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v24; // [rsp+60h] [rbp+Fh]
  int v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+6Ch] [rbp+1Bh]
  char *v27; // [rsp+70h] [rbp+1Fh]
  __int64 v28; // [rsp+78h] [rbp+27h]

  v7 = a6;
  v8 = -1LL;
  v9 = a5;
  v10 = 10;
  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v19 = v12;
  v20 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v18 = a4;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v22 = v14;
  v23 = 0;
  if ( !a5 )
    v9 = L"NULL";
  v21 = v9;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v10 = 2 * v8 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v7 = L"NULL";
  v25 = v10;
  v24 = v7;
  v27 = &a7;
  v26 = 0;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceStateChange,
           0LL,
           5u,
           &v17);
}
