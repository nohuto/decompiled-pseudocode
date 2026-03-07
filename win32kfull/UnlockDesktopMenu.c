__int64 __fastcall UnlockDesktopMenu(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 142LL);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 44LL) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 16LL);
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) & 0x40) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 16LL) + 40LL);
      *(_DWORD *)(v3 + 40) &= ~0x40u;
    }
  }
  return HMAssignmentUnlock(a1);
}
