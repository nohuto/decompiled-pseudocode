void HalpTimerStopAllTimers()
{
  ULONG_PTR i; // rbx
  void (__fastcall *v1)(_QWORD); // rax

  for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 184) & 2) != 0 )
    {
      v1 = *(void (__fastcall **)(_QWORD))(i + 136);
      if ( v1 )
        v1(*(_QWORD *)(i + 72));
    }
  }
}
