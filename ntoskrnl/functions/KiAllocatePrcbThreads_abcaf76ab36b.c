__int64 __fastcall KiAllocatePrcbThreads(__int64 a1)
{
  __int64 result; // rax

  result = KiAllocateDpcDelegateThread(a1 + 13112, *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
