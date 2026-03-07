__int64 __fastcall DrvSampleDisplayState(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *a1 = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573008LL);
  a1[1] = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573032LL);
  result = 0LL;
  a1[2] = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573024LL);
  return result;
}
