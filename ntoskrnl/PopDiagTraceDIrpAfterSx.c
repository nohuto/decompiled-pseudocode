/*
 * XREFs of PopDiagTraceDIrpAfterSx @ 0x140590058
 * Callers:
 *     PoHandleIrp @ 0x1402B986C (PoHandleIrp.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagGetDriverName @ 0x14058F424 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceDIrpAfterSx(__int64 a1)
{
  char result; // al
  const size_t *v2; // r9
  __int64 v3; // r11
  int v4; // eax
  ULONG v5; // r11d
  int v6; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-D8h] BYREF
  int *v8; // [rsp+70h] [rbp-B8h]
  int v9; // [rsp+78h] [rbp-B0h]
  int v10; // [rsp+7Ch] [rbp-ACh]
  _BYTE v11[16]; // [rsp+80h] [rbp-A8h] BYREF
  wchar_t v12[64]; // [rsp+90h] [rbp-98h] BYREF

  result = PopDiagGetDriverName(*(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 232LL), v12);
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( result )
    {
      v4 = *(_DWORD *)(v3 + 192);
      v10 = 0;
      v6 = v4;
      v9 = 4;
      v8 = &v6;
      tlgCreate1Sz_wchar_t((__int64)v11, v2);
      return tlgWriteEx_EtwWriteEx(
               (__int64)&dword_140C03928,
               (unsigned __int8 *)&dword_140030204,
               0LL,
               v5 - 3,
               0,
               0,
               v5,
               &v7);
    }
  }
  return result;
}
