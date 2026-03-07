_OWORD *__fastcall CmpInitializeThreadInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _OWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *(_OWORD **)&CurrentThread[1].ResourceIndex;
  if ( result )
  {
    *(_OWORD *)a1 = *result;
    *(_QWORD *)a1 = result;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)&CurrentThread[1].ResourceIndex = a1;
  return result;
}
