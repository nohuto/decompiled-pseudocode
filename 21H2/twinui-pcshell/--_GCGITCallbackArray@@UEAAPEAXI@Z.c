/*
 * XREFs of ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x18006A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
CGITCallbackArray *__fastcall CGITCallbackArray::`scalar deleting destructor'(CGITCallbackArray *this, char a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 7); ++i )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      v6 = v4[i];
      if ( v6 )
      {
        v4[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v4 = (_QWORD *)*((_QWORD *)this + 6);
      }
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
