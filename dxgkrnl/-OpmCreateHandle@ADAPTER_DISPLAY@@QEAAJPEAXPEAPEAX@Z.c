/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02B92CC
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C02BD9E4 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  _BYTE *v6; // rax
  _QWORD *v8; // rcx
  DXGADAPTER *v9; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6656LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6656LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6657LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6657LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (_BYTE *)operator new[](0x20uLL, 0x4B677844u, 256LL);
  if ( !v6 )
    return 3221225495LL;
  v8 = this + 44;
  v6[24] = 0;
  *((_QWORD *)v6 + 2) = a2;
  v9 = this[44];
  if ( *((DXGADAPTER ***)v9 + 1) != this + 44 )
    __fastfail(3u);
  *(_QWORD *)v6 = v9;
  *((_QWORD *)v6 + 1) = v8;
  *((_QWORD *)v9 + 1) = v6;
  *v8 = v6;
  *a3 = v6;
  return 0LL;
}
