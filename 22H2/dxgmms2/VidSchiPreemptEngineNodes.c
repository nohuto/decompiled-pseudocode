/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C00CEA6C
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00CEBBC (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000C140 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011480 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C002F28C (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0086D2C (VidSchiSubmitPreemptionCommand.c)
 */

char __fastcall VidSchiPreemptEngineNodes(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ebx
  __int64 v9; // r10
  __int64 v10; // rax
  unsigned int v12; // ebp
  char v13; // si
  unsigned int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  unsigned int i; // ebx
  unsigned int v18; // eax
  __int64 *v19; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *a4 = 0LL;
  v9 = 360LL * a2;
  v10 = *(_QWORD *)(v4 + 2584);
  v12 = *(unsigned __int16 *)(v10 + v9);
  if ( *(_WORD *)(v10 + v9) )
  {
    v13 = 0;
    do
    {
      LOBYTE(v10) = v5;
      if ( _bittest64(&a3, v5) )
      {
        v14 = VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2);
        v15 = *(__int64 **)(a1 + 624);
        if ( v14 < *(_DWORD *)(a1 + 696) )
          v15 += v14;
        v16 = *v15;
        LODWORD(v10) = *(_DWORD *)(v16 + 12);
        if ( (v10 & 2) == 0 && *(_DWORD *)(v16 + 2884) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 724));
          LODWORD(v10) = _InterlockedIncrement((volatile signed __int32 *)(v16 + 2888));
          if ( (_DWORD)v10 == 1 )
          {
            *(_QWORD *)(v16 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v16);
            v10 = *a4 | (1LL << v13);
            *a4 = v10;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v16 + 2888));
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 724));
          }
        }
      }
      ++v5;
      ++v13;
    }
    while ( v5 < v12 );
  }
  for ( i = 0; i < v12; ++i )
  {
    v10 = *a4;
    if ( _bittest64(&v10, i) )
    {
      v18 = VidSchiDriverNodeEngineToSchedulerNode(a1, i, a2);
      v19 = *(__int64 **)(a1 + 624);
      if ( v18 < *(_DWORD *)(a1 + 696) )
        v19 += v18;
      VidSchiCompletePreemption(*v19);
      LOBYTE(v10) = VidSchIsTDRPending(a1);
      if ( (_BYTE)v10 )
        break;
    }
  }
  return v10;
}
