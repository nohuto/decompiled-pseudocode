_BOOL8 __fastcall FloatingPointExceptionFilter(int a1)
{
  return a1 == -1073741683
      || a1 == -1073741682
      || a1 == -1073741681
      || a1 == -1073741680
      || a1 == -1073741679
      || a1 == -1073741678
      || a1 == -1073741677;
}
