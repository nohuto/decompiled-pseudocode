/*
 * XREFs of ??1CAutoTGO@@QEAA@XZ @ 0x1C012FBD0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C012FD24 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::~CAutoTGO(CAutoTGO *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
