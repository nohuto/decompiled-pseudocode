__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16920);
  if ( byte_140C69564 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
