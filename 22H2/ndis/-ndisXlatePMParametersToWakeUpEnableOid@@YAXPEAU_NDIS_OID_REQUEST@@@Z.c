/*
 * XREFs of ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00965BC
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B690 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostEnableWakeUp@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091B70 (-ndisOidPostEnableWakeUp@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisXlatePMParametersToWakeUpEnableOid(struct _NDIS_OID_REQUEST *a1)
{
  __m128i *InformationBuffer; // r9
  __m128i v2; // xmm0
  unsigned int v3; // r8d
  int v4; // eax

  InformationBuffer = (__m128i *)a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v2 = _mm_srli_si128(*InformationBuffer, 8);
  v3 = ((unsigned int)HIDWORD(InformationBuffer->m128i_i64[0]) >> 1) & 1 | 2;
  if ( (InformationBuffer->m128i_i64[0] & 0x100000000LL) == 0 )
    v3 = ((unsigned int)HIDWORD(InformationBuffer->m128i_i64[0]) >> 1) & 1;
  v4 = v3 | 4;
  if ( (v2.m128i_i8[4] & 1) == 0 )
    v4 = v3;
  InformationBuffer->m128i_i32[0] = v4;
  *(_DWORD *)&a1->NdisReserved[80] = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  a1->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  a1->DATA.QUERY_INFORMATION.Oid = -50265850;
}
