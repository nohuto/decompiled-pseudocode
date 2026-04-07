/*
 * XREFs of ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180028BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180028BAC (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::`scalar deleting destructor'(CTopLevelWindow3D *this, char a2)
{
  CTopLevelWindow3D::~CTopLevelWindow3D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
