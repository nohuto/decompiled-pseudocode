/*
 * XREFs of ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C00453C4
 * Callers:
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1C02C8C88 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--_AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02C8E40 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall DXGADAPTER_REFERENCE::`vector deleting destructor'(DXGADAPTER_REFERENCE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    16LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
