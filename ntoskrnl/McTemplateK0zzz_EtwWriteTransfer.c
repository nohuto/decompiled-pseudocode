/*
 * XREFs of McTemplateK0zzz_EtwWriteTransfer @ 0x140561860
 * Callers:
 *     PiSwStartCreate @ 0x140806E88 (PiSwStartCreate.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwBusRelationAdd @ 0x1408076A8 (PiSwBusRelationAdd.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwStopDestroy @ 0x140867198 (PiSwStopDestroy.c)
 *     PiSwBusRelationRemove @ 0x140964098 (PiSwBusRelationRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // r11
  __int64 v7; // rax
  const wchar_t *v9; // rdx
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v24; // [rsp+60h] [rbp-28h]
  int v25; // [rsp+68h] [rbp-20h]
  int v26; // [rsp+6Ch] [rbp-1Ch]

  v6 = a6;
  v7 = -1LL;
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
      ++v7;
    while ( a6[v7] );
    v10 = 2 * v7 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v6 = L"NULL";
  v25 = v10;
  v24 = v6;
  v26 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 4u, &v17);
}
