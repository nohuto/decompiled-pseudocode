/*
 * XREFs of ?IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804008AC
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180401190 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SwitchItemCollection::IsIncludedTab(SwitchItemCollection *this, struct IApplicationView *a2)
{
  bool v2; // di
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 62)
    || (*(int (__fastcall **)(_QWORD, struct IApplicationView *, int *))(**((_QWORD **)this + 27) + 72LL))(
         *((_QWORD *)this + 27),
         a2,
         &v7) < 0
    || !v7 )
  {
    return 1;
  }
  v5 = *((_QWORD *)this + 27);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(int (__fastcall **)(__int64, struct IApplicationView *, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, a2, &v8) >= 0 )
    v2 = v8 != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v2;
}
