/*
 * XREFs of McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0055B94
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C033F07C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1C0340F88 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0376E60 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqqpppz_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-81h] BYREF
  va_list v9; // [rsp+40h] [rbp-71h]
  __int64 v10; // [rsp+48h] [rbp-69h]
  va_list v11; // [rsp+50h] [rbp-61h]
  __int64 v12; // [rsp+58h] [rbp-59h]
  va_list v13; // [rsp+60h] [rbp-51h]
  __int64 v14; // [rsp+68h] [rbp-49h]
  va_list v15; // [rsp+70h] [rbp-41h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  va_list v17; // [rsp+80h] [rbp-31h]
  __int64 v18; // [rsp+88h] [rbp-29h]
  va_list v19; // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  va_list v21; // [rsp+A0h] [rbp-11h]
  __int64 v22; // [rsp+A8h] [rbp-9h]
  const wchar_t *v23; // [rsp+B0h] [rbp-1h]
  int v24; // [rsp+B8h] [rbp+7h]
  int v25; // [rsp+BCh] [rbp+Bh]
  __int64 v26; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  __int64 v28; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+100h] [rbp+4Fh]
  __int64 v30; // [rsp+108h] [rbp+57h] BYREF
  va_list va2; // [rsp+108h] [rbp+57h]
  __int64 v32; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+110h] [rbp+5Fh]
  __int64 v34; // [rsp+118h] [rbp+67h] BYREF
  va_list va4; // [rsp+118h] [rbp+67h]
  __int64 v36; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+120h] [rbp+6Fh]
  __int64 v38; // [rsp+128h] [rbp+77h] BYREF
  va_list va6; // [rsp+128h] [rbp+77h]
  const wchar_t *v40; // [rsp+130h] [rbp+7Fh]
  va_list va7; // [rsp+138h] [rbp+87h] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v34 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v36 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v38 = va_arg(va7, _QWORD);
  v40 = va_arg(va7, const wchar_t *);
  v3 = v40;
  va_copy(v9, va);
  v10 = 8LL;
  va_copy(v11, va1);
  va_copy(v13, va2);
  va_copy(v15, va3);
  va_copy(v17, va4);
  va_copy(v19, va5);
  va_copy(v21, va6);
  v12 = 8LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 8LL;
  if ( v40 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v40[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v24 = v6;
  v25 = 0;
  if ( !v40 )
    v3 = L"NULL";
  v23 = v3;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)a2, 9u, &v8);
}
