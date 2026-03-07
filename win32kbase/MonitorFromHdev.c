__int64 __fastcall MonitorFromHdev(__int64 a1)
{
  __int64 result; // rax

  for ( result = *((_QWORD *)gpDispInfo + 13); result && *(_QWORD *)(result + 80) != a1; result = *(_QWORD *)(result + 56) )
    ;
  return result;
}
