/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007FE08
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180032AE0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009890C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18004AA28 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1)
{
  char v2; // di
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  HRESULT v6; // eax
  HSTRING v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  int ActivationFactory; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  const char *v17; // [rsp+28h] [rbp-58h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21 = -2LL;
  *a1 = 0LL;
  v20 = 0;
  v2 = 0;
  LODWORD(v19) = 4;
  v3 = NtQueryWnfStateData(&WNF_SHEL_LOCKAPPHOST_ACTIVE, 0LL, 0LL, &v18, &v20, &v19) | 0x10000000;
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -805306333 )
  {
    v4 = (int)v18;
    if ( (_DWORD)v18 )
    {
      v5 = v19;
      if ( (_DWORD)v19 != 4 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x265,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)0x8000FFFFLL,
          (__int64)"Inconsistent state data size in wnf_query",
          v17);
        v20 = 0;
        v5 = v19;
        v4 = (int)v18;
      }
      if ( v4 && v5 == 4 )
        v2 = 1;
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v3);
  }
  if ( v3 < 0 || !v2 || !v20 )
    return 2147500037LL;
  v18 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"lockframework.LockAppBroker", 0x1Bu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x18008009CLL);
  }
  v7 = string;
  v8 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  ActivationFactory = RoGetActivationFactory(v7, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v18);
  v10 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_24:
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    }
    return (unsigned int)v10;
  }
  v19 = 0LL;
  v11 = (**v18)(v18, &GUID_91398107_1c08_44be_8b18_79322a23a71d, &v19);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)v11);
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v19 + 24LL))(v19, a1);
  if ( v10 < 0 )
  {
LABEL_22:
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_24;
  }
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
  }
  return 0LL;
}
