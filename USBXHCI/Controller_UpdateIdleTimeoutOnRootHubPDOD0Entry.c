/*
 * XREFs of Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry @ 0x1C0013ADC
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0016C90 (RootHub_UcxEvtInterruptTransfer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry(__m128i *a1)
{
  unsigned __int64 result; // rax

  result = (_mm_srli_si128(a1[21], 8).m128i_u64[0] >> 21) & 1;
  if ( !a1[29].m128i_i32[0] )
  {
    result = result != 0 ? 1000 : 1;
    if ( a1[36].m128i_i32[0] != (_DWORD)result )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(
               WdfDriverGlobals,
               a1[35].m128i_i64[1]);
  }
  return result;
}
