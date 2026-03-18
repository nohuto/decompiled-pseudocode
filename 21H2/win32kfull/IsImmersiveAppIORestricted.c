/*
 * XREFs of IsImmersiveAppIORestricted @ 0x1C009CB44
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 820);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}
