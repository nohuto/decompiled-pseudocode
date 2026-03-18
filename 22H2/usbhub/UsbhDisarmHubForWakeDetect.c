/*
 * XREFs of UsbhDisarmHubForWakeDetect @ 0x1C001B180
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010064 (UsbhArmHubForWakeDetect.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00140B0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhUninitialize @ 0x1C002EB00 (UsbhUninitialize.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C003C90C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003CA70 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisarmHubForWakeDetect(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( !a1 )
      goto LABEL_13;
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
      *(_DWORD *)v3 = 760698728;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  if ( !a1 )
LABEL_13:
    UsbhTrapFatal_Dbg(a1, a1);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( *(_DWORD *)(v4 + 4884) )
  {
    _m_prefetchw((const void *)(v4 + 4884));
    if ( _InterlockedOr((volatile signed __int32 *)(v4 + 4884), 1u) == 4 )
    {
      IoCancelIrp(*(PIRP *)(v4 + 4888));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4884), 4, 5) == 7 )
        IofCompleteRequest(*(PIRP *)(v4 + 4888), 0);
    }
  }
}
