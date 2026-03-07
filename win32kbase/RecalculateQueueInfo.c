struct tagTHREADINFO *RecalculateQueueInfo()
{
  struct tagTHREADINFO *result; // rax
  _QWORD **v1; // rdx
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  __int64 v4; // r8
  unsigned int v5; // r9d
  int v6; // r10d

  result = gptiCurrent;
  v1 = (_QWORD **)(*((_QWORD *)gptiCurrent + 57) + 168LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    *(_DWORD *)(*(i - 39) + 432LL) = 0;
    *(_DWORD *)(*(i - 39) + 436LL) = 0;
    result = (struct tagTHREADINFO *)*(i - 39);
    *((_DWORD *)result + 99) &= ~0x2000000u;
  }
  for ( j = *v1; j != v1; j = (_QWORD *)*j )
  {
    result = (struct tagTHREADINFO *)*((unsigned int *)j - 64);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      v4 = *(j - 40);
      v5 = 0x2000;
      if ( *(PVOID *)v4 != gpepCSRSS )
        v5 = *(_DWORD *)(v4 + 864);
      result = (struct tagTHREADINFO *)*(j - 39);
      v6 = *(_DWORD *)(v4 + 868);
      if ( *((_DWORD *)result + 108) >= v5 )
      {
        if ( *((_DWORD *)result + 109) != v6 )
          *((_DWORD *)result + 109) = 0;
      }
      else
      {
        *((_DWORD *)result + 108) = v5;
        result = (struct tagTHREADINFO *)*(j - 39);
        if ( *((_DWORD *)result + 109) )
          v6 = 0;
        *((_DWORD *)result + 109) = v6;
      }
      if ( (j[66] & 0x40000) != 0 )
      {
        result = (struct tagTHREADINFO *)*(j - 39);
        *((_DWORD *)result + 99) |= 0x2000000u;
      }
    }
  }
  return result;
}
