char __fastcall MiWakeLargePageWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  char result; // al

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1u);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
