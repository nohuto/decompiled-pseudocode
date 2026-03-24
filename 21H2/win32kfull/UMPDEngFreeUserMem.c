/*
 * XREFs of UMPDEngFreeUserMem @ 0x1C02AD1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F188 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A1750 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A19A4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDEngFreeUserMem(__int64 a1)
{
  BOOL v2; // ebx
  size_t Size; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-40h] BYREF
  __int128 v8; // [rsp+50h] [rbp-30h]
  __int128 v9; // [rsp+60h] [rbp-20h]

  v2 = 0;
  v5 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 106) )
    {
      *(_QWORD *)&v7 = 0x7800000030LL;
      *(_QWORD *)&v8 = *(_QWORD *)v6;
      *((_QWORD *)&v8 + 1) = a1;
      v9 = 0LL;
      LODWORD(Size) = 4;
      if ( (unsigned int)UMPDOBJ::Thunk(v6, &v7, 0x30u, &v5, Size) != -1 )
        v2 = v5 != 0;
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  return v2;
}
