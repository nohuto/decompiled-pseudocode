/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1800224B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x1800225BC (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA34,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL,
      v10);
    return v5;
  }
  if ( *((struct IWindowingEnvironmentConfig **)this + 85) != a2 )
  {
    (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)a2 + 8LL))(a2);
    v12 = *((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL))(this, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 2620LL;
  }
  else
  {
    if ( !v13 )
      goto LABEL_8;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 85) + 80LL))(
           *((_QWORD *)this + 85),
           v13,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 2625LL;
      goto LABEL_17;
    }
    v6 = v12;
    if ( *((_DWORD *)this + 172) == (_DWORD)v12
      || (*((_DWORD *)this + 172) = v12,
          v4 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId((CImmersiveApp *)((char *)this + 184), v6),
          v5 = v4,
          v4 >= 0) )
    {
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    v9 = 2629LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v4,
    v10);
LABEL_9:
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
