/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C0218BDC
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0023B7C (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax

  v2 = (_DWORD *)operator new[](0x1000uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 7) = v2;
  if ( v2 )
  {
    *v2 = 2;
    *(_DWORD *)(*((_QWORD *)this + 7) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 42LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGBLACKBOX::Initialize() couldn't allocate data buffer.",
      42LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
