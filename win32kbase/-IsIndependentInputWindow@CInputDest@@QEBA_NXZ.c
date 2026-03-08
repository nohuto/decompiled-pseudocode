/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C01E3988
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C007ECBC (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C01E3724 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  __int64 v3; // rcx
  int v4; // ecx
  bool v5; // al

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    if ( *((_DWORD *)this + 23) == 2 && (v3 = *((_QWORD *)this + 10)) != 0 )
    {
      if ( qword_1C02D7650 )
        v4 = qword_1C02D7650(v3);
      else
        v4 = 0;
      v5 = v4 != 0;
    }
    else
    {
      v5 = 0;
    }
    if ( v5 )
      return 1;
  }
  return v2;
}
