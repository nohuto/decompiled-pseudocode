/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C02BB980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+38h] [rbp-30h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    LODWORD(v2) = 0;
    *(_QWORD *)&v4 = 0x400000020LL;
    *(_QWORD *)&v5 = *(_QWORD *)v3;
    *((_QWORD *)&v5 + 1) = a1;
    UMPDOBJ::Thunk(v3, &v4, 0x20u, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
