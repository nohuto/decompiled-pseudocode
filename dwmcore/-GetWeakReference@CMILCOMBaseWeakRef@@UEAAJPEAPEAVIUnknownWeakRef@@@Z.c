/*
 * XREFs of ?GetWeakReference@CMILCOMBaseWeakRef@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x180287370
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseWeakRef::GetWeakReference(CMILCOMBaseWeakRef *this, struct IUnknownWeakRef **a2)
{
  char *v4; // rax
  _QWORD *v5; // rbx

  if ( *((_QWORD *)this + 2) )
    goto LABEL_5;
  v4 = (char *)DefaultHeap::Alloc(0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CMILCOMWeakRef::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
    v5[7] = this;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 2, (signed __int64)v5, 0LL) )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
LABEL_5:
    *a2 = (struct IUnknownWeakRef *)*((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    return 0LL;
  }
  return 2147942414LL;
}
