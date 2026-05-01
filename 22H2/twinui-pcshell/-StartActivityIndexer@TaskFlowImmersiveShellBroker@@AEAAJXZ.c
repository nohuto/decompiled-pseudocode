/*
 * XREFs of ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A54DC
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A42EC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18029CC5C (--$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA-AV-$com_ptr_t@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::StartActivityIndexer(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v4 = (__int64 *)wil::ActivateInstance<Windows::Internal::Data::Activities::IActivityIndexer>((__int64)&v13, a2, a3);
    v5 = *v4;
    *v4 = 0LL;
    v6 = *((_QWORD *)this + 35);
    *((_QWORD *)this + 35) = v5;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    v7 = *((_QWORD *)this + 35);
    v13 = v7;
    if ( v7
      && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7),
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7),
          v9 = v8,
          v8 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x281,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      result = v9;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x285,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v10);
  }
  return result;
}
