/*
 * XREFs of ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x1800708E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3d1fcc114f22629400696f1d7422949c___ @ 0x180070974 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3d1fcc114f22629400696f1d7422949c.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]
  int *v11; // [rsp+30h] [rbp-18h]
  int *v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 216LL))(*(_QWORD *)(a1 + 272));
  *(_QWORD *)v9 = a1 - 16;
  v10 = &v14;
  v11 = &v15;
  v12 = &v16;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3d1fcc114f22629400696f1d7422949c___(
         v6,
         CurrentThreadId,
         v9);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x69F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
    __debugbreak();
    JUMPOUT(0x18019C62CLL);
  }
  return 0LL;
}
