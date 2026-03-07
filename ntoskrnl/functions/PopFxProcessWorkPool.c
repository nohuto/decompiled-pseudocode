NTSTATUS __fastcall PopFxProcessWorkPool(char *a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  unsigned int v5; // r14d
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v8; // ecx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  PLIST_ENTRY v11; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  v4 = a2 != 0;
  v5 = a1 == (char *)&PopFxNoFaultSystemWorkPool;
  if ( a2 )
    *(_QWORD *)&a1[8 * a2 + 264] = KeGetCurrentThread();
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(&a1[32 * v4 + 32], Executive, 0, 0, &Timeout) != 258 )
    {
      v8 = v4;
      goto LABEL_10;
    }
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    else
    {
      p_Timeout = 0LL;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v8 = result;
    if ( result == 258 )
      break;
LABEL_10:
    if ( v8 )
    {
      if ( v8 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1, v5);
    }
    else
    {
      v11 = ExInterlockedRemoveHeadList((PLIST_ENTRY)a1 + 1, (PKSPIN_LOCK)a1 + 1);
      *v11 = 0LL;
      ((void (__fastcall *)(struct _LIST_ENTRY *))v11[1].Flink)(v11[1].Blink);
    }
    if ( !(_DWORD)v2 )
    {
      _m_prefetchw(a1 + 96);
      v9 = *((_DWORD *)a1 + 24);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 24, v9, v9);
      }
      while ( v10 != v9 );
      if ( v9 )
        v4 = 0;
      else
        v4 = (v4 + 1) % 2;
    }
  }
  *(_QWORD *)&a1[8 * v2 + 264] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)a1 + 24, ~(1 << (v2 - 1)));
  return result;
}
