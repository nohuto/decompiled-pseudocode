__int64 __fastcall EditionEdgyResetDataFrames(__int64 a1)
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(_QWORD *)(grpdeskRitInput + 240LL);
    if ( result )
    {
      if ( *(_QWORD *)(result + 224) == a1 )
        *(_QWORD *)(result + 224) = 0LL;
      result = *(_QWORD *)(grpdeskRitInput + 240LL);
      if ( *(_QWORD *)(result + 232) == a1 )
        *(_QWORD *)(result + 232) = 0LL;
    }
  }
  return result;
}
