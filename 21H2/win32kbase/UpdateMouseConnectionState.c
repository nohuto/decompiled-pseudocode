/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0097404
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0097280 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C0097534 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C00975B8 (ApiSetIsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // edi
  struct DEVICEINFO *v1; // rbx
  char v2; // si
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // edi
  __int64 result; // rax

  v0 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  v1 = CBaseInput::_spDevList;
  v2 = 1;
  while ( v1 )
  {
    if ( !*((_BYTE *)v1 + 48)
      && !*((_WORD *)v1 + 440)
      && (*((_DWORD *)v1 + 46) & 0x400) == 0
      && !(unsigned int)ApiSetIsMouseDeviceOnIgnoreList(v1) )
    {
      v0 = 1;
      break;
    }
    v1 = (struct DEVICEINFO *)*((_QWORD *)v1 + 7);
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = v2;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v3, v4, v5);
  }
  v6 = 16 * v0;
  result = v6 | *(&qword_1C0294F10 + 1) & 0xFFFFFFEF;
  *(&qword_1C0294F10 + 1) = v6 | *(&qword_1C0294F10 + 1) & 0xFFFFFFEF;
  return result;
}
