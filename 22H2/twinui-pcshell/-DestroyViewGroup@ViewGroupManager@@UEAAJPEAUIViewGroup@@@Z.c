/*
 * XREFs of ?DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z @ 0x1802FB320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUIViewGroup@@@Z @ 0x1800C9F48 (--$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA-AV-$com_ptr_t@UIViewGroupInternal@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C380C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::DestroyViewGroup(RTL_SRWLOCK *this, struct IViewGroup *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 Ptr; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IViewGroup *v11; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+48h] [rbp+20h]

  v11 = a2;
  try
  {
    wil::com_query<IViewGroupInternal,IViewGroup * &>((__int64)&v12, &v11);
    v3 = this + 31;
    AcquireSRWLockExclusive(this + 31);
    v13 = this + 31;
    Ptr = (__int64)this[32].Ptr;
    v5 = *(_QWORD *)(Ptr + 8);
    if ( *(_BYTE *)(v5 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_QWORD *)(v5 + 32) >= v12 )
      {
        Ptr = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
    if ( (PVOID)Ptr == this[32].Ptr || v12 < *(_QWORD *)(Ptr + 32) )
LABEL_9:
      Ptr = (__int64)this[32].Ptr;
    if ( (PVOID)Ptr == this[32].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)0x80070490LL);
    v6 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           &this[32].Ptr,
           Ptr);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v6 + 4);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 104LL))(v12);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v8);
  }
  return result;
}
