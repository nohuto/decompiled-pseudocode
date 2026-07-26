/*
 * XREFs of ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009B430
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0097398 (WPP_RECORDER_SF_qqDd.c)
 *     NdisMCoRequestComplete @ 0x1C00BB550 (NdisMCoRequestComplete.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *a1, void *a2, struct _NDIS_OID_REQUEST *a3)
{
  NDIS_OID Oid; // r14d
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi
  NDIS_STATUS v10; // eax
  char v12[4]; // [rsp+38h] [rbp-40h]
  char v13[4]; // [rsp+40h] [rbp-38h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v7 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = a3->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a3,
      *(_DWORD *)v12);
  }
  if ( a3->RequestType == NdisRequestMethod )
  {
    v7 = -1073741637;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB0uLL);
      v9[8] = a3->RequestType;
      v9[10] = a3->DATA.QUERY_INFORMATION.Oid;
      *((_QWORD *)v9 + 6) = a3->DATA.QUERY_INFORMATION.InformationBuffer;
      v9[14] = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
      v9[15] = a3->DATA.QUERY_INFORMATION.BytesWritten;
      v9[16] = a3->DATA.QUERY_INFORMATION.BytesNeeded;
      v9[6] |= 0x400u;
      *((_QWORD *)v9 + 1) = a3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, void *, _DWORD *))(a1[470] + 288LL))(a1[3], a2, v9);
      v7 = v10;
      if ( v10 != 259 )
      {
        NdisMCoRequestComplete(v10, a1, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v7;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x1Du,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a3,
      Oid,
      *(_DWORD *)v13);
  }
  return v7;
}
