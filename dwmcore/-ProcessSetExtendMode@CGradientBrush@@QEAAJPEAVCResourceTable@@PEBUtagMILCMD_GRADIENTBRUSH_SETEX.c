__int64 __fastcall CGradientBrush::ProcessSetExtendMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETEXTENDMODE *a3)
{
  int v3; // r9d
  char v4; // dl
  int v5; // r9d

  v3 = *((_DWORD *)a3 + 2);
  v4 = 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v4 = 3;
    }
    else
    {
      v4 = 2;
    }
  }
  if ( v4 != *((_BYTE *)this + 152) )
  {
    *((_BYTE *)this + 152) = v4;
    CGradientBrush::InvalidateGradient(this);
  }
  return 0LL;
}
