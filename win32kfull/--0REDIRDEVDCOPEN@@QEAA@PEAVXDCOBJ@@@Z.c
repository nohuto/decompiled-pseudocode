/*
 * XREFs of ??0REDIRDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z @ 0x1C02A67B4
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02778A8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 * Callees:
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8F5C (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

REDIRDEVDCOPEN *__fastcall REDIRDEVDCOPEN::REDIRDEVDCOPEN(REDIRDEVDCOPEN *this, struct XDCOBJ *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  *(_QWORD *)this = 0LL;
  v4 = SGDGetSessionState(this);
  if ( a2 )
  {
    v5 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0
      && *(_QWORD *)(v5 + 48) == *(_QWORD *)(*(_QWORD *)(v4 + 32) + 23376LL) )
    {
      *(_QWORD *)this = *(_QWORD *)(v5 + 496);
    }
  }
  if ( *(_QWORD *)this )
    bUndoMakeOpaque(*(struct SURFACE **)this);
  return this;
}
