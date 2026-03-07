__int64 __fastcall PopPepComponentGetLatencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24 * result) <= a2 )
        break;
      v3 = (_DWORD)result == 1;
      result = (unsigned int)(result - 1);
    }
    while ( !v3 );
  }
  return result;
}
