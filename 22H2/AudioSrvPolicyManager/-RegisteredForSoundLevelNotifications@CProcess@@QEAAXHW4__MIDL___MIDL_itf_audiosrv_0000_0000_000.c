/*
 * XREFs of ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015640
 * Callers:
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001B274 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::RegisteredForSoundLevelNotifications(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( a3 != -1 && a3 )
    goto LABEL_12;
  if ( a2 )
  {
    if ( ++*(_DWORD *)(a1 + 536) != 1 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 480) | (1 << a3);
  }
  else
  {
    if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 536) = 0;
      *(_DWORD *)(a1 + 480) &= ~1u;
      goto LABEL_12;
    }
    v7 = *(_DWORD *)(a1 + 536);
    if ( !v7 )
      goto LABEL_12;
    v8 = v7 - 1;
    *(_DWORD *)(a1 + 536) = v8;
    if ( v8 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 480) & ~(1 << a3);
  }
  *(_DWORD *)(a1 + 480) = v6;
LABEL_12:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
