/*
 * XREFs of ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C0120214
 * Callers:
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009636C (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ??$MakeSizedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@K_K@Z @ 0x1C0120344 (--$MakeSizedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U-$K.c)
 */

_QWORD *__fastcall MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    *a4 = 0;
  v6 = a3 + 24;
  if ( a3 >= 0xFFFFFFE8 )
  {
    *a1 = 0LL;
  }
  else
  {
    MakeSizedPoolPtr<_NDIS_PM_PACKET_PATTERN>(&v9, a2, v6);
    v7 = v9;
    if ( v9 )
    {
      if ( a4 )
        *a4 = v6;
      *a1 = v7;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
