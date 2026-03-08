/*
 * XREFs of ?ReleaseAllReferences@CAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C1660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rax

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
  v4 = this[9];
  this[16] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[19];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v5 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)));
  this[19] = 0LL;
}
