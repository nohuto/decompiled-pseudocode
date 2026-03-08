/*
 * XREFs of VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0011290
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeFlipEntryStatusAfterFlip(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 20);
  v4 = 0LL;
  *a3 = 11;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8 * v4);
      if ( (*(_DWORD *)(v6 + 16) & 4) != 0 )
      {
        result = *(unsigned int *)(v6 + 20);
        if ( (result & 1) == 0 )
          break;
      }
      result = *(unsigned int *)(v6 + 20);
      if ( (result & 4) != 0 )
        *a3 = 15;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        return result;
    }
    *a3 = 5;
  }
  return result;
}
