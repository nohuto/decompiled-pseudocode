/*
 * XREFs of ??$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x180278B68
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027E368 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x18028097C (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180280AD0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801F3F1C (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 168);
  if ( !v3 )
    goto LABEL_9;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  v5 = v4(v3, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 3202LL;
    goto LABEL_7;
  }
  if ( !v10 )
  {
LABEL_9:
    v6 = -2147023728;
    goto LABEL_10;
  }
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
         &v10,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0;
    goto LABEL_10;
  }
  v7 = 3204LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  return v6;
}
