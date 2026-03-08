/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800F9578
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800F94B4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180196480 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return wil::details_abi::heap_buffer::reserve(this, a2);
}
