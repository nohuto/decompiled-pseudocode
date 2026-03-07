__int64 __fastcall ExpSvmWorkerThread(unsigned int a1)
{
  char i; // bl
  __int64 result; // rax

  for ( i = 0; ; i = 1 )
  {
    do
      result = (*(__int64 (__fastcall **)(_QWORD))(HalIommuDispatch + 88))(a1);
    while ( (_BYTE)result );
    if ( i )
      break;
    _InterlockedExchange((volatile __int32 *)(104LL * a1 + ExpSvmWorkQueues + 96), 0);
  }
  return result;
}
