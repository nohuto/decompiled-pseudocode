BOOLEAN __stdcall FsRtlOplockIsFastIoPossible(POPLOCK Oplock)
{
  BOOLEAN result; // al
  int v2; // ecx

  result = 1;
  if ( *Oplock )
  {
    v2 = *((_DWORD *)*Oplock + 36);
    if ( v2 != 1 && (v2 & 0x1F00F40) != 0x40 )
      return 0;
  }
  return result;
}
