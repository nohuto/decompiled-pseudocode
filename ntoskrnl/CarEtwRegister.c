/*
 * XREFs of CarEtwRegister @ 0x1405D05C8
 * Callers:
 *     CarInitLogging @ 0x1405D0E40 (CarInitLogging.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     McGenEventRegister_EtwRegister @ 0x1403895F8 (McGenEventRegister_EtwRegister.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CarTipLogDriverLoad @ 0x1405D10B0 (CarTipLogDriverLoad.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS CarEtwRegister()
{
  __int64 v0; // rdx
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // r9d
  int v4; // r10d
  int v5; // [rsp+30h] [rbp-69h] BYREF
  int v6; // [rsp+34h] [rbp-65h] BYREF
  int v7; // [rsp+38h] [rbp-61h] BYREF
  int v8; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-49h] BYREF
  int *v11; // [rsp+70h] [rbp-29h]
  int v12; // [rsp+78h] [rbp-21h]
  int v13; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v14; // [rsp+80h] [rbp-19h]
  int v15; // [rsp+88h] [rbp-11h]
  int v16; // [rsp+8Ch] [rbp-Dh]
  _BYTE v17[16]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v18[16]; // [rsp+A0h] [rbp+7h] BYREF
  int *v19; // [rsp+B0h] [rbp+17h]
  int v20; // [rsp+B8h] [rbp+1Fh]
  int v21; // [rsp+BCh] [rbp+23h]
  int *v22; // [rsp+C0h] [rbp+27h]
  int v23; // [rsp+C8h] [rbp+2Fh]
  int v24; // [rsp+CCh] [rbp+33h]
  int *v25; // [rsp+D0h] [rbp+37h]
  int v26; // [rsp+D8h] [rbp+3Fh]
  int v27; // [rsp+DCh] [rbp+43h]

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C09378);
  CarEtwEventBook = (PVOID)ExAllocatePool2(64LL, 2048LL, 1316118851LL);
  if ( !CarEtwEventBook )
    return -1073741801;
  result = McGenEventRegister_EtwRegister((const GUID *)EtwProvider, v0, EtwProvider_Context, EtwProvider_Context);
  v2 = result;
  if ( result >= 0 )
  {
    if ( dword_140C09378 && tlgKeywordOn((__int64)&dword_140C09378, 0x800000000000LL) && v3 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C09378, 0x400000000000LL) )
      {
        v13 = 0;
        v9 = 0LL;
        v16 = 0;
        v5 = CarTipTag;
        v11 = &v5;
        v14 = &v9;
        v12 = 4;
        v15 = 8;
        tlgCreate1Sz_wchar_t((__int64)v17, CarDrivers);
        tlgCreate1Sz_wchar_t((__int64)v18, (const size_t *)L"NA");
        v6 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = &v6;
        v7 = CarXdvOptions;
        v22 = &v7;
        v8 = CarRuleClasses;
        v25 = &v8;
        v20 = v4;
        v23 = v4;
        v26 = v4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C09378,
          (unsigned __int8 *)word_14003416A,
          0LL,
          0LL,
          9u,
          &v10);
      }
    }
    CarTipLogDriverLoad();
    return v2;
  }
  return result;
}
