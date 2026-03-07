__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  dword_1C006F938 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v4 + 120) )
      {
        return DereferenceObjectEx(v4, a2);
      }
      else
      {
        DereferenceObjectEx(v4, a2);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
