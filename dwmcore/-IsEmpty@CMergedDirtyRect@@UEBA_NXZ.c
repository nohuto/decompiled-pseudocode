/*
 * XREFs of ?IsEmpty@CMergedDirtyRect@@UEBA_NXZ @ 0x1800E9B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 */

bool __fastcall CMergedDirtyRect::IsEmpty(CMergedDirtyRect *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  return *(_QWORD *)(v2 + 88) != CurrentFrameId || *(_DWORD *)(v2 + 80) == 0;
}
