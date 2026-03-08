/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C02BBE8C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C02C2CB8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C02BAB9C (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 */

_BOOL8 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, void **a2)
{
  BOOL v3; // edi
  UMPDOBJ *v5; // rbx
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v8; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v12; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0;
  v10 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v5 = v8;
  v10 = 0LL;
  if ( v8 )
  {
    if ( a1 )
    {
      v9[0] = 32;
      v9[1] = 105;
      v11 = *(_QWORD *)v8;
      v12 = a1;
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v8, &v12) )
      {
        LODWORD(Size) = 8;
        v3 = UMPDOBJ::Thunk(v5, v9, 0x20u, a2, Size) != -1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v3;
}
