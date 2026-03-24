/*
 * XREFs of MiSessionReferenceImage @ 0x1403A7274
 * Callers:
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140328A98 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
