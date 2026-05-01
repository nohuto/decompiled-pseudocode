/*
 * XREFs of _lambda_65bd7f122925cc900a11f0d0a2dc2897_::operator() @ 0x18014ED0C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::Run @ 0x18014F3D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001BC20 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002C1EC (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180049C84 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18008B2DC (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_65bd7f122925cc900a11f0d0a2dc2897_::operator()(Microsoft::WRL::WeakRef *this)
{
  int v2; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // rbp
  HSTRING *v5; // rcx
  HSTRING *v6; // rcx
  _BYTE v8[80]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInspectable *v10; // [rsp+80h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (Microsoft::WRL::WeakRef *)((char *)this + 32),
    (wil::ActivityThreadWatcher *)v8);
  v2 = *((_DWORD *)this + 6);
  if ( v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v10, this);
    if ( v10 )
    {
      v2 = -2144927148;
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
      v4 = StringRawBuffer;
      v5 = (HSTRING *)*((_QWORD *)this + 1);
      if ( !v5[21]
        || (v2 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v5, v5 + 21, StringRawBuffer),
            v2 < 0) )
      {
        v6 = (HSTRING *)*((_QWORD *)this + 1);
        if ( v6[23] )
          v2 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v6, v6 + 23, v4);
        if ( v2 < 0 )
          v2 = CSingleViewShellExperience::LaunchCore(
                 *((CSingleViewShellExperience **)this + 1),
                 (HSTRING *)(*((_QWORD *)this + 1) + 8LL),
                 v4);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 88LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL),
        *((_QWORD *)this + 1),
        (unsigned int)v2);
      if ( v2 < 0 )
        goto LABEL_13;
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)this + 32);
    }
    v2 = 0;
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x121,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
LABEL_14:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
  return (unsigned int)v2;
}
