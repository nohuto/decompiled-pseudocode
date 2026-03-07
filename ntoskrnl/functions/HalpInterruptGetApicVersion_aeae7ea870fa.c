__int64 __fastcall HalpInterruptGetApicVersion(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h]

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  if ( LinesForGsiRange )
  {
    LOWORD(v3) = 17;
    HIBYTE(v3) = *((_BYTE *)LinesForGsiRange + 24) - *((_BYTE *)LinesForGsiRange + 20);
    BYTE2(v3) = HIBYTE(v3) - 1;
  }
  else
  {
    return (unsigned int)-268435456;
  }
  return v3;
}
