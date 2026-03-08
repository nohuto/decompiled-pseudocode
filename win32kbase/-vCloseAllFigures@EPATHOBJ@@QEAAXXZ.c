/*
 * XREFs of ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0181680
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vCloseAllFigures(EPATHOBJ *this)
{
  __int64 *i; // rdx

  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    if ( (i[2] & 0xA) == 2 )
    {
      *((_DWORD *)i + 4) |= 8u;
      ++*((_DWORD *)this + 1);
    }
  }
}
