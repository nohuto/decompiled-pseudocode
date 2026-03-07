__int64 __fastcall PpmPerfUpdateHwDebugData(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 33968);
  if ( result )
  {
    v2 = *(_QWORD *)(a1 + 33976);
    if ( v2 )
    {
      result = *(_QWORD *)(result + 408);
      if ( result )
        return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))result)(*(_QWORD *)(v2 + 8), PpmCheckTime, 0LL);
    }
  }
  return result;
}
