/*
 * XREFs of UMPDDrvDeleteDeviceBitmap @ 0x1C02C1920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDeleteDeviceBitmap(__int64 a1, __int64 a2)
{
  size_t v4; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  if ( v5 )
  {
    v7 = 0LL;
    LODWORD(v4) = 0;
    v6[0] = 40;
    v6[1] = 11;
    v8 = *(_QWORD *)v5;
    v9 = a1;
    v10 = a2;
    UMPDOBJ::Thunk(v5, v6, 0x28u, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
