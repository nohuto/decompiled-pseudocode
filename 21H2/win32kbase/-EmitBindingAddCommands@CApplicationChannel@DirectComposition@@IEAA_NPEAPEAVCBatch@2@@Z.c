/*
 * XREFs of ?EmitBindingAddCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001362C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingAddCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( *((_QWORD *)this + 55) )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
        break;
      v5 = (char *)v8;
      *(_DWORD *)v8 = 20;
      *(_OWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 21;
      *((_DWORD *)v5 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 55) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 55) + 24LL))
                                      + 32);
      *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 16LL) + 32LL);
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*((_QWORD *)this + 55) + 12LL);
      *(_DWORD *)(*((_QWORD *)this + 55) + 8LL) = *(_DWORD *)(*((_QWORD *)this + 55) + 8LL) & 0xFFFFFFFC | 1;
      v6 = (__int64 *)*((_QWORD *)this + 55);
      v7 = *v6;
      *v6 = 0LL;
      *((_QWORD *)this + 55) = v7;
    }
    while ( v7 );
  }
  return *((_QWORD *)this + 55) == 0LL;
}
