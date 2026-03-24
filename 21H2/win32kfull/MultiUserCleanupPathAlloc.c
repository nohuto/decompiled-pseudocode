/*
 * XREFs of MultiUserCleanupPathAlloc @ 0x1C0136B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void MultiUserCleanupPathAlloc()
{
  if ( PATHALLOC::hsemFreelist )
  {
    GreDeleteSemaphore(PATHALLOC::hsemFreelist);
    PATHALLOC::hsemFreelist = 0LL;
  }
  while ( PATHALLOC::freelist )
  {
    PATHALLOC::freelist = *(struct PATHALLOC **)PATHALLOC::freelist;
    Win32FreePool(PATHALLOC::freelist);
  }
}
