__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  result = a1;
  if ( qword_140C67C40 )
  {
    v3 = (_QWORD *)_InterlockedExchange64(&qword_140C67C40, 0LL);
    if ( v3 )
    {
      if ( result - v3[2] > (unsigned __int64)PfKernelGlobals || a2 )
        return MiQueuePageAccessLog(v3);
      else
        return MiReturnCcAccessLog();
    }
  }
  return result;
}
