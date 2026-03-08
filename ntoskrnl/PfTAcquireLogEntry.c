/*
 * XREFs of PfTAcquireLogEntry @ 0x1407E67C4
 * Callers:
 *     PfpCopyEvent @ 0x1407E5C10 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x1407E5E50 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1407E6840 (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfTAcquireLogEntry(__int64 a1, int *a2, int a3)
{
  __int64 v3; // r10
  int v7; // eax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) > *(_DWORD *)(v3 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(a1) != -1073741823 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
        goto LABEL_2;
    }
    v3 = 0LL;
    v7 = 0xFFFF;
  }
  else
  {
LABEL_2:
    v7 = *(_DWORD *)(v3 + 16);
    *(_DWORD *)(v3 + 16) = v7 + a3;
  }
  *a2 = v7;
  return v3;
}
