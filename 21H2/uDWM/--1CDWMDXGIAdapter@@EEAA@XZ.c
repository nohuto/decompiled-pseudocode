/*
 * XREFs of ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x1800384D8
 * Callers:
 *     ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180038490 (--_ECDWMDXGIAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDXGIAdapter::~CDWMDXGIAdapter(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 94); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 44);
    v6 = *(_QWORD *)(288 * i + v5);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*(_QWORD *)(288 * i + v5));
      v5 = *((_QWORD *)this + 44);
    }
    v7 = *(_QWORD *)(288 * i + v5 + 8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 44);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
