/*
 * XREFs of ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4388
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1802BFEF0 (-OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EnterFullScreen@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802BDBF0 (-EnterFullScreen@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?ExitFullScreen@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802BDD00 (-ExitFullScreen@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x1802C0D90 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 *     ?_CalculateCurrentLogicalWindowSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUSize@Foundation@5@@Z @ 0x1802C34CC (-_CalculateCurrentLogicalWindowSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3F68 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_OnShellFullscreenStateChanged(
        RTL_SRWLOCK *this,
        char a2)
{
  const char *v4; // r9
  signed int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // xmm6_8
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // xmm0_4
  int v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v18; // [rsp+60h] [rbp+18h] BYREF

  if ( !Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1131LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v4);
  v18 = 0LL;
  if ( !a2 )
  {
    AcquireSRWLockExclusive(this + 28);
    v12 = (int)v18;
    v13 = HIDWORD(v18);
    v14 = *(float *)&this[68].Ptr;
    *(float *)&v18 = v14;
    v15 = *((float *)&this[68].Ptr + 1);
    *((float *)&v18 + 1) = v15;
    LODWORD(this[68].Ptr) = v12;
    HIDWORD(this[68].Ptr) = v13;
    if ( this != (RTL_SRWLOCK *)-224LL )
      ReleaseSRWLockExclusive(this + 28);
    v16 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::ExitFullScreen((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[2]);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x488,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v16);
    if ( v14 == 0.0 )
      return 0LL;
    if ( v15 == 0.0 )
      return 0LL;
    v10 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RaiseSizePreferencesChanged(
            (__int64)&this[2],
            (__int64)v18);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1165LL;
    goto LABEL_20;
  }
  v5 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CalculateCurrentLogicalWindowSize(
         this,
         (struct Windows::Foundation::Size *)&v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x470,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  AcquireSRWLockExclusive(this + 28);
  this[68].Ptr = this[67].Ptr;
  v8 = (__int64)v18;
  this[67].Ptr = v18;
  if ( this != (RTL_SRWLOCK *)-224LL )
    ReleaseSRWLockExclusive(this + 28);
  v9 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::EnterFullScreen((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[2]);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v9);
  v10 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RaiseSizePreferencesChanged(
          (__int64)&this[2],
          v8);
  if ( v10 < 0 )
  {
    v11 = 1147LL;
LABEL_20:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
  }
  return 0LL;
}
