/*
 * XREFs of ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x1800BCE64
 * Callers:
 *     ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180011140 (--1CD2DSharedBuffer@@MEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097618 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180098158 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800BCDCC (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CSharedSection>(CResource **a1)
{
  CResource *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CResource::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
