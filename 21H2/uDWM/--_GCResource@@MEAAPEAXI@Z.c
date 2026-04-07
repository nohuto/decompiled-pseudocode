/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180024AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  int v3; // edx

  v3 = *((_DWORD *)this + 6);
  *(_QWORD *)this = &CResource::`vftable';
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
