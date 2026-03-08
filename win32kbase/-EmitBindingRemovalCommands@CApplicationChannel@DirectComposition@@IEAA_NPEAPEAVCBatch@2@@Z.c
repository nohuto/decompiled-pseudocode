/*
 * XREFs of ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024ACAC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BB744 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( *((_QWORD *)this + 57) )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
        break;
      v4 = (char *)v8;
      *(_DWORD *)v8 = 20;
      *(_OWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 1) = 20;
      *((_DWORD *)v4 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 57) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 57) + 24LL))
                                      + 32);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 32LL);
      *((_DWORD *)v4 + 4) = *(_DWORD *)(*((_QWORD *)this + 57) + 12LL);
      v5 = (__int64 *)*((_QWORD *)this + 57);
      v6 = *v5;
      *v5 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(*((DirectComposition::CAnimationBinding **)this + 57), this);
      *((_QWORD *)this + 57) = v6;
    }
    while ( v6 );
  }
  return *((_QWORD *)this + 57) == 0LL;
}
