/*
 * XREFs of ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x1C0005020
 * Callers:
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0182038 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  return result;
}
