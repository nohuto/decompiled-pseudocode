/*
 * XREFs of PopFxProcessWorkPool @ 0x140284DE8
 * Callers:
 *     PopFxPluginWork @ 0x140695740 (PopFxPluginWork.c)
 *     PopFxEmergencyWorker @ 0x1407D5240 (PopFxEmergencyWorker.c)
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x14021D9B0 (ExInterlockedRemoveHeadList.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140284B1C (PopFxDispatchPluginWorkOnce.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  int v5; // ebp
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v8; // ecx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  PLIST_ENTRY v11; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = a2 != -1;
  if ( a2 == -1 )
    *(_QWORD *)(a1 + 264) = CurrentThread;
  else
    *(_QWORD *)(a1 + 8LL * a2 + 272) = CurrentThread;
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject((PVOID)(a1 + 32 * (v5 + 1LL)), Executive, 0, 0, &Timeout) != 258 )
    {
      v8 = v5;
      goto LABEL_10;
    }
    if ( (_DWORD)v2 == -1 )
    {
      p_Timeout = 0LL;
    }
    else
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v8 = result;
    if ( result == 258 )
      break;
LABEL_10:
    if ( v8 )
    {
      if ( v8 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1);
    }
    else
    {
      v11 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 16), (PKSPIN_LOCK)(a1 + 8));
      *v11 = 0LL;
      ((void (__fastcall *)(struct _LIST_ENTRY *))v11[1].Flink)(v11[1].Blink);
    }
    if ( (_DWORD)v2 == -1 )
    {
      _m_prefetchw((const void *)(a1 + 96));
      v9 = *(_DWORD *)(a1 + 96);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), v9, v9);
      }
      while ( v10 != v9 );
      if ( v9 )
        v5 = 0;
      else
        v5 = (v5 + 1) % 2;
    }
  }
  *(_QWORD *)(a1 + 8 * v2 + 272) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 96), ~(1 << v2));
  return result;
}
