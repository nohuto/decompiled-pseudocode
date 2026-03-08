/*
 * XREFs of compModeCap @ 0x1C0192134
 * Callers:
 *     InsertModecapList @ 0x1C0190884 (InsertModecapList.c)
 *     PruneMode @ 0x1C0190C2C (PruneMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall compModeCap(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return (unsigned int)(a1[1] - a2[1]);
  else
    return (unsigned int)(*a1 - *a2);
}
