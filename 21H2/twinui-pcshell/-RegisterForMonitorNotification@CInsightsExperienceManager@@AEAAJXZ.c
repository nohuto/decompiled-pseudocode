/*
 * XREFs of ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x18026015C
 * Callers:
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180260338 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CInsightsExperienceManager::RegisterForMonitorNotification(CInsightsExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 34);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v4 = v3(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*v12)[3](v12, (GUID *)((char *)this + 24), (__int64 *)this + 39);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = (__int64 *)((char *)this + 304);
      v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
      v9 = **v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
      v4 = v9(v8, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v7);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 458LL;
    }
    else
    {
      v6 = 457LL;
    }
  }
  else
  {
    v6 = 455LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v5;
}
