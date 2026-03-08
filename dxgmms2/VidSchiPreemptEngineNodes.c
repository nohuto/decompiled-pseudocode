/*
 * XREFs of VidSchiPreemptEngineNodes @ 0x1C0106530
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C010667C (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C001471C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C003A5D8 (VidSchiCompletePreemption.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C00ADB04 (VidSchiSubmitPreemptionCommand.c)
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
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 *v19; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *a4 = 0LL;
  v9 = 344LL * a2;
  v10 = *(_QWORD *)(v4 + 2808);
  v12 = *(unsigned __int16 *)(v10 + v9);
  if ( *(_WORD *)(v10 + v9) )
  {
    v13 = 0;
    do
    {
      if ( _bittest64(&a3, v5) )
      {
        v14 = VidSchiDriverNodeEngineToSchedulerNode(a1, v5, a2);
        v15 = *(__int64 **)(a1 + 632);
        if ( v14 < *(_DWORD *)(a1 + 704) )
          v15 += v14;
        v16 = *v15;
        if ( (*(_DWORD *)(v16 + 12) & 2) == 0 && *(_DWORD *)(v16 + 2892) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
          if ( _InterlockedIncrement((volatile signed __int32 *)(v16 + 2896)) == 1 )
          {
            *(_QWORD *)(v16 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v16);
            *a4 |= 1LL << v13;
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v16 + 2896));
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 732));
          }
        }
      }
      ++v5;
      ++v13;
    }
    while ( v5 < v12 );
    v17 = 0;
    do
    {
      v10 = *a4;
      if ( _bittest64(&v10, v17) )
      {
        v18 = VidSchiDriverNodeEngineToSchedulerNode(a1, v17, a2);
        v19 = *(__int64 **)(a1 + 632);
        if ( v18 < *(_DWORD *)(a1 + 704) )
          v19 += v18;
        VidSchiCompletePreemption(*v19);
        LOBYTE(v10) = VidSchIsTDRPending(a1);
        if ( (_BYTE)v10 )
          break;
      }
      ++v17;
    }
    while ( v17 < v12 );
  }
  return v10;
}
