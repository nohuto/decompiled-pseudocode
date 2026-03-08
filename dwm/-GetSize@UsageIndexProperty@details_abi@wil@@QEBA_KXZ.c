/*
 * XREFs of ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140001EB0
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A64 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x140001E2C (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::UsageIndexProperty::GetSize(wil::details_abi::UsageIndexProperty *this)
{
  __int64 result; // rax

  if ( *(_WORD *)this )
    result = *(unsigned __int16 *)this;
  else
    result = *((unsigned __int16 *)this + 4) + 2LL;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    result += 2LL;
  }
  else if ( *((_BYTE *)this + 2) == 2 )
  {
    result += 4LL;
  }
  return result;
}
