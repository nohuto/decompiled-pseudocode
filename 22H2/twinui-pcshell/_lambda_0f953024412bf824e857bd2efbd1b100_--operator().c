/*
 * XREFs of _lambda_0f953024412bf824e857bd2efbd1b100_::operator() @ 0x1800884C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f953024412bf824e857bd2efbd1b100___::Run @ 0x1800884B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f953024412bf824e857bd2efbd1b100___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0f953024412bf824e857bd2efbd1b100_::operator()(_BYTE *a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 943LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(LPVOID, bool))(*(_QWORD *)ppv + 72LL))(ppv, *a1 != 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 946LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v3;
}
