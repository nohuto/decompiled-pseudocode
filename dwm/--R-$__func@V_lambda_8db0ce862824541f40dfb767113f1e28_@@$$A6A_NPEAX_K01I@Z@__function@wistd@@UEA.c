/*
 * XREFs of ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1400011D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001808 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

char __fastcall wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  bool v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = wil::details_abi::RawUsageIndex::RecordUsage(
               *(wil::details_abi::RawUsageIndex **)(a1 + 24),
               *a2,
               *a3,
               *a4,
               *a5,
               *a6),
        v8 = 0,
        v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
