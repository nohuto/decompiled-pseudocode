/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140002934
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001808 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x140004E4C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return wil::details_abi::heap_buffer::reserve(this, a2);
}
