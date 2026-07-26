/*
 * XREFs of ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115CE0
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0115A28 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C005AB48 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C678 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C005C6BC (ndisMSendPmParametersOidForSx.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct _NDIS_PM_PARAMETERS v5; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v6; // [rsp+58h] [rbp-30h] BYREF

  v6 = *ndisMInitializePmParametersForAoAc(&v5, a1);
  v2 = ndisMSendPmParametersOidForSx(a1, &v6);
  v3 = v2;
  if ( v2 )
  {
    NdisUnexpectedAoAcError(a1, 4u, v2);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x21u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        v3,
        a1);
  }
  return v3;
}
