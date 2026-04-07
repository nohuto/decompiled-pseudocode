/*
 * XREFs of ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x1800370E8
 * Callers:
 *     ??_GCDWMDXGIEnumeration@@MEAAPEAXI@Z @ 0x1800370A0 (--_GCDWMDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDXGIEnumeration::~CDWMDXGIEnumeration(CDWMDXGIEnumeration *this)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = 0LL;
  for ( *(_QWORD *)this = &CDWMDXGIEnumeration::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 7);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
