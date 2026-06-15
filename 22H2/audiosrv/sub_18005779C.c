/*
 * XREFs of sub_18005779C @ 0x18005779C
 * Callers:
 *     sub_18005757C @ 0x18005757C (sub_18005757C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005779C(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[2] = a2;
    v5[1] = qword_18019F750;
    *v5 = 0LL;
    if ( qword_18019F750 )
      *(_QWORD *)qword_18019F750 = v5;
    else
      qword_18019F748 = (__int64)v5;
    ++dword_18019F758;
    qword_18019F750 = (__int64)v5;
  }
  return v5;
}
