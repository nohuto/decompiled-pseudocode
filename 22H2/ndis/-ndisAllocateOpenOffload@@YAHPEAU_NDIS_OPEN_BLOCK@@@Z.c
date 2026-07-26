/*
 * XREFs of ?ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002F440
 * Callers:
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F27C (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E8B0 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(struct _NDIS_OPEN_BLOCK *a1)
{
  unsigned int v2; // ebx
  _NDIS_OPEN_OFFLOAD *PoolWithTag; // rax

  v2 = -1073741670;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x54u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  PoolWithTag = (_NDIS_OPEN_OFFLOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  a1->Offload = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(_NDIS_OPEN_OFFLOAD));
    v2 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x55u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1->Offload);
  return v2;
}
