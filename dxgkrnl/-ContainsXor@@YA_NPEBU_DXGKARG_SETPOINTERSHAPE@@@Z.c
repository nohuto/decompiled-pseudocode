char __fastcall ContainsXor(const struct _DXGKARG_SETPOINTERSHAPE *a1)
{
  UINT Height; // r10d
  int v2; // edx
  UINT Width; // r11d
  int v4; // r9d

  Height = a1->Height;
  v2 = 0;
  if ( !Height )
    return 0;
  Width = a1->Width;
  while ( 1 )
  {
    v4 = 0;
    if ( Width )
      break;
LABEL_6:
    if ( ++v2 >= Height )
      return 0;
  }
  while ( *(_DWORD *)((char *)a1->pPixels + a1->Pitch * v2 + (unsigned __int64)(unsigned int)(4 * v4)) != -1 )
  {
    if ( ++v4 >= Width )
      goto LABEL_6;
  }
  return 1;
}
