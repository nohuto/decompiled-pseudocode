/*
 * XREFs of MiReturnCrossPartitionCharge @ 0x140658D04
 * Callers:
 *     MiGetCrossPartitionCharges @ 0x1406579B0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x140658D04 (MiReturnCrossPartitionCharge.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 * Callees:
 *     MiConvertCrossPartitionChargeTypeToAggregate @ 0x140656DDC (MiConvertCrossPartitionChargeTypeToAggregate.c)
 *     MiReturnCrossPartitionCharge @ 0x140658D04 (MiReturnCrossPartitionCharge.c)
 */

__int64 __fastcall MiReturnCrossPartitionCharge(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // r10
  _QWORD *i; // rcx

  v4 = 32LL * a2;
  v5 = 7LL;
  v6 = *(_QWORD *)(v4 + a1 + 2120) - a3;
  *(_QWORD *)(v4 + a1 + 2120) = v6;
  if ( a2 >= 7 )
  {
    if ( !v6 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
    {
      for ( i = (_QWORD *)(a1 + 2344); !*i; i += 4 )
      {
        if ( ++v5 >= 9 )
          return 1LL;
      }
    }
    return 0LL;
  }
  else
  {
    v7 = MiConvertCrossPartitionChargeTypeToAggregate(a2);
    return MiReturnCrossPartitionCharge(v8, v7);
  }
}
