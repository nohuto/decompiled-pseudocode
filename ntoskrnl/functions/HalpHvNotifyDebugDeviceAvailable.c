__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C62140 )
    return ((__int64 (*)(void))qword_140C62140)();
  return result;
}
