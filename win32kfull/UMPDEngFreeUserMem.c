/*
 * XREFs of UMPDEngFreeUserMem @ 0x1C02C19C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

_BOOL8 __fastcall UMPDEngFreeUserMem(__int64 a1)
{
  BOOL v2; // ebx
  size_t Size; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  v2 = 0;
  v8 = 0LL;
  v5 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  v8 = 0LL;
  if ( v6 && *((_DWORD *)v6 + 106) )
  {
    v7[1] = 120;
    v7[0] = 48;
    v9 = *(_QWORD *)v6;
    v10 = a1;
    v11 = 0LL;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v6, v7, 0x30u, &v5, Size) != -1 )
      v2 = v5 != 0;
    XUMPDOBJ::~XUMPDOBJ(&v6);
    return v2;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v6);
    return 0LL;
  }
}
