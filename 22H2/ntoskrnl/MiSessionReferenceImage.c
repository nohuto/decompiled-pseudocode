/*
 * XREFs of MiSessionReferenceImage @ 0x14020A998
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB88 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(__int64 a1)
{
  __int64 result; // rax

  result = MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
