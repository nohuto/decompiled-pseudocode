/*
 * XREFs of __scrt_unhandled_exception_filter @ 0x140005CE0
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate_0 @ 0x14000636C (_o_terminate_0.c)
 *     __current_exception_0 @ 0x140006390 (__current_exception_0.c)
 *     __current_exception_context_0 @ 0x14000639C (__current_exception_context_0.c)
 */

__int64 __fastcall _scrt_unhandled_exception_filter(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( (unsigned int)(v3 - 429065504) <= 2 || v3 == 26820608 )
    {
      *(_QWORD *)_current_exception_0() = v1;
      v5 = a1[1];
      *(_QWORD *)_current_exception_context_0() = v5;
      o_terminate_0();
      JUMPOUT(0x140005D3ALL);
    }
  }
  return 0LL;
}
