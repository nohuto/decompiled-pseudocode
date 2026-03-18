/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C012B34C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C012B4D0 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C01267A8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, void **a2)
{
  UMPDOBJ *v4; // rbx
  BOOL v5; // edi
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 *v10[2]; // [rsp+48h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v4 = v8;
  v5 = 0;
  v9 = 0LL;
  *(_OWORD *)v10 = 0LL;
  if ( v8 )
  {
    if ( a1 )
    {
      *(_QWORD *)&v9 = 0x6900000020LL;
      v10[0] = *(unsigned __int16 **)v8;
      v10[1] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v8, &v10[1]) )
      {
        LODWORD(Size) = 8;
        v5 = UMPDOBJ::Thunk(v4, &v9, 0x20u, a2, Size) != -1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v5;
}
