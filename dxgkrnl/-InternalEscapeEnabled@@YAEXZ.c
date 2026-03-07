unsigned __int8 __fastcall InternalEscapeEnabled(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled(a1) )
    return 1;
  return v1;
}
