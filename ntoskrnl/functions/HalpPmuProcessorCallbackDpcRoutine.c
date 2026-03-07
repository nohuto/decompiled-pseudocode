__int64 __fastcall HalpPmuProcessorCallbackDpcRoutine(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))a2)(*(_QWORD *)(a2 + 8));
  if ( (int)result < 0 )
    *(_DWORD *)(a2 + 16) = result;
  _InterlockedIncrement(a3);
  return result;
}
