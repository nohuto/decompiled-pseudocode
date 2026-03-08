/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x18010F020
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001009C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180011308 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall operator delete[](void *a1)
{
  MIDL_user_free(a1);
}
