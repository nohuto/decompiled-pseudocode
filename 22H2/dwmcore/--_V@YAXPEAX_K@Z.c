/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x18010FB60
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001018C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x1800113F8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800974D4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802AB6BC (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall operator delete[](void *a1)
{
  MIDL_user_free(a1);
}
