/*
 * XREFs of ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0084868
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C005C6BC (ndisMSendPmParametersOidForSx.c)
 */

void __fastcall ndisWdfSendPmParametersForSx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __m128i v1; // xmm0
  int v3; // eax
  __m128i v4; // [rsp+40h] [rbp-28h] BYREF
  unsigned int MediaSpecificWakeUpEvents; // [rsp+50h] [rbp-18h]

  v1 = *(__m128i *)&a1->PMCurrentParameters.Header.Type;
  MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
  v4 = v1;
  v4.m128i_i32[3] = _mm_srli_si128(v1, 8).m128i_i32[1] & 0xFFFFFFFE;
  v3 = ndisMSendPmParametersOidForSx(a1, &v4);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x83u,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v3,
        a1);
  }
}
