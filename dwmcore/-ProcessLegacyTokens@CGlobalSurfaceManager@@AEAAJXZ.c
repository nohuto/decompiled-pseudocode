__int64 __fastcall CGlobalSurfaceManager::ProcessLegacyTokens(CGlobalSurfaceManager *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v13; // rcx
  unsigned int *v14; // r8
  __int64 v15; // rdi
  int v17; // eax
  int v18; // eax
  int LegacyTokens; // eax
  bool v20; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-2Ch] BYREF
  int v22; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v23[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v24[16]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0;
  v5 = 0;
  v23[0] = 0;
  v6 = 0;
  v21 = 0;
  v22 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start,
      a3,
      1LL,
      v24);
  v7 = CLegacySurfaceManager::ProcessUnclaimedTokens((CGlobalSurfaceManager *)((char *)this + 152), v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xE4u, 0LL);
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
    if ( g_pComposition )
      v11 = *((_QWORD *)g_pComposition + 62);
    *(_QWORD *)v23 = v11;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v23, &v21, &v22);
    if ( FrameLegacyTokens < 0 )
    {
      v10 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        (unsigned int)v10,
        v21);
    *((_DWORD *)this + 62) = v10;
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        v5 += v21;
        v15 = *((_QWORD *)this + 13);
        if ( v21 )
          break;
LABEL_12:
        v3 = 0;
        if ( v22 )
        {
          ++v6;
          LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v13, &v21, &v22);
          *((_DWORD *)this + 62) = LegacyTokens;
          if ( LegacyTokens >= 0 )
            continue;
        }
        goto LABEL_13;
      }
      while ( 1 )
      {
        v20 = 0;
        v17 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 152),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v15,
                v14,
                &v20);
        v9 = v17;
        if ( v17 < 0 )
          break;
        if ( !v20 )
        {
          v18 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CGlobalSurfaceManager *)((char *)this + 152),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v15);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v18, 0xFCu, 0LL);
            goto LABEL_13;
          }
        }
        ++v3;
        v15 += *(unsigned int *)(v15 + 4);
        if ( v3 >= v21 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v17, 0xF7u, 0LL);
    }
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v5,
      v6);
  dword_1803E2A9C += v5;
  return v9;
}
