/*
 * XREFs of ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180202974
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180202ABC (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18005EB60 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180201C64 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180203B20 (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND v4; // rcx
  HWND v6; // rcx
  const char *v7; // r9
  LONG bottom; // eax
  LONG right; // ecx
  LONG top; // edx
  LONG left; // r8d
  void *v12; // r8
  __int64 v13; // rdx
  int v14; // edi
  _QWORD *v15; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = *(HWND *)(a1 + 32);
  if ( v4 )
  {
    if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(v4) )
      return 2147500037LL;
    v6 = *(HWND *)(a1 + 32);
    Rect = 0LL;
    if ( !GetWindowRect(v6, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x171,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
               v7);
    bottom = *(_DWORD *)(a1 + 28);
    right = *(_DWORD *)(a1 + 24);
    if ( Rect.bottom > bottom )
      bottom = Rect.bottom;
    top = *(_DWORD *)(a1 + 20);
    if ( Rect.right > right )
      right = Rect.right;
    left = *(_DWORD *)(a1 + 16);
    if ( Rect.top < top )
      top = Rect.top;
    v16[1] = top;
    if ( Rect.left < left )
      left = Rect.left;
    v16[2] = right;
    v16[0] = left;
    v16[3] = bottom;
    if ( Platform::Guid::Equals((Platform::Guid *)v16, (const struct _GUID *)&Rect) )
    {
      v13 = a2[1];
      if ( v13 == a2[3] )
      {
        v14 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                (__int64)a2,
                v13 + 1,
                v12);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x174,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
            (const char *)(unsigned int)v14);
          return (unsigned int)v14;
        }
      }
      v15 = (_QWORD *)(*a2 + 8 * a2[1]++);
      if ( v15 )
        *v15 = *(_QWORD *)(a1 + 32);
    }
  }
  return 0LL;
}
