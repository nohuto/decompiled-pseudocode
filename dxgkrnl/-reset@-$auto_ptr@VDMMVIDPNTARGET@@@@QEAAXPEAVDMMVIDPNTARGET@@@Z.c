/*
 * XREFs of ?reset@?$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z @ 0x1C006A3F0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall auto_ptr<DMMVIDPNTARGET>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 && v4 )
    result = (**v4)(v4, 1LL);
  *a1 = a2;
  return result;
}
