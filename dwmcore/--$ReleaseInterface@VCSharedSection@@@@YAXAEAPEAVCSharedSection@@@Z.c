/*
 * XREFs of ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x1800BC9C4
 * Callers:
 *     ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180011050 (--1CD2DSharedBuffer@@MEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800BC92C (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
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
