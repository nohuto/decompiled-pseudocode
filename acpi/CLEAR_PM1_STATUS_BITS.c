/*
 * XREFs of CLEAR_PM1_STATUS_BITS @ 0x1C0004B96
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x1C0003D30 (ACPIInterruptServiceRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLEAR_PM1_STATUS_BITS(__int16 a1)
{
  __int64 result; // rax
  __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      0LL,
      0LL,
      &v2,
      2LL,
      0LL);
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             3LL,
             0LL,
             &v2,
             2LL,
             0LL);
  return result;
}
