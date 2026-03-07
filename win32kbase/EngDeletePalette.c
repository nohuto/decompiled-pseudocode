BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v3, hpal);
  v1 = EngDeletePaletteInternal((struct EPALOBJ *)&v3);
  if ( v3 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  return v1;
}
