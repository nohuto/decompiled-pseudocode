/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C0148BC0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0089AF0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C008B120 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     UpdateTPCurrentActiveState @ 0x1C0097280 (UpdateTPCurrentActiveState.c)
 *     IsLegacyTouchPad @ 0x1C00C48A8 (IsLegacyTouchPad.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x1C0148A9C (TryUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *i; // rcx
  int v4; // edx
  __int64 v5; // rcx

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry();
  HIDWORD(gTouchPadParameters) &= 0xFFFFFFAE;
  *(&qword_1C0294F10 + 1) &= ~0x80u;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared((NSInstrumentation::CPlatformReaderWriterLock *)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList;
        i && ((BYTE12(gTouchPadParameters) & 0x10) == 0 || (BYTE12(gTouchPadParameters) & 0x40) == 0);
        i = *(struct DEVICEINFO **)(v5 + 56) )
  {
    if ( (unsigned int)IsLegacyTouchPad((__int64)i) )
    {
      HIDWORD(gTouchPadParameters) = v4 | 0x10;
    }
    else if ( (*(_DWORD *)(v5 + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(v5 + 472) + 24LL) == 7 )
    {
      HIDWORD(gTouchPadParameters) = v4 | 0x40;
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 472) + 768LL) >= 5u )
        *(&qword_1C0294F10 + 1) |= 0x20u;
      if ( (*(_DWORD *)(v5 + 200) & 0x400) != 0 )
        *(&qword_1C0294F10 + 1) |= 0x80u;
    }
  }
  GreLeaveCriticalRegionAndReleasePushLockShared((__int64)&CBaseInput::_sLock);
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&qword_1C0294F10;
    if ( DWORD2(gTouchPadParameters) == 4
      && (BYTE12(gTouchPadParameters) & 0x10) != 0
      && (BYTE12(gTouchPadParameters) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 8) = 3;
    }
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
