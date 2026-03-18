/*
 * XREFs of ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800E18D0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180098158 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800E1514 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E1624 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall ReplaceInterface<CSharedSection,CSharedSection>(CResource **a1, __int64 a2)
{
  CResource *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CResource::InternalRelease(v4);
  *a1 = (CResource *)a2;
  if ( a2 )
    return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  return result;
}
