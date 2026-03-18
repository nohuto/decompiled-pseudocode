/*
 * XREFs of NtGdiAbortDoc @ 0x1C0277E40
 * Callers:
 *     <none>
 * Callees:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0276684 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 */

__int64 __fastcall NtGdiAbortDoc(HDC a1)
{
  return bEndDocInternal(a1, 1u, 1);
}
