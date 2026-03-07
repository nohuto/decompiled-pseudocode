float *__fastcall CNineGridBrush::TryGetInsetFieldPointer(CNineGridBrush *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a2 )
    return (float *)((char *)this + 120);
  v2 = a2 - 1;
  if ( !v2 )
    return (float *)((char *)this + 124);
  v3 = v2 - 2;
  if ( !v3 )
    return (float *)((char *)this + 96);
  v4 = v3 - 1;
  if ( !v4 )
    return (float *)((char *)this + 100);
  v5 = v4 - 1;
  if ( !v5 )
    return (float *)((char *)this + 112);
  v6 = v5 - 1;
  if ( !v6 )
    return (float *)((char *)this + 116);
  v7 = v6 - 2;
  if ( !v7 )
    return (float *)((char *)this + 104);
  if ( v7 == 1 )
    return (float *)((char *)this + 108);
  return 0LL;
}
