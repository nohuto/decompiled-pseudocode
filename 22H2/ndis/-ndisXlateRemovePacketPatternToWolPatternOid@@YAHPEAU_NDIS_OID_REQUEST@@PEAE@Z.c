/*
 * XREFs of ?ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0096630
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092DD0 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisXlateRemovePacketPatternToWolPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  _OWORD *PoolWithTag; // rax

  v2 = 0;
  *a2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *(_DWORD *)PoolWithTag = a1->DATA.QUERY_INFORMATION.Oid;
    *((_QWORD *)PoolWithTag + 1) = a1->DATA.QUERY_INFORMATION.InformationBuffer;
    *((_DWORD *)PoolWithTag + 4) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
    *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)&a1->NdisReserved[80];
    a1->DATA.QUERY_INFORMATION.Oid = -50265845;
    a1->DATA.QUERY_INFORMATION.InformationBuffer = (char *)PoolWithTag + 24;
    a1->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    *(_QWORD *)&a1->NdisReserved[72] = PoolWithTag;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x71u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        a1);
    v2 = -1073741670;
    *a2 = 1;
  }
  return v2;
}
