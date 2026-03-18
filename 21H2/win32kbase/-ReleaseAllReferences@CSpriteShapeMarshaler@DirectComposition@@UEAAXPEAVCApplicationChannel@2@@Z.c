/*
 * XREFs of ?ReleaseAllReferences@CSpriteShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
  v4 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[11];
  this[10] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  v6 = this[8];
  this[11] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  this[8] = 0LL;
}
