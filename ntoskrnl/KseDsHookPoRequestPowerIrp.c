/*
 * XREFs of KseDsHookPoRequestPowerIrp @ 0x14057F020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KsepDsEventRequestPowerIrp @ 0x14057FD14 (KsepDsEventRequestPowerIrp.c)
 */

__int64 __fastcall KseDsHookPoRequestPowerIrp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  char v7; // bl
  int v8; // edi
  unsigned int v9; // ebp

  v7 = a3;
  v8 = (unsigned __int8)a2;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140C06F68)(a1, a2, a3);
  KsepDsEventRequestPowerIrp(*(_QWORD *)(a1 + 8), a1, 0, v8, v7, v9);
  if ( a6 )
    *a6 = 0LL;
  return v9;
}
