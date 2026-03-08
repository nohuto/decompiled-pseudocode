/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x180260DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CGenericInkTipPointSource *__fastcall CGenericInkTipPointSource::`scalar deleting destructor'(
        CGenericInkTipPointSource *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    operator delete(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
