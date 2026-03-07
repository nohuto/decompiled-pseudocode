char __fastcall IsDXGIColorSpaceHDR(int a1)
{
  char v1; // al
  char v2; // cl

  if ( a1 == 1 )
    return 1;
  v1 = IsDXGIColorSpaceRec2020(a1);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
