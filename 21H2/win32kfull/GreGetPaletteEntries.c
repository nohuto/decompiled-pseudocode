/*
 * XREFs of GreGetPaletteEntries @ 0x1C0120760
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C01207DC (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall GreGetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // ebx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)v10, a1);
  Entries = 0;
  if ( v10[0] )
  {
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)v10, a2, a3, a4, 0);
    DEC_SHARE_REF_CNT(v10[0], v8);
  }
  else
  {
    EngSetLastError(6u);
  }
  return Entries;
}
