/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001808
 * Callers:
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1400011D0 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x140001464 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x14000B890 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A64 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1400021E4 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x140002398 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140002934 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details **this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rdi
  void *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal((wil::details_abi::RawUsageIndex *)this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( this[3] )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(this + 3), v11);
  }
  else
  {
    *(_OWORD *)v15 = 0LL;
    v16 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v15, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)this,
        v15[0],
        0LL,
        v16 - (unsigned __int64)v15[0]);
      v13 = this[6];
      v14 = 0LL;
      this[6] = (wil::details *)*((_QWORD *)&v16 + 1);
      if ( v13 )
        wil::details::FreeProcessHeap(v13, v12);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v14 = (wil::details *)*((_QWORD *)&v16 + 1);
    }
    if ( v14 )
      wil::details::FreeProcessHeap(v14, v12);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(
           (wil::details_abi::RawUsageIndex *)this,
           a2,
           a3,
           a4,
           a5,
           a6);
}
