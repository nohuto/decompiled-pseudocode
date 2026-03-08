/*
 * XREFs of ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x1802A269C
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802A0B2C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802A59F0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

void __fastcall CHolographicManager::ReleaseInteropTextures(CHolographicManager *this)
{
  CHolographicInteropTexture **i; // rbx

  for ( i = (CHolographicInteropTexture **)*((_QWORD *)this + 18); i != *((CHolographicInteropTexture ***)this + 19); ++i )
    CHolographicInteropTexture::ReleaseResources(*i);
}
