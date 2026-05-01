/*
 * XREFs of ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x18011B23C
 * Callers:
 *     _std::use_facet_std::codecvt_char_char__Mbstatet____::_1_::dtor$1 @ 0x18011A04E (_std--use_facet_std--codecvt_char_char__Mbstatet____--_1_--dtor$1.c)
 *     _Concurrency::details::_TaskProcHandle::_RunChoreBridge_::_1_::dtor$0 @ 0x1803978D6 (_Concurrency--details--_TaskProcHandle--_RunChoreBridge_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
