__int64 __fastcall PsDereferenceKernelStack(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1452), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = KeEnumerateKernelStackSegments(
               a1,
               (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
               0LL);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
