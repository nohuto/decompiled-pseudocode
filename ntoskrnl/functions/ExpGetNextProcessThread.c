_QWORD *__fastcall ExpGetNextProcessThread(char *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  if ( a1 != PsIdleProcess )
    return PsGetNextProcessThread((__int64)a1, a2);
  v4 = a1 + 48;
  v2 = 0LL;
  if ( a2 )
    v5 = (_QWORD *)a2[95];
  else
    v5 = (_QWORD *)*v4;
  if ( v5 != v4 )
  {
    v2 = v5 - 95;
    KeSynchronizeWithDynamicProcessors();
  }
  return v2;
}
