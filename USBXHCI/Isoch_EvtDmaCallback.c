/*
 * XREFs of Isoch_EvtDmaCallback @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_MapTransfers @ 0x1C0001C9C (Isoch_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C0008120 (TR_AttemptStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[9] = a3;
  result = Isoch_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 340), 1u) )
  {
    if ( *(_DWORD *)(v4 + 352) )
    {
      result = TR_AttemptStateChange(v4, 3LL, 4LL);
      if ( (_DWORD)result == 3 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v4 + 320),
                 -100000000LL);
    }
    else
    {
      result = TR_AttemptStateChange(v4, 3LL, 3LL);
      if ( (_DWORD)result == 3 )
        return Isoch_MapTransfers(v4);
    }
  }
  return result;
}
