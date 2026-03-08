/*
 * XREFs of ProcessChannelPostStarted @ 0x1C03628B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C03620B0 (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelPostStarted()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_1C013CE58)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelPostStarted(v0, v1, v2, v3);
}
