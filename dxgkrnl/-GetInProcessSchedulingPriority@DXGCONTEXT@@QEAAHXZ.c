/*
 * XREFs of ?GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ @ 0x1C02DF9D8
 * Callers:
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02EC890 (DxgkGetContextInProcessSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::GetInProcessSchedulingPriority(DXGCONTEXT *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL);
  if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(v1 + 368))(*((_QWORD *)this + 35));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(v1 + 360))(*((_QWORD *)this + 32));
}
