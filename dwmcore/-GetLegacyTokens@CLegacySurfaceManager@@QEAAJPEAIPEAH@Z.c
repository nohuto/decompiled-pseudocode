/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18012C13E
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180044F90 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(CLegacySurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  int FrameLegacyTokens; // eax
  __int64 v8; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&CurrentFrameId, v5, v6);
  if ( FrameLegacyTokens < 0 )
  {
    v4 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      v4,
      *a2);
  return v4;
}
