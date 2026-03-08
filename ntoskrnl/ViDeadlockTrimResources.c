/*
 * XREFs of ViDeadlockTrimResources @ 0x140AD6F04
 * Callers:
 *     ViDeadlockSearchResource @ 0x140AD6D80 (ViDeadlockSearchResource.c)
 * Callees:
 *     ViDeadlockForgetResourceHistory @ 0x140AD616C (ViDeadlockForgetResourceHistory.c)
 */

PVOID __fastcall ViDeadlockTrimResources(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // rax
  PVOID result; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx

  v3 = (unsigned int *)ViDeadlockGlobals;
  ++*((_DWORD *)ViDeadlockGlobals + 8212);
  result = (PVOID)v3[8212];
  if ( ((unsigned __int8)result & 0xF) == 0 )
  {
    v7 = *a1;
    while ( v7 != a1 )
    {
      v8 = (__int64)(v7 - 5);
      v7 = (_QWORD *)*v7;
      result = ViDeadlockForgetResourceHistory(v8, (__int64)a2, a3, a2);
    }
  }
  return result;
}
