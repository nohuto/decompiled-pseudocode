/*
 * XREFs of ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x180248984
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180013754 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800E1914 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessClearColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES *a3)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ReleaseColorResources(this);
  return 0LL;
}
