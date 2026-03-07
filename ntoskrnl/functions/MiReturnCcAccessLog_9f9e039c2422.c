__int64 __fastcall MiReturnCcAccessLog(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = a1[3];
    a1[4] = result;
  }
  if ( qword_140C67C40 || (result = _InterlockedCompareExchange64(&qword_140C67C40, (signed __int64)a1, 0LL)) != 0 )
  {
    if ( a1 )
    {
      if ( (_QWORD *)a1[4] == a1 + 9 )
        return MmFreeAccessPfnBuffer(a1);
      else
        return MiQueuePageAccessLog(a1);
    }
  }
  return result;
}
