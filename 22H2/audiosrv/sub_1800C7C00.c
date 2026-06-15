/*
 * XREFs of sub_1800C7C00 @ 0x1800C7C00
 * Callers:
 *     sub_1800CB820 @ 0x1800CB820 (sub_1800CB820.c)
 * Callees:
 *     ?_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ @ 0x18002DD48 (-_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ.c)
 *     sub_18006DEE0 @ 0x18006DEE0 (sub_18006DEE0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C7C00(__int64 a1, float *a2)
{
  float v2; // xmm0_4
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *i; // rbx
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+10h]

  v5 = 1.0;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 432);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
  v10 = v6;
  for ( i = *(_QWORD **)(a1 + 472); ; i = (_QWORD *)*i )
  {
    v9 = i;
    if ( !Concurrency::details::_ContextCallback::_HasCapturedContext((Concurrency::details::_ContextCallback *)&v9) )
      break;
    sub_18006DEE0(i[1]);
    if ( v2 <= v5 )
      v5 = v2;
  }
  *a2 = v5;
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
