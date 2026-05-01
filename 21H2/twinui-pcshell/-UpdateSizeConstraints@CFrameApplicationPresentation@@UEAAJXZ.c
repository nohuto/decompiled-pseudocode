/*
 * XREFs of ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180063D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x180063E20 (Windows--Internal--ComTaskPool--QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::UpdateSizeConstraints(CFrameApplicationPresentation *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CFrameApplicationPresentation *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 14) == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v2 = *(_QWORD *)this;
    v11 = this;
    (*(void (**)(void))(v2 + 8))();
    v3 = *(_QWORD *)this;
    v9[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(v3 + 8))(this);
    v4 = *((unsigned int *)this + 12);
    v9[1] = this;
    v9[2] = this;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___(v6, v5, v4, v9);
    if ( v9[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
    if ( v7 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return (unsigned int)v7;
}
