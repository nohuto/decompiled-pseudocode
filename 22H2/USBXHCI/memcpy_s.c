/*
 * XREFs of memcpy_s @ 0x1C001E8B0
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4E4 (Controller_ExecuteDSM.c)
 * Callees:
 *     Control_Cleanup @ 0x1C000D930 (Control_Cleanup.c)
 *     memmove @ 0x1C0020300 (memmove.c)
 *     memset @ 0x1C0020600 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  Control_Cleanup();
  return v8;
}
