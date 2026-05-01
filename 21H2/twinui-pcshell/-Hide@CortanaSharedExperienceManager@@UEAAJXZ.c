/*
 * XREFs of ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180228370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18022B0EC (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022CF40 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Hide(CortanaSharedExperienceManager *this)
{
  int started; // eax
  unsigned int v3; // edi
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 536)
    && (started = CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(this), v3 = started, started < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return v3;
  }
  else
  {
    CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v7);
    if ( v7 )
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    else
      v5 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    return v5;
  }
}
