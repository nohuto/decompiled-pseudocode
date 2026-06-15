/*
 * XREFs of ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180010F18
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180010E60 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x18000A680 (WPP_SF_SSd.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18000FAA8 (McGenEventWrite_EventWriteTransfer.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180016294 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

void __fastcall CApplication::SendSoundLevelNotification(__int64 a1, int a2)
{
  __int64 v4; // r8
  _UNKNOWN **v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  const wchar_t *v11; // rax
  __int64 v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+30h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-48h] BYREF
  char v15; // [rsp+40h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-38h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  int *v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, a2);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v6 = *(_QWORD **)(a1 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( (*(_BYTE *)(v7 + 480) & 1) != 0 && !*(_DWORD *)(v7 + 448) )
    {
      if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      {
        LODWORD(v12) = *(_DWORD *)(v7 + 192);
        WPP_SF_SSd(
          (TRACEHANDLE)v5[2],
          0xFu,
          &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
          L"SoundLevelChanged",
          *(const wchar_t **)(a1 + 24),
          v12);
      }
      if ( Microsoft_Windows_AudioEnableBits < 0 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        v13 = a2;
        if ( v8 )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( *(_WORD *)(v8 + 2 * v9) );
          v10 = 2 * v9 + 2;
        }
        else
        {
          v10 = 10;
        }
        v18 = v10;
        v11 = L"NULL";
        v19 = 0;
        if ( v8 )
          v11 = (const wchar_t *)v8;
        v21 = 4LL;
        v17 = v11;
        v20 = &v13;
        McGenEventWrite_EventWriteTransfer(v8, &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, v4, 3u, &v16);
      }
      CProcess::SendPBMNotification(v7, 0LL);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
}
