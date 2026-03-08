/*
 * XREFs of ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0189E50
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C018A9F0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bFlatten(EPATHOBJ *this)
{
  __int64 v1; // rdx
  struct _PATHRECORD *i; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 0LL;
  for ( i = *(struct _PATHRECORD **)(v1 + 32); i; i = *(struct _PATHRECORD **)i )
  {
    if ( (*((_DWORD *)i + 4) & 0x10) != 0 )
    {
      i = EPATHOBJ::pprFlattenRec(this, i);
      if ( !i )
        return 0LL;
    }
  }
  *(_DWORD *)this &= ~1u;
  return 1LL;
}
