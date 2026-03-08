/*
 * XREFs of ProcessChannelClosed @ 0x1C0362880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0361FF8 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_1C013CE58)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1, v2, v3);
}
