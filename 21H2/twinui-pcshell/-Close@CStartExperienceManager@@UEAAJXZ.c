/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1802426F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E98 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this)
{
  __int64 *v2; // rsi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 488);
  if ( *((_DWORD *)this + 118) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 118) = 0;
  }
  if ( *((_DWORD *)this + 119) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 119) = 0;
  }
  if ( *((_DWORD *)this + 120) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 120) = 0;
  }
  v9 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
  v4 = **v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v5 = v4(v3, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      267LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return 0LL;
}
