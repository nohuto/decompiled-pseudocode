/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00BCA10
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C01B8CC8 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CDA24 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // ecx
  bool v6; // al

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    if ( *((_DWORD *)this + 23) == 2 && (v4 = *((_QWORD *)this + 10)) != 0 )
    {
      if ( qword_1C029CE98 )
        v5 = qword_1C029CE98(v4);
      else
        v5 = 0;
      v6 = v5 != 0;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 )
      return 1;
  }
  return v2;
}
