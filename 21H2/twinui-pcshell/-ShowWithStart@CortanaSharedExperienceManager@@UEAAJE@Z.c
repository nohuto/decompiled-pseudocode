/*
 * XREFs of ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18022A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18022B0EC (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShowWithStart(CortanaSharedExperienceManager *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 53) + 32LL))(
         *((_QWORD *)this + 53),
         1LL,
         *((_QWORD *)this + 63));
  v5 = v4;
  if ( v4 >= 0 )
  {
    CortanaSharedExperienceManager::TryGetDesktopViewIfActive(this, &v12);
    if ( v12 )
    {
      LOBYTE(v6) = a2;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 88LL))(v12, v6);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = (unsigned int)v9;
      v8 = 466LL;
    }
    else
    {
      v5 = -2147467259;
      v7 = 2147500037LL;
      v8 = 465LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
