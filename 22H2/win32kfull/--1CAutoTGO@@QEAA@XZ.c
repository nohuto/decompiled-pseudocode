/*
 * XREFs of ??1CAutoTGO@@QEAA@XZ @ 0x1C013EE24
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C013EF70 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C0274F74 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
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
