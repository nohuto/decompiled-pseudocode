/*
 * XREFs of EtwTiLogDriverObjectUnLoad @ 0x140854C60
 * Callers:
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x1409443B0 (IoDeleteDriver.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectUnLoad(unsigned __int16 *a1)
{
  REGHANDLE v1; // rdi
  BOOLEAN result; // al
  const wchar_t *v4; // rdx
  int v5; // ecx
  __int16 v6; // ax
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v1 = EtwThreatIntProvRegHandle;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_UNLOAD);
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
      v7 = v6;
      v9 = v4;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = v5;
      *(_QWORD *)&UserData.Size = 2LL;
      v11 = 0;
      return EtwWrite(v1, &THREATINT_DRIVER_OBJECT_UNLOAD, 0LL, 2u, &UserData);
    }
  }
  return result;
}
