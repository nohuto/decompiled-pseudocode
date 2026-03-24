/*
 * XREFs of ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x1C004893C
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveCursorFromCaptionIconCache(struct tagCURSOR *a1)
{
  unsigned int v1; // ebx
  __int64 i; // rdi

  v1 = 0;
  for ( i = 0LL;
        *(struct tagCURSOR **)(i + gcachedCaptions[0]) != a1 || HMAssignmentUnlock(&gcachedCaptions[2 * v1]);
        i += 16LL )
  {
    if ( ++v1 >= 5 )
      return 0LL;
  }
  return 1LL;
}
