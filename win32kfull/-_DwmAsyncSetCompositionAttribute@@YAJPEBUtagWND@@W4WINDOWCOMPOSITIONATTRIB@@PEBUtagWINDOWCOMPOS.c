__int64 __fastcall _DwmAsyncSetCompositionAttribute(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rax

  v1 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v2 = (void *)ReferenceDwmApiPort();
    return (unsigned int)DwmAsyncSetCompositionAttribute(v2);
  }
  return v1;
}
