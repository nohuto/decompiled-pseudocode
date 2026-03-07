char __fastcall IsDXGIColorSpaceStudio(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool v7; // zf
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  v1 = 0;
  if ( a1 > 15 )
  {
    v10 = a1 - 16;
    if ( !v10 )
      return 1;
    v11 = v10 - 2;
    if ( !v11 )
      return 1;
    v12 = v11 - 2;
    if ( !v12 )
      return 1;
    v13 = v12 - 1;
    if ( !v13 )
      return 1;
    v14 = v13 - 1;
    if ( !v14 )
      return 1;
    v8 = v14 - 1;
    v7 = v8 == 0;
  }
  else
  {
    if ( a1 == 15 )
      return 1;
    v2 = a1 - 2;
    if ( !v2 )
      return 1;
    v3 = v2 - 1;
    if ( !v3 )
      return 1;
    v4 = v3 - 3;
    if ( !v4 )
      return 1;
    v5 = v4 - 2;
    if ( !v5 )
      return 1;
    v6 = v5 - 2;
    if ( !v6 )
      return 1;
    v8 = v6 - 3;
    v7 = v8 == 0;
  }
  if ( v7 || v8 == 1 )
    return 1;
  return v1;
}
