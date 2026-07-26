/*
 * XREFs of ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A2AEC
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0105EB8 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __fastcall ndisDisableRsc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_MINIPORT_OFFLOAD *v3; // rax
  struct _NDIS_OID_REQUEST v4; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[33]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v6; // [rsp+151h] [rbp+51h]
  char v7; // [rsp+153h] [rbp+53h]

  memset(&v4.Header.Revision, 0, 0xF7uLL);
  v6 = 0;
  v7 = 0;
  Offload = a1->Offload;
  memset(&v5[1], 0, 32);
  if ( Offload && !Offload->RSCDisallowed )
  {
    if ( (Offload->RSCDisallowed = 1, v3 = a1->Offload, v3->MiniportCurrentConfig.Header.Size >= 0x9Cu)
      && v3->MiniportCurrentConfig.Header.Revision >= 3u
      && (v3->MiniportCurrentConfig.Rsc.IPv4.Enabled || v3->MiniportCurrentConfig.Rsc.IPv6.Enabled)
      || v3->TopCapabilities.Header.Size >= 0x9Cu
      && v3->TopCapabilities.Header.Revision >= 3u
      && (v3->TopCapabilities.Rsc.IPv4.Enabled || v3->TopCapabilities.Rsc.IPv6.Enabled) )
    {
      *(_DWORD *)&v5[16] |= 1u;
      *(_DWORD *)v5 = 1704832;
      *(_WORD *)&v5[22] = 257;
      memset(&v4, 0, 0xF8uLL);
      *(_DWORD *)&v4.NdisReserved[16] |= 8u;
      v4.PortNumber = 0;
      *(_QWORD *)&v4.NdisReserved[32] = &ndisIntReqGeneric;
      v4.Header = (NDIS_OBJECT_HEADER)15466902;
      v4.DATA.QUERY_INFORMATION.InformationBuffer = v5;
      v4.DATA.QUERY_INFORMATION.Oid = -67042804;
      v4.RequestType = NdisRequestSetInformation;
      v4.DATA.QUERY_INFORMATION.InformationBufferLength = 36;
      ndisQuerySetMiniportEx(a1, 0LL, &v4, 0, 0LL, 0LL);
    }
  }
}
