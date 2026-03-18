/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C00B518C
 * Callers:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00138E8 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2,
        char a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 49;
  if ( a3 )
    v6 = *((_QWORD *)this + 212);
  else
    v6 = *((_QWORD *)this + 211);
  *(_QWORD *)(v5 + 12) = v6;
  v5[20] = a3;
  *((_DWORD *)v5 + 6) = *((_DWORD *)this + 430);
  return 1;
}
