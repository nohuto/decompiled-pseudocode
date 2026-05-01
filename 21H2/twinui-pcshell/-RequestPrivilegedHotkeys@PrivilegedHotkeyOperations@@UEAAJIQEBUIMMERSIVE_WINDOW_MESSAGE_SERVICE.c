/*
 * XREFs of ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x18029B730
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049C48 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800833EC (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801BD6F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801BD6F0.c)
 *     ??$As@UIServiceProvider@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Details@12@@Z @ 0x18029800C (--$As@UIServiceProvider@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PrivilegedHotkeyOperations::RequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2,
        const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *a3,
        struct IImmersiveWindowMessageNotification *a4,
        unsigned int *a5)
{
  unsigned int *v9; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  volatile int *v14; // rdx
  RTL_SRWLOCK *v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IInspectable *v21; // [rsp+70h] [rbp+30h] BYREF

  v9 = a5;
  *a5 = 0;
  v21 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>((PrivilegedHotkeyOperations *)((char *)this + 56), &v21);
  if ( v21 )
  {
    v18 = 0LL;
    v11 = Microsoft::WRL::ComPtr<IInspectable>::As<IServiceProvider>(&v21, &v18);
    v10 = v11;
    if ( v11 >= 0 )
    {
      a5 = 0LL;
      v12 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      v13 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, unsigned int **))(*(_QWORD *)v12 + 24LL))(
              v12,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &a5);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v15 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
        v19 = v15;
        if ( v15 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
            (__int64)v15,
            v14);
        AcquireSRWLockExclusive(v15 + 6);
        EnableIAMAccess(v15[5].Ptr, 1LL);
        v16 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *, struct IImmersiveWindowMessageNotification *, unsigned int *))(*(_QWORD *)a5 + 56LL))(
                a5,
                a2,
                a3,
                a4,
                v9);
        v10 = v16;
        if ( v16 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x201,
            (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
            (const char *)(unsigned int)v16);
        IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FA,
          (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F7,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v10;
}
