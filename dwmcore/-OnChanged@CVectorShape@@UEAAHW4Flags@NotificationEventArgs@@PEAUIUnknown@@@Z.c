__int64 __fastcall CVectorShape::OnChanged(__int64 a1, int a2)
{
  unsigned int v3; // r8d
  char v4; // cl
  bool v5; // zf
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v3 = 1;
  if ( !a2 )
    goto LABEL_2;
  v7 = a2 - 1;
  if ( !v7 )
  {
LABEL_9:
    v3 = 0;
    v5 = *(_BYTE *)(a1 + 96) == 0;
    goto LABEL_3;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      if ( v9 != 2 )
        return v3;
      goto LABEL_9;
    }
  }
LABEL_2:
  v4 = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(a1 + 96) = 1;
  v3 = 0;
  v5 = v4 == 0;
LABEL_3:
  LOBYTE(v3) = v5;
  return v3;
}
