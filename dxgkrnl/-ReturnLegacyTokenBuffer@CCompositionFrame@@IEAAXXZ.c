/*
 * XREFs of ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0017A2C
 * Callers:
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0017920 (-Release@CCompositionFrame@@UEAAJXZ.c)
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0017BA8 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 */

void __fastcall CCompositionFrame::ReturnLegacyTokenBuffer(CCompositionFrame *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 14);
  if ( v1 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 25), v1);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
}
