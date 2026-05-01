/*
 * XREFs of ?UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x1800B7E98
 * Callers:
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B9228 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@W4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAMAEAMAEAMAEAM@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAM111@Z @ 0x1800B0948 (--$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@W4ShellFeedsButtonType@Experience@Sh.c)
 *     ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed@AEAY0L@$$CBG@ShellFeedsTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x1800B0A34 (--$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed@AEAY0L@$$CBG@ShellFeedsTelemet.c)
 *     ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed@AEAY0M@$$CBG@ShellFeedsTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1800B0AA0 (--$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed@AEAY0M@$$CBG@ShellFeedsTelemet.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ShellFeedsExperienceManagerImpl::UpdatePositioningAnchorRect(ShellFeedsExperienceManagerImpl *this)
{
  HWND WindowW; // rax
  __int64 v3; // rcx
  HWND v4; // rbx
  unsigned __int64 PropW; // rdi
  HANDLE v6; // rax
  __int64 v7; // rcx
  __int16 v8; // r8d^2
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // rdi
  float v12; // [rsp+30h] [rbp-10h] BYREF
  float v13; // [rsp+34h] [rbp-Ch] BYREF
  float v14; // [rsp+38h] [rbp-8h] BYREF
  float v15; // [rsp+3Ch] [rbp-4h] BYREF
  int v16; // [rsp+58h] [rbp+18h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  v4 = WindowW;
  if ( WindowW )
  {
    PropW = (unsigned __int64)GetPropW(WindowW, L"FeedsWindowPosition_TopLeft");
    v6 = GetPropW(v4, L"FeedsWindowPosition_BottomRight");
    v8 = WORD1(v6);
    if ( PropW && v6 )
    {
      v9 = (__int16)PropW;
      v10 = (__int16)v6 - (__int16)PropW;
      v11 = PropW >> 16;
      v16 = 2;
      v12 = (float)v9;
      v14 = (float)v10;
      v13 = (float)(__int16)v11;
      v15 = (float)((__int16)v11 - v8);
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType,float &,float &,float &,float &>(
        &v16,
        (int *)&v12,
        (int *)&v13,
        (int *)&v14,
        (int *)&v15);
      (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &v12);
    }
    else
    {
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed<unsigned short const (&)[12]>(v7);
    }
  }
  else
  {
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed<unsigned short const (&)[11]>(v3);
  }
}
