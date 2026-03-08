/*
 * XREFs of ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C005CE70
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005B740 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(struct DXGKVMB_COMMAND_SIGNALGUESTEVENT *a1)
{
  void *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  bool v4; // zf
  struct _KEVENT *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( !*((_QWORD *)a1 + 4) )
  {
    v2 = (void *)*((_QWORD *)a1 + 3);
    if ( (unsigned __int64)v2 > MmUserProbeAddress && !*((_BYTE *)a1 + 42) )
    {
      if ( (*((_BYTE *)a1 + 43) & 1) != 0 )
      {
        v7 = 0LL;
        LOBYTE(v7) = *((_BYTE *)a1 + 40);
        v6 = (unsigned __int64)v2;
        Global = DXGGLOBAL::GetGlobal();
        (*((void (__fastcall **)(__int128 *))Global + 3))(&v6);
      }
      else
      {
        v4 = *((_BYTE *)a1 + 41) == 0;
        v5 = (struct _KEVENT *)*((_QWORD *)a1 + 3);
        if ( v4 )
          KeSetEvent(v5, 0, 0);
        else
          KePulseEvent(v5, 0, 0);
        if ( *((_BYTE *)a1 + 40) )
          ObfDereferenceObject(v2);
      }
    }
  }
}
