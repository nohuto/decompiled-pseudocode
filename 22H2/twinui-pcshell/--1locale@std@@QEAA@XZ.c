/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18011B6F8
 * Callers:
 *     _std::basic_filebuf_char_std::char_traits_char___::open_::_1_::dtor$0 @ 0x18012877E (_std--basic_filebuf_char_std--char_traits_char___--open_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
