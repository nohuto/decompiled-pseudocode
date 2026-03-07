__int64 (__fastcall **EmonSaveProfilingContext())()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD **v1; // rbx
  unsigned int v2; // edi
  unsigned int i; // r11d

  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v1 = (_QWORD **)HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v1 = (_QWORD **)(HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number);
  }
  v2 = EmonNumberCounters;
  for ( i = 0; i < v2; ++v1 )
  {
    if ( *((_DWORD *)*v1 + 6) == 2 )
      result = (__int64 (__fastcall **)())EmonReadCounter(i, *v1, (_DWORD *)(*v1)[2]);
    ++i;
  }
  return result;
}
