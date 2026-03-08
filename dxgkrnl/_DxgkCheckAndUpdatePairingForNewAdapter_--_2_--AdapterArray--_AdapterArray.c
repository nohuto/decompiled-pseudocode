/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1C02C8C88
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C020C974 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 * Callees:
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C00453C4 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

char *__fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray(__int64 a1)
{
  DXGADAPTER_REFERENCE *v1; // rcx
  char *result; // rax

  v1 = *(DXGADAPTER_REFERENCE **)(a1 + 8);
  if ( v1 )
    return DXGADAPTER_REFERENCE::`vector deleting destructor'(v1);
  return result;
}
