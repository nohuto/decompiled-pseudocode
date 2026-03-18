/*
 * XREFs of ?ProcessFirstPendingRemove@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAX@Z @ 0x1C002BF80
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B0C0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00AABA0 (-Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = *(_QWORD *)(v4 + 208);
  *(_QWORD *)(v4 + 208) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    a3[1] = 0LL;
    *((_DWORD *)a3 + 1) = 393;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 32);
  }
  *(_DWORD *)(v4 + 16) &= ~8u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
