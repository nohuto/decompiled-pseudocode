void __fastcall CFSVPProvider::CheckForMajorityScreenVideoNotificationsWithCompSurfInfo(
        struct _SEB_RPC_PUBLISH_DATA **this,
        struct CCompositionSurfaceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  char v9; // al
  bool v10; // dl
  unsigned int v11; // r8d
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-28h]

  if ( this[2] || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, this + 2), v4 >= 0) )
  {
    if ( this[3] || (v6 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, this + 3), v6 >= 0) )
    {
      if ( a2 )
      {
        v8 = 100;
        v9 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *, _BYTE *))(*(_QWORD *)a2 + 392LL))(a2, v12);
        v10 = 1;
        if ( v9 )
          v8 = v13;
        v11 = v8;
      }
      else
      {
        v11 = 0;
        v10 = 0;
      }
      CFSVPProvider::SignalSEB((CFSVPProvider *)this, v10, v11);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180353AB0, 2u, v6, 0x75u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180353AB0, 2u, v4, 0x6Fu, 0LL);
  }
}
