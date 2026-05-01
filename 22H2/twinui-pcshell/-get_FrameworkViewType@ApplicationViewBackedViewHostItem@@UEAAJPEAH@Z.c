/*
 * XREFs of ?get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z @ 0x1802CBA20
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1802C9C60 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_FrameworkViewType(
        ApplicationViewBackedViewHostItem *this,
        int *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *((_DWORD *)this + 62);
  if ( *((_DWORD *)this + 62) == 6 )
  {
    v4 = *((_QWORD *)this + 25);
    v7 = 6;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 400LL))(v4, &v7) >= 0 )
    {
      v5 = v7;
      if ( v7 != 6 )
      {
        *a2 = v7;
        *((_DWORD *)this + 62) = v5;
      }
    }
  }
  return 0LL;
}
