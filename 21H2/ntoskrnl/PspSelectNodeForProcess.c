/*
 * XREFs of PspSelectNodeForProcess @ 0x140611518
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 PspSelectNodeForProcess()
{
  __int64 v0; // r8
  unsigned int v1; // ecx
  unsigned __int32 v2; // edx
  __int64 v3; // r9

  v0 = 0LL;
  v1 = 0;
  v2 = _InterlockedIncrement(&PspProcessNodeAssignment) % (unsigned int)(unsigned __int16)KeNumberNodes;
  if ( !KeNumberNodes )
    goto LABEL_9;
  while ( 1 )
  {
    v3 = KeNodeBlock[(unsigned __int16)v2];
    if ( (*(_BYTE *)(v3 + 181) & 0x10) == 0 )
    {
      if ( *(_QWORD *)(v3 + 136) )
        break;
    }
    ++v1;
    LOWORD(v2) = v2 + 1;
    if ( (unsigned __int16)v2 >= (unsigned __int16)KeNumberNodes )
      LOWORD(v2) = 0;
    if ( v1 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_9;
  }
  v0 = KeNodeBlock[(unsigned __int16)v2];
  if ( !v3 )
  {
LABEL_9:
    v1 = 0;
    if ( !KeNumberNodes )
      return v0;
    while ( !*(_QWORD *)(KeNodeBlock[(unsigned __int16)v2] + 136) )
    {
      ++v1;
      LOWORD(v2) = v2 + 1;
      if ( (unsigned __int16)v2 >= (unsigned __int16)KeNumberNodes )
        LOWORD(v2) = 0;
      if ( v1 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_16;
    }
    v0 = KeNodeBlock[(unsigned __int16)v2];
  }
LABEL_16:
  if ( v1 )
    _InterlockedExchangeAdd(&PspProcessNodeAssignment, v1);
  return v0;
}
