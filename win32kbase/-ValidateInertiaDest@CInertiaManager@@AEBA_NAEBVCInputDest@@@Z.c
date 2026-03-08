/*
 * XREFs of ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C0210EE0
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C01E3C18 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 */

char __fastcall CInertiaManager::ValidateInertiaDest(CInertiaManager *this, const struct CInputDest *a2)
{
  char v2; // r10
  CInputDest *v3; // r11

  v2 = 0;
  if ( *(_DWORD *)a2 && !CInputDest::TestWindowFlag(a2, 1152) && !CInputDest::TestWindowFlag(v3, 896) )
    return 1;
  return v2;
}
