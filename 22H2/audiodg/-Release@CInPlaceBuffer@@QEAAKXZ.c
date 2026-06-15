/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140047840
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140007560 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140046470 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140046554 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this)
{
  bool v2; // zf
  unsigned int v3; // edi
  __int64 v4; // rcx

  v2 = (*((_DWORD *)this + 4))-- == 1;
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 1));
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    operator delete(this);
  }
  return v3;
}
