/*
 * XREFs of ??$MakeSizedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@K_K@Z @ 0x1C0120344
 * Callers:
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C0120214 (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 * Callees:
 *     memset @ 0x1C0040B00 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_NDIS_PM_PACKET_PATTERN>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x7877444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    *(_OWORD *)v6 = 0LL;
    v6[2] = 0LL;
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
