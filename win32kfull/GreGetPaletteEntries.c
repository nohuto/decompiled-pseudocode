/*
 * XREFs of GreGetPaletteEntries @ 0x1C007BA80
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)v9, a1);
  if ( v9[0] )
  {
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v9, a2, a3, a4, 0);
    if ( v9[0] )
      DEC_SHARE_REF_CNT(v9[0]);
    return Entries;
  }
  else
  {
    EngSetLastError(6u);
    EPALOBJ::~EPALOBJ((EPALOBJ *)v9);
    return 0LL;
  }
}
