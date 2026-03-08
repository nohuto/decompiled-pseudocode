/*
 * XREFs of ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C029B638
 * Callers:
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02CEF40 (NtGdiFONTOBJ_pxoGetXform.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C029B32C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

struct _XFORMOBJ *__fastcall UMPDOBJ::GetFONTOBJXform(UMPDOBJ *this, struct _FONTOBJ *a2)
{
  struct _XFORMOBJ *result; // rax
  struct _XFORMOBJ *v4; // rsi
  void *v5; // rbx
  struct _XFORMOBJ *v6; // [rsp+48h] [rbp+10h] BYREF
  void *v7; // [rsp+50h] [rbp+18h] BYREF

  result = (struct _XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)this, (__int64)a2);
  v4 = result;
  if ( result )
  {
    v5 = (void *)*((_QWORD *)this + 37);
    if ( !v5 )
    {
      v6 = result;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v6, this, 0, 0, 0LL);
      v7 = &v4[56];
      if ( v4 == (struct _XFORMOBJ *)-224LL
        || !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 288), &v7, 4u, 0LL) )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = v7;
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v6, this, 0LL, 0LL, 0LL);
      v6 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
    }
    return (struct _XFORMOBJ *)v5;
  }
  return result;
}
