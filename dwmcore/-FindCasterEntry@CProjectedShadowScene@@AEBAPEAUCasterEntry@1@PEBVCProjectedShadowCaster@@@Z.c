/*
 * XREFs of ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x180004D08
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180004A6C (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180004CBC (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CProjectedShadowScene::FindCasterEntry(
        CProjectedShadowScene *this,
        const struct CProjectedShadowCaster *a2)
{
  __int64 ***v2; // r8
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 8);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      return i + 2;
  }
  return 0LL;
}
