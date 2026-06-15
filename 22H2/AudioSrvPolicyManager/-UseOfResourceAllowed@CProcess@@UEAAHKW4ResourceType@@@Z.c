/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180014660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180022FD8 (-UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z.c)
 */

__int64 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, unsigned int a2, enum ResourceType a3)
{
  unsigned int v3; // ebx
  _DWORD pvData[6]; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( g_PlaybackManager )
  {
    v3 = CPlaybackManager::UseOfResourceAllowed(this, (CProcess *)((char *)this - 16), a2, a3);
    if ( v3 && a3 == ResourceTypeStatic )
    {
      v3 = 1;
      if ( !*((_DWORD *)this + 109) && !*((_DWORD *)this + 121) && !*((_DWORD *)this + 122) )
      {
        pcbData = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AllowClassicOffload",
               0x18u,
               0LL,
               pvData,
               &pcbData)
          || !pvData[0] )
        {
          return 0;
        }
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids);
  }
  return v3;
}
