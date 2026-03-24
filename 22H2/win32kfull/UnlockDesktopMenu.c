/*
 * XREFs of UnlockDesktopMenu @ 0x1C0136160
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026774 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C016D2B8 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax

  v2 = *a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) & 0x40) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 142LL);
    v2 = *a1;
  }
  *(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 44LL)
    && (unsigned __int8)HmgLockResultBase<META>::operator bool(*(_QWORD *)(*a1 + 88) + 16LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 40LL) + 40LL) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
      v4 = *a1;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL) + 40LL);
    *(_DWORD *)(v5 + 40) &= ~0x40u;
  }
  return HMAssignmentUnlock(a1);
}
