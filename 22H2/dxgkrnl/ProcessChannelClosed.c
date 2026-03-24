/*
 * XREFs of ProcessChannelClosed @ 0x1C02B4390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B3B3C (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_1C00B4348)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1);
}
