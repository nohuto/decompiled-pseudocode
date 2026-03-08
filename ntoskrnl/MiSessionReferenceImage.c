/*
 * XREFs of MiSessionReferenceImage @ 0x14036C5C4
 * Callers:
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
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
