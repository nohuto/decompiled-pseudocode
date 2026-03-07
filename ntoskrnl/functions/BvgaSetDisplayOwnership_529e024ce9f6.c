__int64 __fastcall BvgaSetDisplayOwnership(char a1)
{
  char v1; // cl
  __int64 result; // rax

  v1 = -a1;
  result = v1 == 0 ? 2 : 0;
  BvgaDisplayState = v1 == 0 ? 2 : 0;
  return result;
}
