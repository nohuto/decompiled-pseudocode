/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x180490300
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x180490200 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18048F878 (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

void __fastcall GhostDivider::Solidify(GhostDivider *this)
{
  __int64 *v1; // rdi
  __int64 (__fastcall ***v3)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  __int64 v4; // rbx
  HWND PreviousWindow; // rax
  int v6; // eax
  __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (__int64 *)*((_QWORD *)this + 4);
  v3 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 5);
  *((_BYTE *)this + 84) = 1;
  v4 = *v1;
  PreviousWindow = GhostDivider::GetPreviousWindow(this, v3);
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HWND))(v4 + 40))(v1, *((_QWORD *)this + 3), PreviousWindow);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB2,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v6);
  v7 = (__int64 *)((char *)this + 56);
  v15 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v8 = *(_QWORD *)((char *)this + 76);
  v9 = *((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, GUID *, char *))(*(_QWORD *)v9 + 80LL))(
          v9,
          0LL,
          v8,
          0LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 56);
  if ( v10 >= 0 )
  {
    v11 = *v7;
    v14 = *((_DWORD *)this + 16);
    (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v11 + 88LL))(
      v11,
      LambdaCustomPaintProc<_lambda_96edf2fb798d729d000c76ff579fff9f_,HDC__ *>,
      &v14);
    v12 = *((_DWORD *)this + 19);
    v13 = *v7;
    v16[0] = 0;
    v16[1] = 0;
    v16[2] = v12;
    v16[3] = *((_DWORD *)this + 20);
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, v16, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
}
