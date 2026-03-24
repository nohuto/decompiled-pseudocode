/*
 * XREFs of ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0115FDC
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C0115678 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0115740 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 */

__int64 __fastcall xxxDispBrokerSetDisplayConfig(
        int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        int a3,
        int a4,
        bool a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _WORD *v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // [rsp+28h] [rbp-61h] BYREF
  unsigned int *v11[5]; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v12[20]; // [rsp+58h] [rbp-31h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v13; // [rsp+F0h] [rbp+67h] BYREF
  int v14; // [rsp+F8h] [rbp+6Fh] BYREF
  int v15; // [rsp+100h] [rbp+77h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v10 = a1;
  v5 = 200 * a1 + 80;
  if ( v5 >= 0x7FFF )
    return 2147483653LL;
  v7 = Win32AllocPoolWithQuotaZInit(v5, 0x44535042u);
  v8 = (__int64)v7;
  if ( !v7 )
    return 3221225495LL;
  v11[0] = (unsigned int *)&v10;
  v11[1] = (unsigned int *)&v14;
  v11[2] = (unsigned int *)&v15;
  v11[3] = (unsigned int *)&a5;
  v11[4] = (unsigned int *)&v13;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622___DrvSampleDisplayState_(
    v7,
    v11,
    v5 - 80);
  memset(v12, 0, 0x48uLL);
  v9 = DispBroker::DispBrokerClient::SyncMessage<8>(
         (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
         v8,
         (__int64)v12);
  Win32FreePool(v8);
  result = v12[16];
  if ( v9 < 0 )
    return (unsigned int)v9;
  return result;
}
