/*
 * XREFs of PopThermalZoneDpc @ 0x1402010F0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBCD4 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine3 @ 0x14040A130 (KiCustomAccessRoutine3.c)
 *     memset @ 0x140414300 (memset.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[110]; // [rsp+0h] [rbp-1D8h] BYREF
  _DWORD *v10; // [rsp+1B8h] [rbp-20h]

  v10 = v9;
  memset(&v9[84], 0, 0x5CuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[16] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)&v9[105] = a3;
    *(_QWORD *)&v9[91] = __ROL8__(a2, a3);
    *(_QWORD *)&v9[97] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
