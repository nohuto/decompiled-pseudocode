/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C0398DA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0028340 (memmove.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1C0399F38 (DpiAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  int v3; // ebx

  if ( a1 && a2 )
  {
    v3 = DpiAcquirePostDisplayOwnership(a1, a2, 0LL);
    if ( v3 >= 0 )
      memmove((void *)(a2 + 32), &xmmword_1C0140770, 0x80uLL);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return (unsigned int)v3;
}
