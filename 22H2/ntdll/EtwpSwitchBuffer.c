/*
 * XREFs of EtwpSwitchBuffer @ 0x180051284
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x180051178 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1800513AC (EtwpDequeueFreeBuffer.c)
 *     RtlSleepConditionVariableCS @ 0x180065760 (RtlSleepConditionVariableCS.c)
 *     ZwSetEvent @ 0x18009D6A0 (ZwSetEvent.c)
 */

char __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  char v6; // r12
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  int v16; // [rsp+60h] [rbp+18h]

  v3 = a1 + 88;
  v4 = a3;
  v16 = *(_DWORD *)(a1 + 324) & 0x400;
  v6 = 0;
  v8 = 1;
  RtlEnterCriticalSection(a1 + 88);
  v11 = *(_QWORD *)(a1 + 8 * v4 + 576);
  v12 = (unsigned int)v4;
  while ( !v11 || a2 == v11 )
  {
    v13 = EtwpDequeueFreeBuffer(a1);
    if ( v13 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a1 + 324) & 0x400) == 0 )
    {
      do
      {
        if ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) != 1 )
          break;
        v13 = EtwpDequeueFreeBuffer(a1);
      }
      while ( !v13 );
      if ( v13 )
      {
LABEL_5:
        *(_WORD *)(v13 + 40) = *(_WORD *)(*(_QWORD *)(a1 + 552) + 4 * v12 + 2);
        *(_WORD *)(v13 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 552) + 4 * v12);
        *(_QWORD *)(a1 + 8 * v12 + 576) = v13;
        if ( a2 && a2 == v11 )
        {
          v14 = (_QWORD *)(a2 + 32);
          if ( v16 )
          {
            *(_DWORD *)(a2 + 44) = 0;
            *v14 = 0LL;
            *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
            **(_QWORD **)(a1 + 256) = v14;
            *(_QWORD *)(a1 + 256) = v14;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 228), 1u);
          }
          else
          {
            *(_DWORD *)(a2 + 44) = 3;
            v6 = 1;
            **(_QWORD **)(a1 + 280) = v14;
            *(_QWORD *)(a1 + 280) = v14;
          }
        }
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 324) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 328) )
    {
      v8 = 0;
      break;
    }
    RtlSleepConditionVariableCS(a1 + 80, v3, 0LL);
    v11 = *(_QWORD *)(a1 + 8 * v12 + 576);
  }
  RtlLeaveCriticalSection(v3, v9, v10);
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  if ( v6
    && (!*(_DWORD *)(a1 + 368)
     || (unsigned int)(*(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 228)) >= *(_DWORD *)(a1 + 368)) )
  {
    ZwSetEvent(*(_QWORD *)(a1 + 128), 0LL);
  }
  return v8;
}
