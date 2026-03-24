/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002C630
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0025684 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0026170 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0034F20 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002C6B0 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013E598 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(size_t Size)
{
  unsigned int v1; // edi
  REGION *v2; // rbx
  void *v3; // rax

  v1 = Size;
  if ( gpTypeIsolation[7] )
    v2 = (REGION *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v2 = 0LL;
  if ( !v2 )
    return v2;
  if ( v1 == 112 )
  {
    v3 = (void *)Win32AllocateFromPagedLookasideList(RGNMEMOBJ::s_pSCANLookAsideList);
LABEL_6:
    *((_QWORD *)v2 + 11) = v3;
    goto LABEL_7;
  }
  if ( v1 > 0x70 )
  {
    v3 = PALLOCMEM2(v1, 1852011335LL, 0);
    goto LABEL_6;
  }
LABEL_7:
  if ( !*((_QWORD *)v2 + 11) )
  {
    REGION::vDeleteREGION(v2);
    return 0LL;
  }
  return v2;
}
