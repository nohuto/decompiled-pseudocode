/*
 * XREFs of KeMarkDynamicTracingHiberPhase @ 0x14057C6AC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 *     KiTpCompletionContextSize @ 0x140973714 (KiTpCompletionContextSize.c)
 */

void KeMarkDynamicTracingHiberPhase()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  unsigned int v2; // ebp
  _QWORD *i; // rbx
  void *v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx

  if ( KiTpHashTable )
  {
    PoSetHiberRange(0LL, 0x10000u, KiTpHashTable, 0x20000uLL, 0x70727446u);
    v0 = 0LL;
    v1 = 0x4000LL;
    v2 = KiTpCompletionContextSize() + 52;
    do
    {
      for ( i = *(_QWORD **)((char *)KiTpHashTable + v0); i; i = (_QWORD *)*i )
        PoSetHiberRange(0LL, 0x10000u, i, v2, 0x70727446u);
      v0 += 8LL;
      --v1;
    }
    while ( v1 );
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v7 = KiProcessorBlock[v6];
        v8 = *(_QWORD *)(v7 + 152);
        if ( v8 )
        {
          if ( !v4 || v8 < (unsigned __int64)v4 )
            v4 = *(void **)(v7 + 152);
          if ( !v5 || v8 > v5 )
            v5 = *(_QWORD *)(v7 + 152);
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned int)KeNumberProcessors_0 );
      if ( v4 )
      {
        if ( v5 )
          PoSetHiberRange(0LL, 0x10000u, v4, v5 - (_QWORD)v4 + 8200, 0x70727446u);
      }
    }
  }
}
