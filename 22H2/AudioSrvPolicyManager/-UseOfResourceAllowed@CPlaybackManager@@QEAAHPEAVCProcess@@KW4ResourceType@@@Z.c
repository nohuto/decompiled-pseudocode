/*
 * XREFs of ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180022FD8
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180014660 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001EE38 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     WPP_SF_dSd @ 0x18002262C (WPP_SF_dSd.c)
 */

__int64 __fastcall CPlaybackManager::UseOfResourceAllowed(
        CPlaybackManager *this,
        struct CProcess *a2,
        unsigned int a3,
        enum ResourceType a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi

  v4 = 0;
  v5 = a3;
  if ( a4 )
  {
    if ( a4 == ResourceTypeTheme )
      LOBYTE(v4) = (unsigned int)CApplicationManager::GetSoundLevel((__int64)this, (__int64)a2, 0LL, 0LL, 0LL) != 0;
  }
  else if ( (a3 - 10 <= 1 || a3 - 1 <= 1)
         && (unsigned int)CApplicationManager::GetSoundLevel((__int64)this, (__int64)a2, 0LL, 0LL, 0LL) )
  {
    v4 = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_5aa1b3140c133be9bcd44f84bf38f0ce_Traceguids,
      *((unsigned int *)a2 + 48),
      off_18003F8D0[v5],
      v4);
  }
  return v4;
}
