__int64 EditionEdgyResetCurrentFrame()
{
  __int64 result; // rax

  result = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( result )
    *(_QWORD *)(result + 232) = 0LL;
  return result;
}
