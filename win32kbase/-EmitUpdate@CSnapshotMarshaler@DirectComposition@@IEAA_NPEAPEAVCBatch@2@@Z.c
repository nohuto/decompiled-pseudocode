/*
 * XREFs of ?EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02625C0
 * Callers:
 *     ?EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0262680 (-EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

char __fastcall DirectComposition::CSnapshotMarshaler::EmitUpdate(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // r8
  __int64 v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  DirectComposition::CApplicationChannel *v7; // rbx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
    return 0;
  v4 = (char *)v9;
  *(_DWORD *)v9 = 28;
  *(_OWORD *)(v4 + 4) = 0LL;
  *(_QWORD *)(v4 + 20) = 0LL;
  *((_DWORD *)v4 + 1) = 356;
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    LODWORD(v5) = *(_DWORD *)(v5 + 32);
  *((_DWORD *)v4 + 3) = v5;
  *((_DWORD *)v4 + 4) = *((_DWORD *)this + 16);
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 17);
  v4[24] = *((_BYTE *)this + 72);
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = (*a2)[1];
    DirectComposition::CApplicationChannel::ReleaseResource(v7, v6);
    *((_QWORD *)this + 7) = 0LL;
    *((_BYTE *)v7 + 240) |= 0x10u;
  }
  return 1;
}
