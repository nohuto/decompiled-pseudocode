/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0046D98
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rax
  char v5; // al

  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 0x10000LL;
  v2 = *(_BYTE *)(a1 + 2212);
  v3 = a2;
  if ( v2 ? *(_BYTE *)(a2 + a1 + 1808) : *(_BYTE *)(a1 + 1808) )
    return 0x10000LL;
  if ( v2 )
    v5 = *(_BYTE *)(v3 + a1 + 2213);
  else
    v5 = *(_BYTE *)(a1 + 2213);
  return v5 != 0 ? 3 : 0;
}
