/*
 * XREFs of EtwpFlushActiveBuffers @ 0x18004C7E4
 * Callers:
 *     EtwpLogger @ 0x18004C5E0 (EtwpLogger.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     EtwpSendSessionNotification @ 0x1800481EC (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x18004C9D0 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x18004CA44 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18004CC38 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rdi
  unsigned int v7; // esi
  unsigned __int16 v8; // r13
  _QWORD **v9; // rax
  _QWORD *v10; // rdi
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // ax
  _QWORD *v13; // r15
  _QWORD *v14; // r13
  __int64 *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int32 v19; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = *(unsigned int *)(a1 + 204);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v16 = (__int64 *)(a1 + 576);
    v17 = v4;
    do
    {
      v18 = *v16;
      if ( *v16 && *(_DWORD *)(v18 + 8) != 72 )
      {
        *v16 = 0LL;
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), v2);
        if ( v19 <= v2 )
          *(_DWORD *)(v18 + 4) = v19;
        *(_DWORD *)(v18 + 44) = 3;
        v20 = v18 + 32;
        **(_QWORD **)(a1 + 280) = v20;
        *(_QWORD *)(a1 + 280) = v20;
      }
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  v9 = *(_QWORD ***)(a1 + 272);
  if ( v9 == *(_QWORD ***)(a1 + 280) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 272);
  }
  RtlLeaveCriticalSection(v3);
  if ( v10 )
  {
    v11 = a2 != 0;
    do
    {
      v12 = v11;
      v13 = v10;
      if ( *v10 )
        v12 = v8;
      v14 = v10;
      v10 = (_QWORD *)*v10;
      v21 = v12;
      EtwpWaitForBufferReferenceCount(v13 - 4);
      v7 = EtwpFlushBuffer(a1, v13 - 4, v21);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v14 + 3) = 0;
      *v13 = 0LL;
      *(v14 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v13;
      *(_QWORD *)(a1 + 256) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
      v8 = v21;
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v10 );
  }
  return v7;
}
