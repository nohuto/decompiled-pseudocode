/*
 * XREFs of ?CreateWindowGroup@WindowGroupManager@@UEAAJPEAKPEAPEAUIWindowGroup@@@Z @ 0x1803043E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C55E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180303B50 (--$emplace@AEAKAEAV-$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_Tmap.c)
 *     ??$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA?AV?$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z @ 0x180308C9C (--$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA-AV-$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowGroupManager::CreateWindowGroup(
        WindowGroupManager *this,
        unsigned int *a2,
        struct IWindowGroup **a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct IWindowGroup *v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-58h] BYREF
  char *v15; // [rsp+30h] [rbp-48h]
  unsigned int *v16; // [rsp+38h] [rbp-40h]
  char v17; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  struct IWindowGroup *v20; // [rsp+88h] [rbp+10h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  char *v22; // [rsp+98h] [rbp+20h]

  *a2 = 0;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 11);
  try
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        93LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v7);
    v15 = (char *)this - 8;
    v16 = &v19;
    v17 = 1;
    LODWORD(v20) = v19;
    v8 = (__int64 *)wil::MakeOrThrow<WindowGroup,unsigned long &>(&v21, &v20);
    v9 = *v8;
    *v8 = 0LL;
    if ( v9 )
      v20 = (struct IWindowGroup *)(v9 + 8);
    else
      v20 = 0LL;
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v10);
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 8);
    v22 = (char *)this + 64;
    std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>,0>>::emplace<unsigned long &,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy> &>(
      (__int64 *)this + 9,
      (__int64)v14,
      &v19,
      (__int64 *)&v20);
    if ( !v14[8] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        104LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)0x80070057LL);
    *a2 = v19;
    v11 = v20;
    v20 = 0LL;
    *a3 = v11;
    v17 = 0;
    if ( this != (WindowGroupManager *)-64LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v12);
  }
  return result;
}
