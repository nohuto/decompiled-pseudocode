__int64 __fastcall IsMiPPointerMessage(unsigned int a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // r8d

  v1 = IsPointerInputMessage(a1);
  v4 = 0;
  if ( v1 )
    goto LABEL_2;
  if ( v3 == 528 && (_WORD)v2 == 582 )
  {
    v2 >>= 16;
LABEL_2:
    LOBYTE(v4) = (_WORD)v2 == 1;
    return v4;
  }
  return 0LL;
}
