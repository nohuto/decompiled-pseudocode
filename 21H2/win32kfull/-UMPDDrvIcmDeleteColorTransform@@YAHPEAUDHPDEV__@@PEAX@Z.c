/*
 * XREFs of ?UMPDDrvIcmDeleteColorTransform@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1C02AA990
 * Callers:
 *     <none>
 * Callees:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F188 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A1750 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A19A4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvIcmDeleteColorTransform(struct DHPDEV__ *a1, void *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]
  void *v11; // [rsp+60h] [rbp-10h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  v4 = 0;
  v11 = 0LL;
  v7 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0x4100000028LL;
    *(_QWORD *)&v10 = *(_QWORD *)v8;
    *((_QWORD *)&v10 + 1) = a1;
    v11 = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, &v9, 0x28u, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}
