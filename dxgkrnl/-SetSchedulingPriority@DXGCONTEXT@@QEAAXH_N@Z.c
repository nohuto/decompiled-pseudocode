/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C01D2200
 * Callers:
 *     ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C004895C (-SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C01D213C (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C01D21AC (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( !*((_BYTE *)this + 442) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 328LL))(
        *((_QWORD *)this + 35),
        a2,
        a3,
        *(unsigned int *)(*(_QWORD *)(v5 + 40) + 432LL));
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 320LL))(
        *((_QWORD *)this + 32),
        a2,
        a3,
        *(unsigned int *)(*(_QWORD *)(v5 + 40) + 432LL));
  }
  *((_DWORD *)this + 108) = a2;
}
