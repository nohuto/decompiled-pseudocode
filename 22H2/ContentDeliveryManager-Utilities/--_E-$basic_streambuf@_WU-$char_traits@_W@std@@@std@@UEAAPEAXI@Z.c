/*
 * XREFs of ??_E?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x1800361B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::wstreambuf::`vector deleting destructor'(_QWORD *a1, char a2)
{
  _QWORD *v2; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rax

  v2 = (_QWORD *)a1[12];
  *a1 = &std::wstreambuf::`vftable';
  if ( v2 )
  {
    if ( *v2 )
    {
      v5 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
      if ( v5 )
        (**v5)(v5, 1LL);
    }
    operator delete(v2);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
