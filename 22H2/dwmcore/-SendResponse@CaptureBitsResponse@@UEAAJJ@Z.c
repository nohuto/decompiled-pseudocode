/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801936E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800CF5C8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180178BB8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  CLegacySurfaceManager *v8; // rcx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10 = 2;
  v11 = 0LL;
  v12 = 0LL;
  LODWORD(v12) = *((_DWORD *)this + 419);
  HIDWORD(v12) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v11 + 4) = *((_QWORD *)this + 211);
    HIDWORD(v11) = *((_DWORD *)this + 426);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 5), (const struct MIL_MESSAGE *)&v10, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x71u, 0LL);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 211) = 0LL;
  }
  v8 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v8);
  return v7;
}
