/*
 * XREFs of ?UMPDDrvResetPDEV@@YAHPEAUDHPDEV__@@0@Z @ 0x1C02BF630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

_BOOL8 __fastcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v3; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v12; // [rsp+58h] [rbp-18h]
  struct DHPDEV__ *v13; // [rsp+60h] [rbp-10h]

  v3 = 0;
  v10 = 0LL;
  v7 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v10 = 0LL;
  if ( v8 )
  {
    v9[1] = 7;
    v9[0] = 40;
    v11 = *(_QWORD *)v8;
    v12 = a1;
    v13 = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v9, 0x28u, &v7, Size) != -1 )
      v3 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v3;
}
