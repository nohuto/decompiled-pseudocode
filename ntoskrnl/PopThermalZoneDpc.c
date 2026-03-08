/*
 * XREFs of PopThermalZoneDpc @ 0x1403C7A40
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403ED6A8 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine3 @ 0x140422A40 (KiCustomAccessRoutine3.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[104]; // [rsp+0h] [rbp-1B8h] BYREF
  _DWORD *v10; // [rsp+1A0h] [rbp-18h]

  v10 = v9;
  memset(&v9[76], 0, 0x5CuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)&v9[97] = a3;
    *(_QWORD *)&v9[83] = __ROL8__(a2, a3);
    *(_QWORD *)&v9[89] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
