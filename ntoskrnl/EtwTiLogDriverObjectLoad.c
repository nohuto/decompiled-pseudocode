/*
 * XREFs of EtwTiLogDriverObjectLoad @ 0x14078FD38
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14078FE50 (EtwpTiQueryCodeIntegrityOptions.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectLoad(unsigned __int16 *a1)
{
  REGHANDLE v1; // rdi
  BOOLEAN result; // al
  const wchar_t *v4; // rdx
  int v5; // ecx
  __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int16 v10; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  const wchar_t *v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  int *v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp-10h]

  v1 = EtwThreatIntProvRegHandle;
  v9 = 0;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD);
  if ( result )
  {
    result = EtwProviderEnabled(v1, 0, 0x40000000uLL);
    if ( result )
    {
      if ( a1 && *a1 )
      {
        v4 = (const wchar_t *)*((_QWORD *)a1 + 1);
        v5 = *a1;
        v6 = *a1 >> 1;
      }
      else
      {
        v5 = 12;
        v4 = L"(null)";
        v6 = 6;
      }
      v10 = v6;
      v13 = v5;
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 2LL;
      v12 = v4;
      v14 = 0;
      v7 = EtwpTiQueryCodeIntegrityOptions(&v9);
      v8 = v9;
      v16 = 4LL;
      if ( v7 < 0 )
        v8 = -1;
      v15 = &v9;
      v9 = v8;
      return EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD, 0LL, 3u, &UserData);
    }
  }
  return result;
}
