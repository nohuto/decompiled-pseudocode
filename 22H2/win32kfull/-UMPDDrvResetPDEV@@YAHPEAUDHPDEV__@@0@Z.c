/*
 * XREFs of ?UMPDDrvResetPDEV@@YAHPEAUDHPDEV__@@0@Z @ 0x1C015EA70
 * Callers:
 *     <none>
 * Callees:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F0E8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A16C0 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A190C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v3; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v11; // [rsp+60h] [rbp-10h]

  v3 = 0;
  v7 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0x700000028LL;
    *(_QWORD *)&v10 = *(_QWORD *)v8;
    *((_QWORD *)&v10 + 1) = a1;
    v11 = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, &v9, 0x28u, &v7, Size) != -1 )
      v3 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v3;
}
