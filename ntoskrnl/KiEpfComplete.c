/*
 * XREFs of KiEpfComplete @ 0x140576A00
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x140576B0C (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 */

char __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char result; // al

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( v4[2] == a1 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == (_QWORD *)v2 )
      {
        v4 = *(_QWORD **)v2;
        if ( v3[1] == v2 )
        {
          v6 = *v3;
          if ( *(_QWORD **)(*v3 + 8LL) == v3 )
          {
            *(_QWORD *)v2 = v6;
            *(_QWORD *)(v6 + 8) = v2;
            goto LABEL_12;
          }
        }
LABEL_10:
        __fastfail(3u);
      }
    }
    if ( (_QWORD *)v5[1] != v4 )
      goto LABEL_10;
    v7 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v7 != v4 )
      goto LABEL_10;
    *v7 = v5;
    v5[1] = v7;
  }
LABEL_12:
  result = KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( v4 )
  {
    _InterlockedIncrement(&dword_140C413E4);
    return KeSignalGate((__int64)(v4 + 3), 0);
  }
  return result;
}
