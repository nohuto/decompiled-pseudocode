/*
 * XREFs of ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x18020A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rdi
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v9; // rcx
  PVOID Reserved1; // rcx
  int v11; // edi
  __int64 v12; // rcx
  bool v13; // zf
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v14; // rcx
  int v15; // eax
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v16; // rcx
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-58h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v19; // [rsp+28h] [rbp-50h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v20; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v21; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v22; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v6 = *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1);
  v5 = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds;
  try
  {
    while ( 1 )
    {
      if ( v5 == v6 )
        return 0LL;
      v19 = 0LL;
      v7 = (const WCHAR *)v5;
      if ( *(_QWORD *)(v5 + 24) >= 8uLL )
        v7 = *(const WCHAR **)v5;
      v21 = v7;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v21, a3);
      v9 = v19;
      v19 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, _QWORD))(*(_QWORD *)v9 + 16LL))(
          v9,
          *(_QWORD *)v9);
      Reserved1 = v8[1].Reserved.Reserved1;
      v19 = 0LL;
      v11 = RoActivateInstance(Reserved1, &v20);
      if ( v11 < 0 )
        goto LABEL_13;
      v12 = *(_QWORD *)&GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data1
          - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
      if ( *(_QWORD *)&GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
        v12 = *(_QWORD *)GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data4
            - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
      v13 = v12 == 0;
      v14 = v20;
      if ( !v13 )
        break;
      v19 = v20;
LABEL_14:
      if ( v11 != -2147221164 )
      {
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            63LL,
            (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v11);
        LOBYTE(v18) = 0;
        v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, int *))(*(_QWORD *)v14 + 56LL))(
                v14,
                &v18);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            66LL,
            (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
            (const char *)(unsigned int)v15);
        if ( (_BYTE)v18 )
        {
          v16 = v19;
          if ( v19 )
          {
            *a2 = v19;
            (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v16 + 8LL))(v16);
          }
          else
          {
            *a2 = 0LL;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
          return 0LL;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      v5 += 32LL;
    }
    v11 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, GUID *, struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **))v20)(
            v20,
            &GUID_6ff11408_7eca_429b_8440_22c10384b01d,
            &v19);
    (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_13:
    v14 = v19;
    goto LABEL_14;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
                           a4);
  }
  return result;
}
