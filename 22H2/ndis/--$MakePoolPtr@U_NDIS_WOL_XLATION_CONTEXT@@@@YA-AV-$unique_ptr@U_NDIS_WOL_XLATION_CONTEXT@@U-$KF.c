/*
 * XREFs of ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01202F8
 * Callers:
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0096130 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009636C (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(_QWORD *a1)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rdx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v3 = 0LL;
  if ( PoolWithTag )
  {
    v3 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
  }
  *a1 = v3;
  return a1;
}
