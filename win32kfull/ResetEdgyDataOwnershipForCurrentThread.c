__int64 ResetEdgyDataOwnershipForCurrentThread()
{
  __int64 result; // rax
  __int64 v1; // rdx

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 240LL);
    if ( v1 )
    {
      result = gptiCurrent;
      if ( *(_QWORD *)(v1 + 288) == gptiCurrent )
      {
        *(_QWORD *)(v1 + 288) = 0LL;
        result = *(_QWORD *)(grpdeskRitInput + 240LL);
        *(_DWORD *)(result + 16) = 0;
      }
    }
  }
  return result;
}
