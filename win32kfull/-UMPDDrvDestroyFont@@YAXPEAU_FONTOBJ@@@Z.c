/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02BB7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C029C3B8 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v5; // [rsp+38h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v8; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v4) = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v2 = v5;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    if ( a1 )
    {
      *(_QWORD *)&v6 = 0x2B00000028LL;
      *(_QWORD *)&v7 = *(_QWORD *)v5;
      *((_QWORD *)&v7 + 1) = a1[1].pvConsumer;
      v8 = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v5, (__m128i **)&v8) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, &v6, 0x28u, &v4, Size);
      }
    }
  }
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
