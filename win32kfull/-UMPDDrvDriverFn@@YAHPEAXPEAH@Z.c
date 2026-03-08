/*
 * XREFs of ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C02BBDDC
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C02C2CB8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

__int64 __fastcall UMPDDrvDriverFn(void *a1, int *a2)
{
  unsigned int v3; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  void *v11; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v9 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  v9 = 0LL;
  if ( v7 )
  {
    v8[1] = 108;
    v8[0] = 32;
    v10 = *(_QWORD *)v7;
    v11 = a1;
    LODWORD(Size) = 416;
    LOBYTE(v3) = (unsigned int)UMPDOBJ::Thunk(v7, v8, 0x20u, a2, Size) != -1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v7);
  return v3;
}
