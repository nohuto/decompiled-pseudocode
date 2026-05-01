/*
 * XREFs of ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x18008F3A8
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180177580 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax
  void *v3; // rbx

  while ( 1 )
  {
    v3 = qword_18064FB58;
    if ( !qword_18064FB58 )
      break;
    v1 = *((_QWORD *)qword_18064FB58 + 1);
    qword_18064FB58 = *(void **)qword_18064FB58;
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
    operator delete(v3, (const struct std::nothrow_t *)0x10);
  }
}
