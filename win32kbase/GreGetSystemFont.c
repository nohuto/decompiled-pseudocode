__int64 __fastcall GreGetSystemFont(int a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( a1 )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3168) + 104LL);
  result = *(_QWORD *)(*(_QWORD *)(v2 + 3176) + 104LL);
  if ( !result )
    return *(_QWORD *)(*(_QWORD *)(v2 + 3168) + 104LL);
  return result;
}
