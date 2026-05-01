/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180268670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // r14d
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64 *); // rdi
  __int64 v16; // rax
  void (*v17)(void); // rax
  int v18; // eax
  __int64 v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  char v23; // [rsp+88h] [rbp+48h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  v6 = *(_DWORD *)(a1 + 24);
  if ( a2 != v6 )
  {
    v22 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v8 = v7(a1, a2, &v22);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 84LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      return v9;
    }
    v23 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v22 + 56LL))(v22, a3, v6, &v23);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 87LL;
      goto LABEL_6;
    }
    if ( v23 )
    {
      v20[0] = 0LL;
      if ( v6 )
      {
        v24 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        v12 = v11(a1, v6, &v24);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 94LL;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
LABEL_20:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
          goto LABEL_21;
        }
        v14 = v24;
        v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 64LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
        v12 = v15(v14, a3, a2, v20);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 95LL;
          goto LABEL_13;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      }
      v16 = **(_QWORD **)(a1 + 40);
      if ( a2 == 1 )
        v17 = *(void (**)(void))(v16 + 144);
      else
        v17 = *(void (**)(void))(v16 + 152);
      v17();
      *(_DWORD *)(a1 + 24) = a2;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v22 + 72LL))(v22, a3, v6, v20[0]);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  return 0LL;
}
