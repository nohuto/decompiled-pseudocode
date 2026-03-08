/*
 * XREFs of HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0009A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C003CE78 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C003D274 (HUBDESC_Validate20HubDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 *v6; // rcx
  __int64 *v7; // rsi
  __int16 v8; // ax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  __int16 v11; // ax
  __int16 v12; // ax
  _WORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+34h] [rbp-44h]
  __int128 v16; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v17)(); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v18)(); // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 960);
  v14[1] = 0;
  v16 = 0LL;
  v20 = 0LL;
  v3 = *(_DWORD *)(v2 + 256);
  v14[0] = *(_WORD *)(v2 + 2458);
  v15 = v3;
  v17 = HUBMISC_LogDescriptorValidationErrorForHub;
  v18 = HUBMISC_LogDescriptorValidationWarningForHub;
  v19 = v2;
  v4 = v3 - 1;
  if ( !v4 || (v5 = v4 - 1) == 0 )
  {
    v7 = (__int64 *)(v2 + 2520);
    if ( (unsigned __int8)HUBDESC_Validate20HubDescriptor(v2 + 1180, a2, v14, *(_QWORD *)(v2 + 2520)) )
    {
      v12 = *(unsigned __int8 *)(v2 + 1182);
      v9 = 2053;
      *(_WORD *)(v2 + 48) = v12;
      *(_WORD *)(v2 + 144) = v12;
      if ( (*(_BYTE *)(v2 + 1183) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
      v10 = 8;
      if ( (*(_BYTE *)(v2 + 1183) & 8) != 0 )
        goto LABEL_16;
      return v9;
    }
LABEL_17:
    v6 = v7;
LABEL_18:
    v9 = 2045;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*v6, 2u, 3u, 0x21u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
    return v9;
  }
  if ( v5 != 1 )
  {
    v6 = (__int64 *)(v2 + 2520);
    goto LABEL_18;
  }
  v7 = (__int64 *)(v2 + 2520);
  if ( !(unsigned __int8)HUBDESC_Validate30HubDescriptor(v2 + 1180, a2, v14, *(_QWORD *)(v2 + 2520)) )
    goto LABEL_17;
  v8 = *(unsigned __int8 *)(v2 + 1182);
  v9 = 2053;
  *(_WORD *)(v2 + 48) = v8;
  *(_WORD *)(v2 + 150) = v8;
  if ( (*(_BYTE *)(v2 + 1183) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), 4u);
  v10 = 16;
  v11 = *(_WORD *)(v2 + 1183) & 0x18;
  if ( v11 == 16 || v11 == 24 || (v10 = 8, v11 == 8) )
LABEL_16:
    _InterlockedOr((volatile signed __int32 *)(v2 + 40), v10);
  return v9;
}
