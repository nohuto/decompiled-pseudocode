/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x1402EC070
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine6 @ 0x140422980 (KiCustomAccessRoutine6.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[80]; // [rsp+0h] [rbp-158h] BYREF
  _DWORD *v10; // [rsp+140h] [rbp-18h]

  v10 = v9;
  memset(&v9[36], 0, 0x5FuLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v9[57] + 3) = a3;
    *(_QWORD *)((char *)&v9[49] + 3) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v9[43] + 3) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
  }
  return KeSetEvent(a2, 10, 0);
}
