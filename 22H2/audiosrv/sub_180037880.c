/*
 * XREFs of sub_180037880 @ 0x180037880
 * Callers:
 *     <none>
 * Callees:
 *     ?_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ @ 0x18002DD48 (-_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ.c)
 *     sub_18006DEC8 @ 0x18006DEC8 (sub_18006DEC8.c)
 *     sub_18006DEE0 @ 0x18006DEE0 (sub_18006DEE0.c)
 */

void __fastcall sub_180037880(__int64 a1, float *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  _QWORD *i; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 432);
  *a2 = 1.0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
  for ( i = *(_QWORD **)(a1 + 472); ; i = (_QWORD *)*i )
  {
    v9 = i;
    if ( !Concurrency::details::_ContextCallback::_HasCapturedContext((Concurrency::details::_ContextCallback *)&v9) )
      break;
    *a2 = fminf(*a2, sub_18006DEE0(i[1]));
    if ( a3 )
    {
      v8 = *a3;
      if ( v8 <= sub_18006DEC8(i[1]) )
        v8 = sub_18006DEC8(i[1]);
      *a3 = v8;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
